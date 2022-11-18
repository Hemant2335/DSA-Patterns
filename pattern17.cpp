#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    char ch;
    cout<<"Enter the no of terms;";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        char ch=n+'A'-i;
        for(j=1;j<=i;j++)
        {

            
            cout<<ch<<" ";
            ch++;

        }
        cout<<endl;
        
    }
    return 0;
}