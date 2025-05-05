#include <iostream>
#include <utility>

using namespace std;

void printArray(int* , int);
void sortArray(int* , int);

int main (){
	
	int size = 6;
	int* arr = new int [size] {9,6,8,2,8,4};  
	
	cout<<"Original array:\t";
	printArray(arr,size);
	
	sortArray(arr,size);
	
	cout<<"Sorted array:\t";
	printArray(arr,size);
}

void sortArray(int* arr, int size){
	for (int i=0 ; i<size-1 ; i++){
		
		for (int j=0 ; j<size-(i+1) ; j++){	
					
			if (arr[j] > arr[j+1]){
				swap(arr[j] , arr[j+1]);
			}
					
		}
	}	
}

void printArray(int* arr, int size){
	
	for (int i=0 ; i<size ; i++){
		cout<<arr[i]<<"\t";
	}
	
	cout<<endl;
}


