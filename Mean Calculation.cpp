#include <iostream>
#include <string>

using namespace std;

float calculateMean(float , float ,float );
void displatGrade (int , float);

int main() {	
	displatGrade(1, calculateMean(80,85,88));
	displatGrade(2, calculateMean(70,75,78));
	displatGrade(3, calculateMean(60,65,68));
	
}

void displatGrade (int series, float grade){
	cout<<"Grade "<<series<<": "<<grade<<endl;
}

float calculateMean(float mark1, float mark2,float mark3){
	return (mark1+mark2+mark3)/3.0;
}

