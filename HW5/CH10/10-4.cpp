#include<iostream>
#include<string>
using namespace std;
class Subscriber{
    private:
        string name, *channelList;
        int numChannels;
    public:
        Subscriber();
        void enterData();
        void reset();
        friend ostream& operator<<(ostream& os, const Subscriber& subscriber);
        Subscriber& operator=(const Subscriber& subscriber);
        ~Subscriber();
};

int main(){
    Subscriber subscriber1, subscriber2;
    subscriber1.enterData();
    cout << "\nPerson 1's data : \n" << subscriber1 << endl;
    subscriber2 = subscriber1;//Subscriber subscriber2 = subscriber1 uses default assignment operator (shallow copy)
    cout << "Person 2's data after assignment from person 1 : \n" << subscriber2 << endl;
    subscriber1.reset();
    cout << "Person 1's data after reset : \n" << subscriber1 << endl;
    cout << "Person 2's data, should not be reseted : \n" << subscriber2 << endl;
}
ostream& operator<<(ostream& os, const Subscriber& subscriber){
    os << "Name : " << subscriber.name << endl;
    os << "Number of channels : " << subscriber.numChannels << endl; 
    for(int i = 0; i < subscriber.numChannels; i++)
        os << "\tChannel " << i + 1 << " : " << subscriber.channelList[i] << endl;
    return os;
}
Subscriber::Subscriber(){
    name = "Unknown";
    numChannels = 0;
    channelList = nullptr;
}
void Subscriber::enterData(){
    cout << "Enter person name.\n";
    getline(cin, name);
    cout << "Enter number of channels.\n";
    cin >> numChannels;
    channelList = new string[numChannels];
    cin.ignore(10, '\n');
    for(int i = 0; i < numChannels; i++){
        cout << "Enter name of channel " << i + 1 << endl;
        getline(cin, channelList[i]);
    }
}
void Subscriber::reset(){
    if(numChannels > 0){
        numChannels = 0;
        delete [] channelList;
        channelList = nullptr;
    }
}
Subscriber& Subscriber::operator=(const Subscriber& subscriber){
    if(name == subscriber.name && numChannels == subscriber.numChannels && channelList == subscriber.channelList)
        return *this;
    else if(numChannels == 0 && channelList == nullptr);
    else{
        delete [] channelList;
        channelList = nullptr;
    }
    name = subscriber.name;
    numChannels = subscriber.numChannels;
    if(subscriber.numChannels > 0){
        channelList = new string[numChannels];
        for(int i = 0; i < numChannels; i++)
            channelList[i] = subscriber.channelList[i];
    }
    return *this;
}
Subscriber::~Subscriber(){
    if(this->numChannels == 0 && this->channelList == nullptr);
    else{
        delete [] channelList;
        channelList = nullptr;
    }
}