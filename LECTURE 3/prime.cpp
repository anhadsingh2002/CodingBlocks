#include <iostream>
using namespace std;

int main() {
     
     int i, n;
     cin >> n;

     i = 2;
     while (i <= n - 1) {

        if (n % i == 0) {
            cout << "IS NOT PRIME\n";
            return 0;
        }
        i=i+1;
        }
    cout << "IS PRIME\n";

	return 0;	
}
