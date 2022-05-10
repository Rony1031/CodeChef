//https://www.codechef.com/problems/ODDSUM
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
  ll n;cin>>n;
  cout<<((n-1)*(n-2))+1<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;cin>>t;
	while(t--){
	  solve();
	}
	return 0;
}
