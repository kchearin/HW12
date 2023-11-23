#include<iostream>
using namespace std;
class Person {
public:
	Person(int x) { a = x; cout << "Person::Person(int ) called" << endl; }
	Person() { a = 5; cout << "Person::Person() called" << endl; }
	int a;
};

class Faculty : virtual public Person {
public:
	Faculty(int x) :Person(x) {
		b = 77;
		cout << "Faculty::Faculty(int ) called" << endl;
	}
	int b;
};

class Student : virtual public Person {
public:
	Student(int x) :Person(x) {
		c = 123;
		cout << "Student::Student(int ) called" << endl;
	}
	int c;
};

class TA : public Faculty, public Student {
public:
	TA(int x) :Student(x), Faculty(x) {
		cout << "TA::TA(int ) called" << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
	}
};

int main() {
	TA ta1(30);
}
