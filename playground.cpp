#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        if (n <= 10) {
            cout << 0 << " " << n << "\n";
        } else {
            cout << 10 << " " << (n - 10) << "\n";
        }
    }

    return 0;
}
