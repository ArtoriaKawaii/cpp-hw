#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
	int review[][6] = {{3, 1, 5, 2, 1, 5},
					  {4, 2, 1, 4, 2, 4},
					  {3, 1, 2, 4, 4, 1},
					  {5, 1, 4, 2, 4, 2}};
	int movie, rate, userReview[6] = {0}, match;
	double distance[4] = {0}, min;

	for(int i = 0; i < 3; i++){
		while(true){
			cout << "Enter a movie to rate(100 ~ 105).\n";
			cin >> movie;
			if(movie <= 105 && movie >= 100 && userReview[movie - 100] == 0)
				break;
			else
				cout << "Invalid movie number. Enter again.\n";
		}
		while(true){
			cout << "Enter your rating for this movie(1 ~ 5).\n";
			cin >> rate;
			if(rate <= 5 && rate >= 1)
				break;
			else
				cout << "Invalid rate number. Enter again.\n";
		}
		userReview[movie - 100] = rate;
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 6; j++)
			if(userReview[j] != 0)
				distance[i] += pow(userReview[j] - review[i][j], 2);
		distance[i] = sqrt(distance[i]);
	}
	min = distance[0];
	match = 0;
	for(int i = 1; i < 4; i++){
		if(min > distance[i]){
			min = distance[i];
			match = i;
		}
	}
	cout << "The closest reviewer is number " << match << endl;
	cout << "Predictions for movies you have not yet seen : \n";
	for(int i = 0; i < 6; i++)
		if(userReview[i] == 0)
			cout << "Movie " << 100 + i << " : Predicted rating = " << review[match][i] << endl;
	return 0;
}
