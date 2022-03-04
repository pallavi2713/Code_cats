#include<bits/stdc++.h>
using namespace std;
const int N=1e9+7;
int fact(long long int x)
{
	if(x==1)
	  return 1;
	return (x%N*fact(x-1)%N)%N;  
}

int main(){
	long long int t,ans;
	cin>>t;
	 ans=fact(t);
	cout<<ans;
}