
#include <iostream>
using namespace std;

int main() {
    int x = 10; // Corrected the initilalization of x
    int y = 20;

 cout << "Before swap; x = "<< x <<",y=" << y << endl;
 // Swap x and y
 int temp ; x = y;
 y = temp ; x; //kurang ;
 cout << "After swap; x = " << x <<", y = " << y << endl;

 return 0;
}
