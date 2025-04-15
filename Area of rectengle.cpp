#include <iostream>
#include <string>

using namespace std;

void rectangleArea(int , int , int);

int main() {	
	rectangleArea(1,5,10);
	rectangleArea(2,6,7);
	rectangleArea(3,3,4);
}

void rectangleArea(int series, int length, int width){
	cout<<"Area of rectangle "<<series<<" : "<<length*width<<endl;
}

