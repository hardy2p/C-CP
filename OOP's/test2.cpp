#include <iostream>
using namespace std;

class GfG {
public:
  
      // Static data member
    static int i;

    GfG(){
        // Do nothing
    };
};

// Definition of static member
int GfG::i;

int main() {
    GfG obj1;
    GfG obj2;
    obj1.i = 2;
    obj2.i = 3;
    // Prints value of i
    cout << obj1.i << " " << obj2.i;
}