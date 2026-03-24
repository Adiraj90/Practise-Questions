#include<iostream>
#include<vector>
#include<string>
using namespace std;

void findSol(int n, int arr[]) {
    vector<int> hashh(13, 0);
    for(int i = 0; i < n; i++) {
        hashh[arr[i]] += 1;
    }

    for(int i = 0; i < hashh.size(); i++) {
        if(hashh[i] != 0) cout << i << " -> " << hashh[i] << "\n";  
    }
}

void findSolEng(string s) {
    vector<int> hashh(26, 0);
    for(int i = 0; i < s.length(); i++) {
        int idx = s[i] - 97;
        hashh[idx] += 1;
    }

    for(int i = 0; i < hashh.size(); i++) {
        if(hashh[i] != 0) cout << char(i + 'a') << " -> " << hashh[i] << "\n";
    }
}

int main() {

    string s;
    cout << "enter your string: ";
    getline(cin, s);

    findSolEng(s);
//    int n;
//    cout << "Enter size of array you want: ";
//    cin >> n;
//    int arr[n];
//    for(int i = 0; i < n; i++) {
//     cin >> arr[i];
//    } 

//    findSol(n, arr);
}