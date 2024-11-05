#include<bits/stdc++.h>
using namespace std;


int main() {
    int q;
    cin >> q;
    while(q--){
        string s,t;
        cin >> s >> t;

        int ans = s.size() + t.size();
        int i = 0;
        while(i < s.size() && i < t.size() && s[i] == t[i]){
            i++;
        }
        if(i){
            ans -= i-1;
        }
        cout << ans << endl;
    }
    return 0;
}
