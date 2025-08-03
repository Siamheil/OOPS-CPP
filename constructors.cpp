#include<iostream>
using namespace std;

class Student{
public:
	string name;
	int rno;
	float cgpa;
	int age;
	
	
	Student(){ // default constructor
		
	}
	
	Student(string n,int r){ //parameterised constructor
		name=n;
		rno=r;
	}
	Student(string n,int r,float cg,int a){ //Parameterised constructor
		name=n;
		rno=r;
		cgpa=cg;
		age=a;
	}
};

void printStudent(Student s){
	cout<<s.name<<" "<<s.rno<<" "<<s.cgpa<<" "<<s.age<<endl;
}


int main(){
	Student s1("Harhit",33,9.0,19);
	//s1.name="Harshit";
	//s1.rno=33;
	//s1.cgpa=9.0;
	//s1.age=19;
	
	Student s2;
	s2.name="Harshita";
	s2.rno=34;
	s2.cgpa=9.3;
	s2.age=19;
	
	Student s3("Harshvardhan",32);
	s3.cgpa=8.6;
	s3.age=18;
	
	Student s4(s1); // copy constructor
	
	
	printStudent (s1);
	printStudent(s2);
	printStudent(s3);
	printStudent(s4);
	
	
}
