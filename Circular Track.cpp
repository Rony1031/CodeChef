//https://www.codechef.com/START38C/problems/LOOP

#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<complex>
#include<cstring>
#include<string>
#include<set>
#include<map>
#include<list>
#include<vector>
#include<fstream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,m;
        cin>>a>>b>>m;
        long long result=(a+m)-b;
        long long r=llabs(b-a);
        if(a>b){
           long long result=(m-a)+b;
           long long r=llabs(a-b);
           cout<<min(r,result)<<endl;
        }
        else{
            long long result=(m-b)+a;
            long long r=llabs(b-a);
            cout<<min(r,result)<<endl;
        }
    }
return 0;
}
