#include<iostream>

using namespace std;

class TwoD{
    private:
        double** arr;
        int maxRows, maxCols;
    public:
        TwoD();
        TwoD(int maxRows, int maxCols);
        TwoD(const TwoD& temp);
        ~TwoD();
        int getMaxRows() const;
        int getMaxCols() const;
        void setValue(int row, int col, double value);
        double getValue(int row, int col) const;
        TwoD& operator=(const TwoD& second);
        friend TwoD operator+(const TwoD& first,const TwoD& second);
        friend ostream& operator<<(ostream& os, TwoD twoD);

};

int main(){
    int maxRows, maxCols;
    double value;
    /*matrix1*/
    cout << "Enter the row and column dimensions of the array\n";
    cin >> maxRows >> maxCols;
    TwoD matrix1(maxRows, maxCols);
    cout << "Enter " << matrix1.getMaxRows() << " rows of " << matrix1.getMaxCols() << " doubles each\n";
    for(int i = 0; i < matrix1.getMaxRows(); i++){
        for(int j = 0; j < matrix1.getMaxCols(); j++){
            cin >> value;
            matrix1.setValue(i, j, value);
        }
    }
    cout << "Echoing the 2-dimension array, matrix1\n" << matrix1;
    /*matrix2*/
    cout << "Enter the row and column dimensions of the array\n";//should be the same as matrix1
    cin >> maxRows >> maxCols;
    TwoD matrix2(maxRows, maxCols);
    cout << "Enter " << matrix2.getMaxRows() << " rows of " << matrix2.getMaxCols() << " doubles each\n";
    for(int i = 0; i < matrix2.getMaxRows(); i++){
        for(int j = 0; j < matrix2.getMaxCols(); j++){
            cin >> value;
            matrix2.setValue(i, j, value);
        }
    }
    cout << "Echoing the 2-dimension array, matrix2\n" << matrix2;
    /*matrix3*/
    cout << "Assigning matrix2 to matrix3\n";
    TwoD matrix3 = matrix2;
    cout << "Displaying the 2-dimension array, matrix3 resulting from assignment\n";
    cout << "Rows " << matrix3.getMaxRows() << " Cols " << matrix3.getMaxCols() << endl;//should be the same as matrix2
    cout << matrix3;
    /*arrays sum*/
    cout << "Displaying the 2-dimension array, sum of matrix1 and matrix2\n";
    cout << "Rows " << (matrix1 + matrix2).getMaxRows() << " Cols " << (matrix1 + matrix2).getMaxCols() << endl;//should be the same as matrix1 and matrix2
    cout << (matrix1 + matrix2);
    return 0;
}

TwoD::TwoD(){
    maxRows = 10;
    maxCols = 10;
    arr = new double*[10];    
    for(int i = 0; i < 10; i++)
        arr[i] = new double[10];
}
TwoD::TwoD(int maxRows, int maxCols){
    this->maxRows = maxRows;
    this->maxCols = maxCols;
    arr = new double*[maxRows];    
    for(int i = 0; i < this->maxRows; i++)
        arr[i] = new double[this->maxCols];
}
TwoD::TwoD(const TwoD& temp){
    maxRows = temp.maxRows;
    maxCols = temp.maxCols;
    arr = new double*[maxRows];    
    for(int i = 0; i < maxRows; i++)
        arr[i] = new double[maxCols];
    for(int i = 0; i < maxRows; i++)
        for(int j = 0; j < maxCols; j++)
            arr[i][j] = temp.getValue(i, j);
}
TwoD::~TwoD(){
    for(int i = 0; i < maxRows; i++)
        delete[] arr[i];
    delete[] arr;
}
int TwoD::getMaxRows() const{
    return maxRows;
}
int TwoD::getMaxCols() const{
    return maxCols;
}
void TwoD::setValue(int row, int col, double value){
    arr[row][col] = value;
}
double TwoD::getValue(int row, int col) const{
    return arr[row][col];
}
TwoD& TwoD::operator=(const TwoD& second){
	if(arr == second.arr)
		return *this;
    else if(maxRows == second.maxRows && maxCols == second.maxCols);
    else{
        for(int i = 0; i < maxRows; i++)
            delete[] arr[i];
        delete[] arr;
        arr = new double*[second.maxRows];    
        for(int i = 0; i < second.maxRows; i++)
            arr[i] = new double[second.maxCols];
        maxRows = second.maxRows;
        maxCols = second.maxCols;
    }
    for(int i = 0; i < maxRows; i++)
        for(int j = 0; j < maxCols; j++)
            arr[i][j] = second.arr[i][j];
    return *this;
}
TwoD operator+(const TwoD& first,const TwoD& second){
    if(first.maxRows == second.maxRows && first.maxCols == second.maxCols){
        TwoD temp(first.maxRows, first.maxCols);
        for(int i = 0; i < temp.maxRows; i++)
            for(int j = 0; j < temp.maxCols; j++)
                temp.arr[i][j] = first.arr[i][j] + second.arr[i][j];
        return temp;
    }
    else//should not happen
        exit(1);
}
ostream& operator<<(ostream& os, TwoD twoD){
    for(int i = 0; i < twoD.maxRows; i++){
        for(int j = 0; j < twoD.maxCols; j++)
            cout << twoD.arr[i][j] << " ";
        cout << endl;
    }
    return os;
}
