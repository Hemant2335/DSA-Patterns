#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    char ch;
    cout<<"Enter the no of terms;";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(int s=1; s<=i-1;s++)
        {
            cout<<" ";
        }
        for(j=1;j<=n-i+1;j++)
        {
    
            cout<<i;
        }
        cout<<endl;
        
    }
    return 0;
}