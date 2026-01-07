#include <iostream>
#include<iomanip>
using namespace std;

// E. Area of a Circle

int main() {
    //  consider π = 3.141592653.
    // Area = π * R2. 

    int r;
    cin >> r;
    
    double result = 3.141592653 * (r * 2);
    cout << result << setprecision(9);
}


