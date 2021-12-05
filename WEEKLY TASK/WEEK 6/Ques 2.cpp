#include<iostream>
using namespace std;
bool check_duck(string N){
   if(N[0]=='0'){
       return false;
   }
   for(int i=0;i<N.size();i++){
       if(N[i]=='0'){
           return true;
       }
   }
    return false;
}
int main()
{ string s;
  cin>>s;
  if(check_duck(s)){cout<<"Duck";}else{cout<<"Not a duck number :";}
  }


