#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main() {
    vector<pair<int, int>> r;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a,b;
        cout << "Enter the " << i << " pair value: ";
        cin >> a >> b;
        r.push_back({a,b});
    }

    cout << "Pair values of array are: " << '\n';
    for(int i = 0; i < n; i++) {
        cout << r[i].first << " " << r[i].second << '\n';
    }

    return 0;
}
