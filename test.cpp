#include <iostream>
using namespace std;

int main() {
    int x = 10.89;
    double y = 3.14;

    cout <<typeid(x).name()<<endl;
    cout <<typeid(y).name()<<endl;
}
