#include <iostream>
#include <string>
using namespace std;

int main() {
 int mynumbers[5] = {1,2,3,4,5};
 string boom = "BOOM!";

  for(int countdown : mynumbers) {
  cout << countdown << endl;
  }
cout << boom << endl;
return 0;
}
