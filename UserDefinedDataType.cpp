#include<iostream>
using namespace std;

class Student{
public:
	string name;
	int rno;
	float cgpa;
	int age;
};

class Car{
public:
	string name;
	int price;
	int seats;
	string type;
		
};

void printStudent(Student s){
	cout<<s.name<<" "<<s.rno<<" "<<s.cgpa<<" "<<s.age<<endl;
}

void change(Student &s){
	s.cgpa=9.6;
	
}


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

	change(s2);
	
	printStudent (s1);
	printStudent(s2);
	
	Car c1;
	c1.name="Honda City";
	c1.price=1300000;
	c1.seats=6;
	c1.type="sedan";
	
	cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
	 
}
