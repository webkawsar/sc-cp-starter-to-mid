#include <iostream>
using namespace std;

// D. Difference

int main() {
    //  X = (A * B) - (C * D).
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    long long x = (a * b) - (c * d);

    cout << "Difference = " << x;
}


