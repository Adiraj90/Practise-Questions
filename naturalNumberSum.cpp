#include<iostream>
using namespace std;

int findSumOfFirstNNaturalNumber(int n, int &sum) {
    if(n == 0) return sum;
    sum += n;
    findSumOfFirstNNaturalNumber(n-1, sum);
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = 0;
    int sum = findSumOfFirstNNaturalNumber(n, ans);

    cout << "Sum of First " << n << " natural number is: " << sum << "\n"; 
}
