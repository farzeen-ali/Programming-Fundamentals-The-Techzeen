#include<iostream>

using namespace std;

int main(){
	int age = 21;
	int* ptr = &age;
	
	cout<<"Age: "<<age<<endl; //21
	cout<<"Address of Age: "<<&age<<endl;
	cout<<"Pointer: "<<ptr<<endl;
	cout<<"Dereference Operator: "<<*ptr<<endl; //21
	
	return 0;
}
