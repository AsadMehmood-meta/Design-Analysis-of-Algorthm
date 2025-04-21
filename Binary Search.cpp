#include <iostream>

using namespace std;

void binarySearch(int [] , int , int , int);
bool isKeyExist(int [] , int , int);

int main() {
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	
	int key;
	cout<<"Enter value you want to search: ";
	cin>>key;
	
	if(isKeyExist(arr , 9, key))
		cout<<"Key: "<<key<<" is not exist in array."<<endl;
	else binarySearch(arr , 0 , 9, key);
		
}

bool isKeyExist(int arr[] , int index , int key){
	for (int i=0 ; i<index ; i++){
		if(key==arr[i]);
		return true;
	}
}

void binarySearch(int arr[] , int l , int r , int key){
	
	int mid = (l+r)/2;
	if (key==arr[mid]){
		cout<<"Key = "<<key<<" found at "<<mid<<" index."<<endl;
	} else if (key>arr[mid]){
		binarySearch(arr , mid+1 , r , key);
	} else{
		binarySearch(arr , l , mid-1 , key);
	}
	
}

