#include <iostream>
using namespace std;

// topic
// parameter => jekhan theke default value dibo er porer sob parameter er default value set korte hobe na hole error asbe
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
