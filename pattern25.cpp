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
        
        
        for(j=1;j<=n-i+1;j++)
        {
    
            cout<<j;
        }
        for( s=1; s<i;s++)
        {
            cout<<" ";
        }
        for( s=1; s<i;s++)
        {
            cout<<" ";
        }
        for(k=1;k<=n-i+1;k++)
        {
            cout<<n-k-i+2;
        }
        
        cout<<endl;
        
    }
    return 0;
}