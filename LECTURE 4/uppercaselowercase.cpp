#include <iostream>
using namespace std;

int main() {

    char ch;
    cout << "Enter a character";
    cin>>ch;

    if (ch >= 'A' and ch <= 'Z') {
        cout << "Upper Case" << endl;
    }
    else {
        cout <<"Lower Case" << endl;
    }
return 0;
}