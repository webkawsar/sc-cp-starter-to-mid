#include <iostream>
using namespace std;


// array


int main() {
    // int numbers[5];
    // cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];

    // // int sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    // int sum = numbers[0] + numbers[-1] + numbers[2] + numbers[3] + numbers[4];
    // cout << sum << endl;



    
    // dynamic array 
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += numbers[i];
    }
    
    cout << sum;
  
}
