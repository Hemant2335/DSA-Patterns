#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the no of terms;";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
        {

            char ch=i+'A'-1;
            cout<<ch<<" ";

        }
        cout<<endl;   
    }
    return 0;
}