#include <iostream>
using namespace std;
#define RETURN return 0

string kek = "privet";

int main() {
    cout << typeid( kek ).name() << endl;
    RETURN;
}