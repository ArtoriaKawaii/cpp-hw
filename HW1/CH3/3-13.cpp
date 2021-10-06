#include<iostream>
#include<cstdlib>
#include<vector>
#include<ctime>
using namespace std;

bool check(int num, vector<int> vec, int count);

int main(){
	vector<int> prizes; 
	int num;
	srand(time(NULL));
	for(int i = 0; i < 4; i++){
		num = rand() % 25 + 1;
		if(check(num, prizes, i))
			prizes.push_back(num);
		else
			i--;
	}
	cout << "The four winners are\n";
	for(int i = 0; i < 4; i++)
		cout << prizes.at(i) << " ";
	cout << endl;
	return 0;
}

bool check(int num, vector<int> vec, int count){
	bool ans = true;	//ok
	for(int i = 0; i < count; i++){
		if(num == vec.at(i)){
			ans = false;	//not ok
			break;
		}
	}
	return ans;
}
