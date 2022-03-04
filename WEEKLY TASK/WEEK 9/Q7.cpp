// PROGRAM TO CONVERT GIVEN DECIMAL NUMEBER TO BINARY

#include<bits/stdc++.h>
using namespace std;
const int N=1e9+7;
void binary(int k)
{
	if(k==0)
	  return; 
	  
	binary(k/2);
	cout<<k%2;
}

int main(){
	long long int t;
	cin>>t;
	 binary(t);
	//cout<<ans;
}