//to print all the numbers in given range (inclusive)
#include<bits/stdc++.h>
using namespace std;
const int N=1e9+7;
void range(int x,int n)
{
	if(x>n)
	  return ;
        
        cout<<x<<" ";
	return func(x+1,n);  
}

int main(){
	long long int a,n;
	cin>>a>>n;
	 range(a,n);
	//cout<<ans;
}