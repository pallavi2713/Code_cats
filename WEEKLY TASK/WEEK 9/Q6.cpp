//Given an integer N, the task is to print all the numbers ≤ N which have their digits as only 1 or 3

#include<bits/stdc++.h>
using namespace std;
const int N=1e9+7;
void func(int k)
{
  int f=1;//flag
  int n=k;
	if(k>0)
	{
	  while(n>0 && f==1)
	  {
        if(n%10!=1 && n%10 != 3)
		     f=0;
     	n=n/10;
	   }
	  if(f==1)
	     cout<<k<<" ";
	  return func(k-1);  
    }
}

int main(){
	long long int t;
	cin>>t;
	 func(t);
	//cout<<ans;
}