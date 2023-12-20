// url = https://www.spoj.com/problems/TDKPRIME/

// #sieve-of-eratosthenes

#include <bits/stdc++.h>
using namespace std;

bool x[90000000];
int len = 90000000;

vector<int>vec;

int main()
{
    int i;
    for(i=2; i*i<=len; i++){
        if(x[i]==0){
            vec.push_back(i);
            for(int j=i*i; j<=len; j+=i){
                x[j] = 1;
            }
        }
    }
    for(; i<=len; i++){
        if(x[i]==0) vec.push_back(i);
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<vec[n-1]<<endl;
        
    }
    return 0;
}
