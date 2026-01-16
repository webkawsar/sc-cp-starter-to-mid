#include <iostream>
using namespace std;

int main() {
  int testCase;
    cin >> testCase;

    while (testCase > 0) {
      int question;
      cin >> question;

      if (question <= 10) {
          cout << 0 << " " << question << "\n";
      } else {
          cout << 10 << " " << (question - 10) << "\n";
      }

      testCase--;
    }
  
  
}
