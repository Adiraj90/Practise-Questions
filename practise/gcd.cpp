#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int findGcd(int a, int b) {
//     // code here
//     vector<int> factorA, factorB;
//     for(int i = 1; i <= sqrt(a); i++) {
//         if(a%i == 0) {
//             if(a/i != i) factorA.push_back(a/i);
//             factorA.push_back(i);
//         }
//     }
//     for(int i = 1; i <= sqrt(b); i++) {
//         if(b%i == 0) {
//             if(b/i != i) factorB.push_back(b/i);
//             factorB.push_back(i);
//         }
//     }
//     sort(factorA.begin(), factorA.end());
//     sort(factorB.begin(), factorB.end());
//     int i = 0, j = 0;
//     int ans = 0;
//     while(i < factorA.size() && j < factorB.size()) {
//         if(factorA[i] == factorB[j] && factorA[i] > ans) {
//             ans = factorA[i];
//             i++;
//             j++;
//         }
//         else if(factorA[i] < factorB[j]) i++;
//         else j++;
//     }
//     return ans;
// }

// int findGcd(int a, int b) {
//     int n = min(a,b);
//     for(int i = n; i >= 1; i--) {
//         if(a%i == 0 && b%i == 0) return i
//     }
//     return 1;
// }

// int findGcd(int a, int b) {
//     int n = min(a,b);
//     int ans = 1;

//     for(int i = 1; i <= sqrt(n); i++) {
//         if(a%i == 0 && b%i == 0) {
//             ans = max(ans, i);

//             if(a%(n/i) == 0 && b%(n/i) == 0)
//                 ans = max(ans, n/i);
//         }
//     }
//     return ans;
// }

int findGcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) a = a%b;
        else b = b%a;
    }
    return max(a,b);
}

int main() {
    int a, b;
    cout << "Enter value of a: " ;
    cin >> a;
    cout << "Enter value of b: " ;
    cin >> b;

    int ans = findGcd(a,b);
    cout << "The greatest common divisor of " << a << " and " << b << " is: " << ans;
}