#include<iostream>
using namespace std;

int main(){
    int i,j,n,s,k,d;
    char ch;
    cout<<"Enter the no of terms;";
    cin>>n;
    int c=1;
    for(i=1;i<=n;i++)
    {
        
        for(int s=1; s<i;s++)
        {
            cout<<" ";
        }
        
        for(j=1;j<=n+1-i;j++)
        {
    
            cout<<"*";
        }
        for(k=1;k<n-i+1;k++)
        {                 
            cout<<"*";    
        }
        
        
        cout<<endl;
        
        
    }
    return 0;
}