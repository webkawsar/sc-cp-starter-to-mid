#include <iostream>
using namespace std;

// default value start from 0
// enum Level {
//   LOW,
//   MEDIUM,
//   HIGH
// };


// we can assign value
// enum Level {
//   LOW = 25,
//   MEDIUM = 50,
//   HIGH = 75
// };


// if i assign a value to one specific item, the next items will update their numbers accordingly
enum Level {
  LOW=100,
  MEDIUM,
  HIGH
};

int main() {
   
    enum Level myVar = MEDIUM;
    cout << myVar;

}
