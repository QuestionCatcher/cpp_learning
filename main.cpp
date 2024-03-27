#include <iostream>

using namespace std;

int main() {
    string A;
    cout << "Type 'welcome'" << endl;
    cin >> A;
    
    while (A != "welcome") 
        {
        cout << "Misspelled word! Type 'welcome'" <<endl;
        cin >> A;
        }

    cout << "Welcome to the C++ world! Enjoy your adventure." << endl;
    
}