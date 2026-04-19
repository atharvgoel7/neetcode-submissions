#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    char lowerCase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }
        return ch;
    }

    bool checkPalindrome(string a) {
        int s = 0;
        int e = a.length() - 1;
        while (s <= e) {
            if (a[s] != a[e]) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (valid(s[i])) {
                temp.push_back(s[i]);
            }
        }

        for (int j = 0; j < temp.length(); j++) {
            temp[j] = lowerCase(temp[j]);
        }

        return checkPalindrome(temp);
    }
};

