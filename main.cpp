//
//  main.cpp
//  String_Reverser
//
//  Created by Nick Smart on 6/3/16.
//  Copyright © 2016 Smartech. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Type 'Q' to quit..." << endl;
    string con = "yes";
    while (con != "Q") {
        string str, original, rev;
        bool isPalindrome = true;
        cout << "Enter a string that you would like reversed." << endl;
        while(cin >> str) {
            if (cin.get() != '\n') original += (str + " ");
            else {
                original += str;
                break;
            }
        }
    
        for (int i = original.length() - 1; i >= 0; --i) {
            rev += original.at(i);
            if (original.at(i) != original.at(original.length() - 1 - i)) {
                isPalindrome = false;
            }
        }
        cout << rev << endl;
        if (isPalindrome) {
            cout << "You've entered a palindrome!" << endl;
        }
        cin >> con;
    }
    
    return 0;
}
