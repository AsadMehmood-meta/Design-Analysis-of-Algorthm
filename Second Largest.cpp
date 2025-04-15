#include <iostream>

using namespace std;

float secondLargest(float a, float b, float c);

int main (){
	float a,b,c;
	cout<<"Enter first value: ";
	cin>>a;
	cout<<"Enter second value: ";
	cin>>b;
	cout<<"Enter third value: ";
	cin>>c;
	cout<<"Second largest number is "<<secondLargest(a,b,c);
}

float secondLargest(float a, float b, float c){
	if((a>b&&a<c)||(a<b&&a>c){
		return a;
	} else if ((b>a&&b<c)||(b<a&&b>c)){
		return b;
	} else {
		return c;
	}
}
