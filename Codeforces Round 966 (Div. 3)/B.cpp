#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        if(n == 1){
            cout << "YES\n";
            continue;
        }
        int b[n+2] = {0};
        b[a[0]] = 1;
        bool flag = true;
        for(int i=1;i<n;i++){
            if(b[a[i]-1] == 0 && b[a[i] + 1] == 0){
                cout << "NO\n";
                flag = false;
                break;
            }
            b[a[i]] = 1;
        }
        if(flag) cout << "YES\n"; 
    }
    return 0;
}