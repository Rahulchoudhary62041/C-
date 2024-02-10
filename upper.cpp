#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isupper(ch)) {
        cout << "The character is an uppercase alphabet." <<endl;
    } else if (islower(ch)) {
        cout << "The character is a lowercase alphabet." << endl;
    } else if (isdigit(ch)) {
        cout << "The character is a digit." << endl;
    } else if (ispunct(ch)) {
        cout << "The character is a special symbol." << endl;
    } else {
        cout << "The character is not nothing" << endl;
    }

    return 0;
}

