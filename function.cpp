#include <iostream>
using namespace std;

// class-7
// basic function
// ekta function er vitore arekta function declare kora jay na
// function e copy by value hoy


int add(int x, int y) {
    return x + y;
}

int main() {
   
    int a = 10;
    int b = 20;

    cout << add(a, b);
}
