#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the no of terms;";
    cin>>n;
    i= 1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<i<<" " ;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}