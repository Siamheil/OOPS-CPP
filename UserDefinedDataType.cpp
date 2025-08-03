#include<iostream>
using namespace std;

class Student{
public:
	string name;
	int rno;
	float cgpa;
	int age;
};
int main(){
	Student s1;
	s1.name="Harshit";
	s1.rno=33;
	s1.cgpa=9.0;
	s1.age=19;
	
	Student s2;
	s2.name="Harshita";
	s2.rno=34;
	s2.cgpa=9.3;
	s2.age=19;
	
	cout<<s1.name<<" "<<s1.rno<<" "<<s1.cgpa<<" "<<s1.age<<endl;
	cout<<s2.name<<" "<<s2.rno<<" "<<s2.cgpa<<" "<<s2.age<<endl;
	 
}
