#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    char ch;
    cout<<"Enter the no of terms;";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(int s=1; s<=n-i;s++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {

            
            cout<<"*";
        

        }
        cout<<endl;
        
    }
    return 0;
}