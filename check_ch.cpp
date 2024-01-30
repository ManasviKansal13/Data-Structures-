#include<iostream>
using namespace std;

main() {
    char ch;
    cout << "enter character: " << endl;
    cin >> ch;
    if (ch >= 97 && ch <= 122) cout << "Lowercase" << endl;
    else if (ch >= 65 && ch <= 90) cout << "Uppercase" << endl;
    else if (ch >= 48 && ch <= 57) cout << "Digit" << endl;
    else cout << "Special Character" << endl;
}