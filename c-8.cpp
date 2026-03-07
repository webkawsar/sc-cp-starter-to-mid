#include <iostream>
using namespace std;

// topic
// recursion function

// 48 minute theke
// pass by value 
// pass by reference

// lamda function


void sum(int a) {
    if(a==0) return;
    cout << a << "\n";
    sum(a-1);
}

int main() {
   
    int n = 5;
    sum(n);
}
