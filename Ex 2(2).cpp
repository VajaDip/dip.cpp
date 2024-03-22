#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int num = 1;
    
    for (int x = 1; x <= rows; x++) {
        
        for (int y = 1; j <= rows - x; y++) {
            cout << " ";
        }
        
        
        for (int y = 1; y <= x; y++) {
            cout << num << " ";
            num++;
        }
        
        cout << endl;
    }
    
    return 0;
}
