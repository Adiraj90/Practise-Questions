#include<iostream>
#include<vector>
#include<map>
#include<climts>
using namespace std;

int mostFreqEle(vector<int>& arr) {
    unordered_map<int, int> mp;
    for(auto i : arr) {
        mp[i]++;
    }
    int max = INT_MIN, maxCount = INT_MIN;
    for(auto i : mp) {
        if(i.second == maxCount) {
            if(i.first > max) max = i.first;
        }
        else if (i.second > maxCount) {
            max = i.first;
            maxCount = i.second;
        }
    }
    return max;
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        cout << "Enter value for " << i << "th element: ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int ans = mostFreqEle(arr);
    cout << "Most frequent largest number in the array is " << ans << "\n";

    return 0;
}
