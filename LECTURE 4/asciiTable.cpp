#include <iostream>
using namespace std;
int main(){
    char ch;
    int i;
    i = 65;

    while (i<=122) {
        ch = i;

        cout << ch << " " << i << endl;

        i = i+1;
    }
    return 0;
}