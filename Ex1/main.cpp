#include<iostream>
using namespace std;

int main() {
	int* p = new int{ 37 };

	cout << p << endl;
	cout << *p << endl;
	
	delete p;
	p = nullptr; // optionnel
	p = new int{ 50 };


	cout << p << endl;
	cout << *p << endl;

	delete p; // optionnel
	p = nullptr;
	return 0;
}
