#include<bits/stdc++.h>
using namespace std;

void solve(int x) {
    if(x%2 == 0){
        cout << -1 << endl;
        return;
    }
    else{
        for(int i=1;i<=x/2;i++){
            cout << i << " ";
        }
        for(int i=x;i>x/2;i--){
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
