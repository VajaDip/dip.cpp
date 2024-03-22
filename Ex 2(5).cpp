#include <iostream>
using namespace std;
int s = 80;

int main() {
    
    int s = 40;
    
    cout << "Local variable s: " << s << endl;

    cout << "Global variable s: " << ::s << endl;

    return 0;
}
