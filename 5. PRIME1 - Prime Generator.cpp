// url = https://www.spoj.com/problems/PRIME1/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n1,n2;
	cin>>t;
	while(t--){
		cin>>n1>>n2;
		for(int i=n1; i<=n2; i++){
			int flag = 1;
			for(int j = 2; j<=sqrt(i); j++){
				if(i%j==0){
					flag=0;
					break;
				}
			}
			if(flag && i>1) cout<<i<<' '; 
		}
		cout<<endl;
	}
	return 0;
}
