#include <iostream>
using namespace std;
#define MAX_LENGTH 100
int main(){
	//define variables
	int age;
	char name[MAX_LENGTH]={0};
	//prompt the user to enter name and age
	cout<<"Enter name :";
	cin.getline(name, MAX_LENGTH);
	cout<<"Enter age :" ;
	cin>>age;

	//print the value of name and age
	cout<<"Name :"<<name<<endl;
	cout<<"Age :" <<age<<endl;
	
	cout<<"My name is "<<name <<" and I am "<<age<<" years old.";
	return 0;
}