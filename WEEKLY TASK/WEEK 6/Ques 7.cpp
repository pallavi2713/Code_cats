//To check Whether Two Strings are Almost Equivalent.
#include<iostream>
using namespace std;

 bool equivalance(int hash[]) {
    for(int i=0;i<26;i++)
    {
      if(hash[i]>3) 
      { 
          return false;
      }
    else
    { 
        return true;
    }
    }
}
int main()
{ int n,m;
int hash[26]={0};
string ar,br;
  cout<<"Enter 1st string : ";
  cin>>ar;
  for(int i=0;i<ar.length();i++){
      hash[ar[i]-'a']++;  }
   cout<<"Enter 2nd string : ";   
   cin>>br;
  for(int i=0;i<br.length();i++){
      hash[br[i]-'a']--;
  }
  if(equivalance(hash)){cout<<"True";}else{cout<<"False";}
} 
