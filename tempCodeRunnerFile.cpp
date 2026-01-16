#include <iostream>
using namespace std;

int main() {
  int testCase;
  cin >> testCase;

  int mountainCount;
  cin >> mountainCount;

  int tallestMountain;
  long long mountains[mountainCount];

  for(int i = 0; i < mountainCount; i++) {
    cin >> mountains[i];
    if(mountains[i] > tallestMountain) {
      tallestMountain = mountains[i];
    }
  }

  cout << tallestMountain;

}
