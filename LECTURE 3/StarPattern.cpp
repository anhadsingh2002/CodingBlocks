/* PRINT THE FOLLOWING PATTERN (N=4)
*
* *
* * *
* * * *

*/

#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;

    int row = 1;

    while (row <= n) {
        //WORK
        // HAR ROW ME ROW TIMES * PRINT KARNA 
        // GENERIC WORK -- ROW TIMES *

        i = 1;
        while (i <= row) {
            cout << '%' << " ";
            i = i + 1;
        }

        cout << '\n';
        row = row + 1;

    }
	return 0;	
}




