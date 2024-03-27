#include <iostream>

using namespace std;

int main() {
    string A;
    cout << "Type 'welcome'" << endl;
    cin >> A;
    if (A == "welcome"){

    } else {
        cout << "Misspelled word! Type 'welcome'" << endl;
        cin >> A;
        cout << "Welcome in C++ world! Enjoy your adventure" << endl;
    }

}