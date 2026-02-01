#include <iostream>
using namespace std;


// pass by value
// void sum(int a) {
//     a += 5;
//     cout << "Inside Function: " << a << "\n";
// }


// pass by reference
void sum(int& a) {
    a += 5;
    cout << "Inside Function: " << a << "\n";
}


int main() {
   
    int x = 10;
    sum(x);

    cout << "Outside Function: " << x << "\n";

}
