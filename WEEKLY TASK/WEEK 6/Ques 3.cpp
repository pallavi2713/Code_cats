#include<iostream>
using namespace std;
int main()
{  int k;
  int hash[26]={0};
  cout<<"Enter the length of subsequence: ";
  cin>>k;
  string s;
  cout<<"\nEnter string : ";
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
      hash[s[i]-'a']++;
  }
  for(int i=0;i<s.length();i++)
  {
    if(hash[s[i]-'a']>=k)
    {
        cout<<s[i];
    }
  }
}