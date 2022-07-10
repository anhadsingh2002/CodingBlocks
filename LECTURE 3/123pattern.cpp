/* PRINT THE FOLLOWING PATTERN (N=4)
1
2 3
4 5 6
7 8 9 10
*/
#include <iostream>
using namespace std;

int main() {
    int n, i, row;
    cin >> n;

    int row = 1, no = 1;

    while (row <= n) {

        i = 1;
        while (row <= row) {
            cout << no << " ";\
            no = no + 1;
            i = i + 1;
        }

        cout << '\n';
        row = row + 1;

    }
	return 0;	
}
