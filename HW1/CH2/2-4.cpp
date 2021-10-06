#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num);

int main(){
	for(int i = 3; i <= 100; i++)
		if(isPrime(i))
			cout << i << " is a prime number.\n";
	return 0;
}

bool isPrime(int num){
	bool ans = true;
	for(int i = 2; i <= sqrt(num); i++){
		if(num % i == 0){
			ans = false;
			break;
		}
	}
	return ans;
}
