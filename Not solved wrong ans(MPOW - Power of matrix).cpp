// url = https://www.spoj.com/problems/MPOW/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define S 51
#define mod 1000000007

ll mat[S][S];
ll res[S][S];


void mul(ll A[][S], ll B[][S],  ll size) {
    ll result[size+1][size+1];
    for (ll i = 0; i < size; i++) {
        for (ll j = 0; j < size; j++) {
            result[i][j] = 0;
            for (ll k = 0; k < size; k++) {
                ll x = (A[i][k] * B[k][j])%mod;
                result[i][j] = (result[i][j]+x)%mod;
            }
        }
    }
    for(int i=0; i<size; ++i){
        for(int j=0; j<size; ++j){
            res[i][j] = result[i][j];
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll s_mat,power;
        cin>>s_mat>>power;
        
        
        for(ll i=0; i<s_mat; i++){
            for(ll j=0; j<s_mat; j++){
                cin>>mat[i][j];
            }
        }
        for(ll i=0; i<s_mat; i++){
            for(ll j=0; j<s_mat; j++){
                if(i==j) res[i][j] = 1;
                else res[i][j] = 0;
            }
        }
        while(power){
            if(power%2){
                mul(res,mat,s_mat);
                power--;
            }
            else{
                mul(mat,mat,s_mat);
                power/=2;
            }
        }
        
        // printing result matrix:
        for(int i=0; i<s_mat; ++i){
            for(int j=0; j<s_mat; ++j){
                cout<<res[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}
