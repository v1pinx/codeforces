#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        string s;
        cin >> s;

        int i=0;
        int j=n-1;
        for(i=0;i<n;i++){
            if(s[i] == 'L') break;
        }
        for(j=n-1;j>=0;j--){
            if(s[j] == 'R') break;
        }

        int ans = 0;
        while(i <= j){
            if(i != j){
                ans += a[i] + a[j];
            }
            else{
                ans += a[i];
            }
            i++;
            j--;
        }
        cout << ans << '\n';
    }
    return 0;
}

//Wrong