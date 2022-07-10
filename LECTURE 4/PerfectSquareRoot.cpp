//PERFECT SQUARE
#include <iostream>
using namespace std;

int main() 
{
    int n;
     cout << "Enter the Value: ";
    cin >> n;

    
    int i =0, inc = 1;
    while (i * i <= n) {
        i = i + inc;
    }

    i = i - inc;
    cout << i << endl;

    return 0;
}

