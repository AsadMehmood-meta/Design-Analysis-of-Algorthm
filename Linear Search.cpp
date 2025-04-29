#include <iostream>

using namespace std;

int main(){
	int arr[10] = {85,15,64,17,25,18,68,17,94,27};
	int n = 10 , k = 0;
	int key = 17;
	int count = 0;
	int position[n];
	
	for(int i=0 ; i<n ; i++){
		if(arr[i]==key){
			cout<<"Your desired number is on "<<i<<" index."<<endl;
			count+=1;
			position[k]=i;
			k++;
		} 
	}
	
	if (count==0){
			cout<<"Your number is not include in list."<<endl;
	}else if(count>1){
		cout<<"Your desired number is present "<<count<<" times."<<endl;
	}
}
