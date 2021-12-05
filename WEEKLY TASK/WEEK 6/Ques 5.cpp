#include<iostream>
#include<map>
using namespace std;
int main()
{  
  string s,p;
  cout<<"\nEnter jewels: ";
  cin>>s;
  cout<<"Enter stones: ";
  cin>>p;
 map<char,bool> hash;
 int count=0;
  for(int i=0;i<s.length();i++)
  {
      hash[s[i]]=true;
  }
  for(int i=0;i<p.length();i++)
  {
       if(hash[p[i]]){count++;}
  }

  cout<<"Number of stones that are also jewels are :"<<count;

}