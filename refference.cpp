#include <iostream>
using namespace std;

int main() {
   
    // here pass value
    string food = "Pizza";
    string meal = food;

    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza

    cout << "=======================" << endl;

    string food2 = "Pizza"; // food variable
    string &meal2 = food2;   // reference to food

    meal2 = "Burger"; // changes both meal and food

    cout << food2 << "\n"; // Outputs Burger
    cout << meal2 << "\n"; // Outputs Burger

}
