#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateRandomScore(int* , int);
void linearSearch(int* , int [] , int , int);
int innerLinearSearch(int* , int , int);
void flagStudents(int* , int);

int main(){
	
	int n = 500;
	int m = 20;
	int queries[m] = {10,20,30,40,50,15,25,35,45,55,5,65,75,85,95,60,70,80,90,100};
	
	int* score = new int [n];
	
	generateRandomScore(score , n);
	linearSearch(score , queries , n , m);
	cout<<endl<<endl<<endl;
	flagStudents(score , n);
	
}

void generateRandomScore(int* score , int n){
	srand(time(0));
	for (int i=0 ; i < n ; i++){
		score[i] = rand() % 101;
	}
}

void linearSearch(int* score, int queries[] , int n , int m){
	for (int i=0 ; i<m ; i++){
		int target = queries[i];
		int count = innerLinearSearch(score , target , n);
		cout<<"Query: "<< target << " ?\t Students with >= score: \t"<<count<<endl;
	}
}

int innerLinearSearch(int* score, int target, int n){
	int count = 0;
	for(int i=0 ; i<n ; i++){
		if (score[i]>= target)
			count++;
		}
	return count;
}

void flagStudents(int* score, int n){
	int count = 0;
	for (int i=0 ; i<n ; i++){
		if (score[i]==100){
			count++;
		}
	}
	cout<<"Number of students who scored full marks: "<<count<<endl;
}

