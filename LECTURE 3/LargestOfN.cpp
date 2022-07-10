#include <iostream>

using namespace std;

int main() {

    int n, i, no;
    cin >> n;

    //TAKING N TIMES INPUT AND PRINTING THE RESULT
    i = 1;
    while (i <= n) {
        cin >> no;

        cout << "User entered:" << no << endl;

        i = i + 1;
    }

    cout << endl;

	return 0;	
}