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
        for(int s=1; s<=n-i;s++)
        {
            cout<<" ";
        }
        
        for(j=1;j<=i;j++)
        {
    
            cout<<j;
        }
        d=i-1;
        for(k=1;k<i;k++)
        {
            cout<<d--;
        }
        cout<<endl;
        
    }
    return 0;
}