#include<iostream>
using namespace std;

int main(){
    int i,j,n,c;
    cout<<"Enter the no of terms;";
    cin>>n;
    i= 1;
    while(i<=n)
    {
        j=1; 
        while(j<=i)
        {
            cout<<i-j+1<<" " ;
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}