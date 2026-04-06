#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<vector<int>> countFrequencies(vector<int>& nums) {
    map<int, int> mp;
    for(auto i : nums) mp[i]++;
    vector<vector<int>> ans;
    for(auto i : mp) ans.push_back({i.first, i.second});
    return ans;
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter all the elements of the arrays at once: " ;
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<vector<int>> ans = countFrequencies(arr);

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}