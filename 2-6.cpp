#include <iostream>
using namespace std;
class mm {
public:
	mm() { a = 4 + 300; cout << "mm\n"; }
	mm(int b) { 
		a = b + 100; 
		cout << "mmb\n"; }
	int a;
};
class nn : public mm {
public:
	nn() { a = 11;  cout << "nn\n"; c = 40; }
	nn(int b) { 
		c = a;  
		a = b; 
		mm::mm(a);  
		cout << "nnb\n"; }
	int c;
};
class oo :public nn {
public:
	oo() { 
		xx = 123;
		nn::nn(xx);
		cout << "oo\n";
	}
	oo(int yy) {
		xx = yy;
		cout << "oob\n";
	}
	int xx;
};
int main() {
	/*
	cout << "nn pp(5)" << endl;
	nn pp(5);
	cout << pp.a << endl;
	cout << pp.c << endl<<endl;
	*/

	oo qq;
	cout << qq.a << endl;
	cout << qq.c << endl;
	cout << qq.xx << endl << endl;

	return 123;
}
