#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print_divisors(int n) {
    vector<int> rev;
    for(int i = 1; i <= sqrt(n); i++) {
        if(n%i == 0)  {
            if(n/i != i) {
                rev.push_back(n/i);
            }
            cout << i << " ";
        }
    }
    for(int i = rev.size() - 1; i >= 0; i--) {
        if(i == 0) cout << rev[i];
        else cout << rev[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    print_divisors(n);
}
