//To print all the numbers divisible by 3 in the given range
#include<bits/stdc++.h>
using namespace std;
const int N=1e9+7;
void func(int x,int n)
{
	if(x>n)
	  return ;
    if(x%3==0){
		cout<<x<<" ";}
	return func(x+1,n);  
}

int main(){
	long long int t,ans;
	cin>>t>>ans;
	 func(t,ans);
	//cout<<ans;
}