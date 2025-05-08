#include <iostream>
#include <utility>
using namespace std;

int* selectionSort(int*, int);
void displayArr(int*, int);

main() {
	int num =11;
	int* data = new int[num]{11,2,3,4,5,6,7,9,8,1,10};
	displayArr(selectionSort(data, num), num);
}

int* selectionSort(int* arr, int n) {
	int count = 0;
	for (int i=0 ; i<n-1 ; i++){
		int min = i+1;
		for (int j=i+1 ; j<n ; j++){
			
			if(arr[j]<arr[min]){
				min=j;
			}
			
			if (arr[min]<arr[i]){
				swap(arr[min] , arr[i]);
				count++;
			}
		}
	}
	cout<<"Total swapping: "<<count<<endl;
	return arr;
}

void displayArr(int* arr, int n) {
	cout <<"[";
	for (int i=0; i<n; i++) {
		if (i!=(n-1)) cout <<arr[i] <<", ";
		else cout <<arr[i];
	}
	cout <<"]";
}

