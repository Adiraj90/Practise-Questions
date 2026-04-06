#include<iostream>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    int flarge = -1, slarge = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > flarge) {
            slarge = flarge;
            flarge = arr[i];
        }
        else if(arr[i] > slarge && arr[i] != flarge) {
            slarge = arr[i];
        }
    }
    return slarge;
}

int main() {
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = getSecondLargest(n);
    cout << "Second largest elemet of the given array is : " << ans << "\n";
}