#include<iostream>
using namespace std;

int main(){
    int i,j,n,s,k,d;
    char ch;
    cout<<"Enter the no of terms;";
    cin>>n;
    int c=1;
    d=1;
    for(i=1;i<=n;i++)
    {
        
        for(int s=1; s<=n-i;s++)
        {
            cout<<" ";
        }
        
        for(j=1;j<=i;j++)
        {
    
            cout<<i+j-1;
        }
        
        for(k=1;k<i;k++)
        {
            cout<<(i-1)*2-k+1;
            
        }
        
        cout<<endl;
        
        
    }
    return 0;
}