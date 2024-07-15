#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int op = 0;
        while(n>1){
            if(n<=k){
                op++;
                break;
            }
            op+=n/k;
            n=(n%k)+(n/k);
            if(n<=k){
                op++;
                break;
            }
        }
        cout << op << endl;
    }
    return 0;
}