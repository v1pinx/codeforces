#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int func(int n, int k) {
    if (k > n) return 0;
    long long C[n+1][k+1];     


    memset(C, 0, sizeof(C));
    for (int i = 0; i <= n; i++) {
        C[i][0] = 1; 
        C[i][i] = 1;
        for (int j = 1; j <= min(i,k); j++) {
            if(i == j) C[i][j] = 1;
            else C[i][j] = (C[i][j-1] + C[i-1][j-1]) % MOD;
        }
    }
    return C[n][k];
}

int main() {
    int t;
    cin >> t;
    vector<long long> N(t);
    vector<long long> K(t);
    
    for (int i = 0; i < t; i++) {
        cin >> N[i];
    }

    for (int i = 0; i < t; i++) {
        cin >> K[i];
    }

    for (int i = 0; i < t; i++) {
        cout << func(N[i], K[i]) << endl;
    }

    return 0;
}
