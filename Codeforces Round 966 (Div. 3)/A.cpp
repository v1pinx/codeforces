#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = to_string(n);
        if(s.length() < 3 ){
            cout << "NO\n";
            continue;
        }
        int ten = stoi(s.substr(0,2));
        int x = s[2] - '0';
        if(ten != 10 || x == 0){
            cout << "NO" << endl;
            continue;
        }
        int e = stoi(s.substr(2));
        if(e > 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }        
    }
}