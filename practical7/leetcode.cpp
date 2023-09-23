
#include<iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);

        if (!str.empty() && str[0] == '-') {

        return false; // Return false if it has a negative sign
    }

        string reversed;
        for (int i = str.length() - 1; i >= 0; i--) {
            reversed += str[i];
        }

        return str == reversed;
    }
};

int main()
{

    Solution c;
    cout<<c.isPalindrome(10);
    return 0;
}
