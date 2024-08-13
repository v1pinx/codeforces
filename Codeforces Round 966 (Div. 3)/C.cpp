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

        int m;
        cin >> m;
        string str[m];
        for(int i=0;i<m;i++){
            cin >> str[i];
        }

        for(string s : str){
            
            if(n != s.size()){
                cout << "NO\n";
                continue;
            }

            unordered_map<char,int> cn;
            unordered_map<char,int> nc;
            bool flag = true;

            for(int i=0;i<n;i++){
                char c = s[i];
                int num = a[i];

                if(cn.find(c) != cn.end()){
                    if(cn[c] != num){
                        cout << "NO\n";
                        flag = false;
                        break;
                    }
                }else
                cn[c] = num;

                if(nc.find(num) != nc.end()){
                    if(nc[num] != c){
                        cout << "NO\n";
                        flag = false;
                        break;
                    }
                }else
                nc[num] = c;
            }
            if(flag) cout << "YES\n";
        }
    }
    return 0;
}


// Wrong