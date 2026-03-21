#include<iostream>
#include<string>
using namespace std;

int binaryToDecimal(string &b) {
        
    int l = b.length();
    int ans = 0;
    for(int i = l - 1; i >= 0; i--){
        int n = b[i] - '0';
        ans += n*(pow(2,l-i-1));
    }
    return ans;
}

int main () {
    string b;
    cout << "Enter the binary value: ";
    getline(cin, b);
    cout << binaryToDecimal(b);
}