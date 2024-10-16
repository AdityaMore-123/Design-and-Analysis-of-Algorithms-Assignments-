#include <iostream>
#include <string>
using namespace std;

bool canTransform(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();

    if (m < n)
        return false;

    int j = 0; 

    for (int i = 0; i < m; i++) {
        if (j < n && (toupper(s1[i]) == s2[j])) {
            j++; 
        } 
        
        else if (isupper(s1[i])) {
            return false;
        }
    }
    return (j == n);
}

int main() {
    string s1, s2;
    cout << "Enter string s1: ";
    cin >> s1;
    cout << "Enter string s2: ";
    cin >> s2;
    if (canTransform(s1, s2))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
