#include<iostream>
using namespace std;

int main(){
    int i,j,n,c;
    cout<<"Enter the no of terms;";
    cin>>n;
    i= 1;c=1;
    while(i<=n)
    {
        j=1; 
        while(j<=i)
        {
            cout<<c++<<" " ;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}