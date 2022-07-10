// WAP WHICH TAKES INITIAL VALUE, FINAL VALUE & STEP VALUE & PRINTS A TABLE FOR FAHRENHEIT TO CELSIUS USING FORMULA C = (5/9)(F - 32)

#include <iostream>
using namespace std;

int main() {
    int initial,final,step,f,c;

    cout << "Enter Initial Value";
    cin >> initial;

    cout << "Enter Final Value";
    cin >> final;

    cout << "Enter Step Value";
    cin >> step;

    f = initial;
    while (f <= final) {
        c = (5/9.0)*(f - 32);

        cout << f << " " << c << endl;

        f = f + step;
    }
return 0;	  
}       