#include<iostream>
#include<vector>
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

int main() {
   int n;
   cout << "Enter size of array you want: ";
   cin >> n;
   int arr[n];
   for(int i = 0; i < n; i++) {
    cin >> arr[i];
   } 

   findSol(n, arr);
}
