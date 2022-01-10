#include<iostream>
using namespace std; 
#define MAXROW      10
#define MAXCOL      10
 
int main()
{
    int matrix[MAXROW][MAXCOL];
    int i,j,r,c;
     
    cout<<"Enter number of Rows :";
    cin>>r;
    cout<<"Enter number of Cols :";
    cin>>c;
 
    cout<<"\nEnter matrix elements :\n";
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            cout<<"Enter element  : ";
            cin>>matrix[i][j];
        }
    }
 
    cout<<"\nMatrix is :\n";
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            cout<<"\t";
            cout<<matrix[i][j];
        }
        cout<<"\n";   
    }
    return 0;   
}