#include<iostream>
using namespace std;

void printN(int n) {
    if(n == 0) return;
    printN(n-1);
    cout << n << "\n";
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printN(n);
}