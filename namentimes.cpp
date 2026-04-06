#include<iostream>
#include<string>
using namespace std;

void printNameNTimes(int n, string &name) {
    if(n == 0) return;
    cout << name << "\n";
    printNameNTimes(n-1, name);
}

int main() {
    int n;
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter a number: ";
    cin >> n;

    printNameNTimes(n, name);
}