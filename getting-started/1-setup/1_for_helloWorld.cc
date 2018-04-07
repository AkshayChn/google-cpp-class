// helloWorld.cc: Akshay C
// Description: a program that prints the immortal saying "hello world!" 4 times a line for 6 lines


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for(int i = 0; i < 6; i++) {
      for(int j =0; j < 4; j++) {
        cout << setw(17) << "Hello World! ";
      }
      cout << endl;
  }
  return 0;
}
