#include <iostream>
#include <string>

using namespace std;

string reverseString(string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Swap characters at left and right pointers
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move the pointers towards the center
        left++;
        right--;
    }

    return str;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string str;
        cin >> str;
        cout << reverseString(str) << endl;
    }

    return 0;
}
