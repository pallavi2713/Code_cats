#include<bits/stdc++.h>
using namespace std;

int sum(long long int x)
{
	if(x==0)
	  return 0;
	return x+sum(x-1);  
}

int main(){
	long long int t,ans;
	cin>>t;
	 ans=sum(t);
	cout<<ans;
}