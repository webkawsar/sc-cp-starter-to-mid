#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,a,b;
    cin >> n >> a >> b;
    
    int t;
    cin >> t;
    
    int temp[t];
    for (int i = 0; i < t; i++){
        cin >> temp[i];
    }

    int count = 0;
    for (int i = 0; i < t; i++){
        if(temp[i] < a){
            count += temp[i];
        }
    }
    
    cout << count;
}
