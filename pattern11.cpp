#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    /*
    char c=65;
    cout<<"Enter the no of terms;";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<c<<" ";

        }
        cout<<endl;
        c++;
        */
    cout<<"Enter the no of terms;";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            char ch='A'+i-1;
            cout<<ch<<" ";

        }
        cout<<endl;   
    }
    return 0;
}