#include <iostream>
#include <string>
using namespace std;

string max(string i, string j) {
    return (i > j) ? i : j;
}

string max(string i, string j, string k) {
    return max(max(i, j), k);
}

int main() {
    string str1, str2, str3;
    cout << "Enter a three string: ";
    cin >> str1 >> str2 >> str3;

    cout << "A maximum string is: " << max(str1, str2, str3) << endl;

    return 0;
}
