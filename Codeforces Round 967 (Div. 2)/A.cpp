#include<bits/stdc++.h>
using namespace std;

int maxDupli(vector<int> arr){
    unordered_map<int,int> mp;
    int MAX = 0;

    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
        MAX = max(MAX, mp[arr[i]]); 
    }
    return MAX;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << n - maxDupli(arr) << endl;
    }

}