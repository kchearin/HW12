#include <iostream>
using namespace std;
class A {
public:
	A() : ii(10) {};
	A(int x) :ii(x) {};
	int ii;
};
class B : public A{
public:
	B() : A(8) { A(88); bbb = ii + 5; ccc = 10 * ii; };
// A(88) no variable name
	B(int x) : A() { bbb = x; ccc = 10 * ii; };
int bbb;
int ccc;
};
void main() {
	B e, f(22);
	cout << "bbb ccc" << endl;
	cout << e.bbb <<"  "<<e.ccc << endl;
	cout << f.bbb <<"  "<<f.ccc << endl;
}
