#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < (int)str.length(); i++) {        
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {                        
            for (int j = i; j < (int)str.length(); j++) {
                str[j] = str[j + 1];
            }
            i--;  
        }
    }
    cout << "String after deleting vowels: " << str << endl;
    return 0;
}
