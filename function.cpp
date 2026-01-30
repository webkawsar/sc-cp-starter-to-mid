#include <iostream>
using namespace std;

// class-7
// basic function
// ekta function er vitore arekta function declare kora jay na
// function e copy by value hoy



int add(int x, int y) {
    return x + y;
}


void printName(string name) {
    cout << name << "\n";
}

void printName(int a) {
    cout << a << "\n";
}

int main() {
   
    int a = 10;
    int b = 20;

    cout << add(a, b) << endl;

 
    // same name 2ta function hote parbe na
    // jodi same name function ekadik hoy tokhon, function er parameter er upor depend kore oi function call korbe
    printName("Kawsar");
    printName(100);



}
