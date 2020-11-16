#include <iostream>
#include <vector> 
#include <string>

using namespace std;

int main() {
  vector<string> MyVec;
  MyVec = {"Dark theme"};



for (int i = 0; i < 1; i++) {
MyVec.push_back( "Woah" + to_string(i));

}



for (int i = 0; i < MyVec.size(); i++) {

  cout << MyVec[i] << endl; 
}




}