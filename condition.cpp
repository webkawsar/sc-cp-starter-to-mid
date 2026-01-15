#include <iostream>
using namespace std;

// ternary operator

int main() {
    // int time = 20;
    // string result = (time < 18) ? "Good day." : "Good evening.";
    // cout << result;


    // inside in cout
    // int time = 20;
    // cout << (time >= 18 ? "You can vote" : "You are not a voter");



    // nested ternary
    int time = 22;
    string message = (time < 12) ? "Good morning." : (time < 18) ? "Good afternoon."
    : "Good evening.";
    cout << message;
  
}
