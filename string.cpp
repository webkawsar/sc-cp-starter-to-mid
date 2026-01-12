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




    // string some function
    // concatenate strings with the append() function
    // string fullName = firstName.append(lastName);
    // string fullName = firstName.append("Ahmed");
    // cout << fullName << endl;




    // returns an indexed character from a string.
    // string txt = "Hello World!";
    // cout << txt.at(0) << endl;

    // access the last character by technique
    // cout << txt.at(txt.length() - 1);




    // get the last character of string
    // string txt = "Hello World!";
    // cout << txt.back() << endl;




    // Checks whether the string is empty
    // string txt1 = "Hello World!";
    // string txt2 = "";
    // cout << txt1.empty() << endl; // 0
    // cout << txt2.empty() << endl; / 1




    // Returns the number of characters in the string
    // string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout << "The length of the txt string is: " << txt.length() << endl;
    // cout << "The length of the txt string is: " << txt.size();





    // access the characters in a string by referring to its index number inside square brackets []
    // string myString = "Hello Duniya!";
    // cout << myString[0] << endl;
    // cout << myString[6] << endl;
    // cout << myString[myString.length() - 1];



    // To change the value of a specific character in a string
    // string myString = "Hello Duniya!";
    // myString[6] = 'M';
    // cout << myString << endl;



    // string fName;
    // cout << "Type your first name: ";
    // cin >> fName; // get user input from the keyboard
    // cout << "Your name is: " << fName;

    


    // string fullName;
    // cout << "Type your full name: ";
    // getline (cin, fullName);
    // cout << "Your name is: " << fullName << endl;

    // string profession;
    // cout << "Profession: ";
    // getline(cin, profession);
    // cout << "Your profession: " << profession;




    string greeting1 = "Hello Duniya!";  // Regular String
    char greeting2[] = "Hello Duniya Again";  // C-Style String (an array of characters)
    cout << greeting1 << endl;
    cout << greeting2 << endl;

}
