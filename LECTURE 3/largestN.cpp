#include <iostream>
#include <climits> // INT_MAX: 2^31 - 1,   INT_MIN: -2^31

using namespace std;

int main() {

    int n, i, no, largest;
    cin >> n;
    
    //TAKING N TIMES INPUT AND PRINTING THE RESULT
    i = 1;
    largest = INT_MIN;
    while (i <= n) {
        cin >> no;

        if (no > largest) {
            largest = no;
        }

        i = i + 1;
    }

    cout << "Largst number: " << largest << endl;

	return 0;	
}