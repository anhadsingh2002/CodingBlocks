#include <iostream>
using namespace std;
//SYNTAX: #define MACRO_NAME MACRO_VAL
#define NEWLINE endl
#define PRINT cout <<
#define PI 3.14+1

int main() {

    PRINT "Hello World" << NEWLINE;

    int r = 1;
    PRINT 2 * PI * r << NEWLINE;

    return 0;
}

