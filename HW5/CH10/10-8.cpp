#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;

class Television{
    private:
        string displayType;
        double dimension;//inches
        string* connectivitySupport;
        int connectivityMode;//record num of connectivity supports
    public:
        Television();
        Television(string displayType, double dimension, string* connectivitySupport, int connectivityMode);
        Television(const Television& tv);
        void setDisplayType(string displayType);
        void setDimension(double dimension);
        void setConnectivitySupport(string* connectivitySupport, int connectivityMode);
        friend ostream& operator<<(ostream& os, const Television& tv);
        friend bool operator==(const Television& tv1, const Television& tv2);
        Television& operator=(const Television& tv);
        ~Television();
};

int main(){
    string displayType;
    double dimension;//inches
    string* connectivitySupport;
    int connectivityMode;//record num of connectivity supports
    cout << "Enter default TV display type :\n";
    getline(cin, displayType);
    cout << "Enter default TV dimension :\n";
    cin >> dimension;
    cout << "Enter default TV connectivity modes :\n";
    cin >> connectivityMode;
    connectivitySupport = new string[connectivityMode];
    cout << "Enter default TV connectivity support types :\n";
    cin.ignore(10, '\n');
    for(int i = 0; i < connectivityMode; i++)
        getline(cin, connectivitySupport[i]);
    Television defaultTV(displayType, dimension, connectivitySupport, connectivityMode);
    delete [] connectivitySupport;
    connectivitySupport = nullptr;
    cout << "Default TV mode :\n" << defaultTV;
    int TVNum;
    cout << "Enter tv numbers : ";
    cin >> TVNum;
    Television* tvs = new Television[TVNum];
    for(int i = 0; i < TVNum; i++)
        tvs[i] = Television(defaultTV);
    while(true){
        int index;
        cout << "Enter index of TVs required of customization (input -1 to end) :\n";
        cin >> index;
        if(index == -1)
            break;
        else if(index < 0 || index >= TVNum)
            cout << "Invalid index, try again.\n";
        else{
            cin.ignore(10, '\n');
            cout << "Enter TV#" << index << " display type :\n";
            getline(cin, displayType);
            tvs[index].setDisplayType(displayType);
            cout << "Enter TV#" << index << " dimension :\n";
            cin >> dimension;
            tvs[index].setDimension(dimension);
            cout << "Enter TV#" << index << " connectivity modes :\n";
            cin >> connectivityMode;
            connectivitySupport = new string[connectivityMode];
            cout << "Enter TV#" << index << " connectivity support types :\n";
            cin.ignore(10, '\n');
            for(int i = 0; i < connectivityMode; i++)
                getline(cin, connectivitySupport[i]);
            tvs[index].setConnectivitySupport(connectivitySupport, connectivityMode);
            delete [] connectivitySupport;
            connectivitySupport = nullptr;
        }
    }
    for(int i = 0; i < TVNum; i++)
        cout << "TV#" << i << endl << tvs[i];
    return 0;
}

ostream& operator<<(ostream& os, const Television& tv){
    os << "DisplayType : " << tv.displayType << endl;
    os << "Dimension(inches) : " << tv.dimension << endl;
    os << "Connectivity support types :\n";
    for(int i = 0; i < tv.connectivityMode; i++)
        os << tv.connectivitySupport[i] << endl;
    return os;
}
bool operator==(const Television& tv1, const Television& tv2){//check if two tvs were actually the same tv
    return (tv1.displayType == tv2.displayType && tv1.dimension == tv2.dimension && tv1.connectivityMode == tv2.connectivityMode && tv1.connectivitySupport == tv2.connectivitySupport);
}
Television::Television(){
    displayType = "Unkuown";
    connectivityMode = 0;
    dimension = 0;
    connectivitySupport = nullptr;
}
Television::Television(string displayType, double dimension, string* connectivitySupport, int connectivityMode){
    this->displayType = displayType;
    this->dimension = dimension;
    this->connectivityMode = connectivityMode;
    this->connectivitySupport = new string[this->connectivityMode];
    for(int i = 0; i < this->connectivityMode; i++)
        this->connectivitySupport[i] = connectivitySupport[i];
}
Television::Television(const Television& tv){
    displayType = tv.displayType;
    dimension = tv.dimension;
    connectivityMode = tv.connectivityMode;
    connectivitySupport = new string[connectivityMode];
    for(int i = 0; i < connectivityMode; i++)
        connectivitySupport[i] = tv.connectivitySupport[i];
}
void Television::setDisplayType(string displayType){
    this->displayType = displayType;
}
void Television::setDimension(double dimension){
    this->dimension = dimension;
}
void Television::setConnectivitySupport(string* connectivitySupport, int connectivityMode){
    if(this->connectivityMode == 0);
    else
        delete [] this->connectivitySupport;
    this->connectivityMode = connectivityMode;
    this->connectivitySupport = new string[this->connectivityMode];
    for(int i = 0; i < connectivityMode; i++)
        this->connectivitySupport[i] = connectivitySupport[i];
}
Television& Television::operator=(const Television& tv){
    if(*this == tv);
    else if(tv.connectivityMode == 0){
        displayType = tv.displayType;
        dimension = tv.dimension;
        if(connectivityMode == 0)
            connectivityMode = tv.connectivityMode;
        else{
            connectivityMode = tv.connectivityMode;
            delete [] connectivitySupport;
            connectivitySupport = nullptr;
        }
    }
    else{
        displayType = tv.displayType;
        dimension = tv.dimension;
        if(connectivityMode == 0){
            connectivityMode = tv.connectivityMode;
            connectivitySupport = new string[connectivityMode];
        }
        else{
            connectivityMode = tv.connectivityMode;
            delete [] connectivitySupport;
            connectivitySupport = new string[connectivityMode];
        }
        for(int i = 0; i < connectivityMode; i++)
            connectivitySupport[i] = tv.connectivitySupport[i];
    }   
    return *this;
}
Television::~Television(){
    if(connectivityMode == 0);
    else{
        delete [] connectivitySupport;
        connectivitySupport = nullptr;
    }
}
