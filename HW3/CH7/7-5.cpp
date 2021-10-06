#include<iostream>
#include<vector>

using namespace std;

int procedure(vector<int> list, int beginIndex);

int main(){
	vector<int> list;
	int suitor;
	cout << "Enter the number of suitors\n";
	cin >> suitor;
	for(int i = 0; i < suitor; i++)
		list.push_back(i+1);
	cout << "To win the princess, you should stand in position " << procedure(list, 0) << endl;
	return 0;
}

int procedure(vector<int> list, int beginIndex){
	if(list.size() == 1)
		return list.at(0);
	else{
		if(beginIndex + 2 >= (int)list.size()){
			beginIndex = beginIndex + 2 - list.size();
			list.erase(list.begin()+beginIndex);
		}
		else{
			beginIndex += 2;
			list.erase(list.begin()+beginIndex);
		}
		if(beginIndex == (int)list.size())
			beginIndex = 0;
		return procedure(list, beginIndex);
	}
}
