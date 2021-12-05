#include<iostream>
using namespace std;
//#include<bits/stdc++.h>
char extra(string a ,string b)
{ int res=0;
  for(int i=0;i<a.size();i++)
  { 
      res^=a[i];
    
  }
for(int j=0;j<b.size();j++)
{
    res^=b[j];
}
return ((char)(res));

}
int main()
{ string m,n;
     cin>>m;
     cin>>n;

    cout<<extra(m,n);
}
