#include <iostream>
#include <string>

using namespace std;

void greet(string , int);

int main (){	

	greet("Alice", 25);	
	greet("Bob", 30);
	greet("Charlie", 22);
		
}

void greet(string name, int age){
	
	cout<<"Hello! "<<name<<endl<<"Age: "<<age<<endl;
	
}
