#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the no of terms;";
    cin>>n;char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            
            cout<<ch++<<" ";

        }
        cout<<endl;   
    }
    return 0;
}