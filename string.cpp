#include <iostream>
#include <string>
using namespace std;

// string
// string value must be quoted by double 



int main() {

    string firstName = "Mahdi ";
    string lastName = "Hasan";

    // print
    // cout << firstName << endl;

    // concatenation
    // cout << firstName + lastName << "\n";
    
    // string fullName = firstName + " " + lastName;
    // cout << fullName << endl;

    // concatenate strings with the append() function
    // string fullName = firstName.append(lastName);
    // string fullName = firstName.append("Ahmed");
    // cout << fullName << endl;

    // best practice recommended by w3 schools
    string fullName = firstName;   // আগে copy
    fullName.append("Ahmed");     // তারপর append
    cout << fullName << endl;

    // string some function
    // string.at()

}
