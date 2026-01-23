#include <iostream>
#include <string>
using namespace std;

int main() {
  
  // unnamed structure
  struct {
  	int id;
    string name;
    int age;
    string profession;
  } dev, developer, programmer;
  
  dev.id = 101;
  dev.name = "Kawsar AHmed";
  dev.age = 30;
  dev.profession = "Developer";
  
  cout << dev.id << endl;
  cout << dev.name << endl;
  cout << dev.age << endl;
  cout << dev.profession << endl;
  
  programmer.id = 102;
  programmer.name = "Samim Mohammed";
  programmer.age = 30;
  programmer.profession = "Pilot";
  
  cout << "===============================" << endl;
  cout << programmer.id << endl;
  cout << programmer.name << endl;
  cout << programmer.age << endl;
  cout << programmer.profession << endl;
  
  return 0;
}
