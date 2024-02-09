#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    if (str == reversed)
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is not a palindrome.\n";

    return 0;
}




