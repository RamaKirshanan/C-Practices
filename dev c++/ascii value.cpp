#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Important ASCII Values\n";
    cout << "----------------------\n";

    cout << "A = " << int('A') << endl;
    cout << "Z = " << int('Z') << endl;

    cout << "a = " << int('a') << endl;
    cout << "z = " << int('z') << endl;

    cout << "0 = " << int('0') << endl;
    cout << "9 = " << int('9') << endl;

    cout << "Space = " << int(' ') << endl;
    cout << "New line = " << int('\n') << endl;
    cout << "Tab = " << int('\t') << endl;

    cout << "\nEnter one character: ";
    cin >> ch;

    cout << "ASCII value of " << ch << " is " << int(ch) << endl;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is uppercase letter" << endl;
        cout << "Lowercase is: " << char(ch + 32) << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is lowercase letter" << endl;
        cout << "Uppercase is: " << char(ch - 32) << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit" << endl;
        cout << "Integer value is: " << ch - '0' << endl;
    }
    else {
        cout << ch << " is a special character" << endl;
    }

    return 0;
}
