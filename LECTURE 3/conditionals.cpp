#include <iostream>
using namespace std;

int main() {

	int a;
	cin >> a;

	if (a > 10 && a < 20) {
		cout << "HELLO WORLD" << '\n';
	}
	else if (a > 20 && a < 30) {
		cout <<"WELCOME TO THE WORLD\n";
	}
	else {
		cout << "Okay" << endl;
	}


	return 0;	
}
