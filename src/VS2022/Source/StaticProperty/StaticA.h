#pragma once
using namespace std;
class StaticA
{
private:
	int A = 0;
public:
	static int staticcnt; // Static variables;
	StaticA() { staticcnt++; }
	~StaticA() { }

	void showMessage1() {
		cout << "Hello from static method!" << this->A; // can access to this
	}
	static void showMessage() {
		cout << "Hello from static method!" /*this->A*/; // can not access to this
	}
};

