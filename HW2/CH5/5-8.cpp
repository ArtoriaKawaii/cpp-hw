#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

double probability(int i);

int main(){
	int people;
	for(people = 2; people <= 50; people++)
		cout << "For " << people << " people, the probability of two birthdays is about " << probability(people) << endl;
	return 0;
}

double probability(int people){
	int birth[people], index, count = 0, flag;
	srand(time(NULL));
	for(int i = 0; i < 5000; i++){
		flag = 0;
		for(index = 0; index < people; index++)	//assign birthday
			birth[index] = rand() % 365;
		for(index = 0; index < people - 1; index++)	//count
			for(int j = index + 1; j < people; j++)
				if(birth[index] == birth[j])
					flag = 1;
		count += flag;
	}
	return count / 5000.0;
}
