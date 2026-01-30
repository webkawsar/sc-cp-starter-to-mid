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

// int sum(int a, int b, int c) {
//     return a + b + c;
// }


int sum(int a, int b=10, int c=20) {
    return a + b + c;
}

int main() {
   
    int a = 10;
    int b = 20;

    // cout << add(a, b) << endl;

 
    // same name 2ta function hote parbe na
    // jodi same name function ekadik hoy tokhon, function er parameter er upor depend kore oi function call korbe
    // printName("Kawsar");
    // printName(100);


    // function default parameter 
    int first = 100;
    int second = 200;
    int third = 300;

    // je parameter er default value set korbo er porer sob koyta parameter er default value set na korle error show korbe
    // cout << sum(first, second, third);
    cout << sum(first, second, third);





}
