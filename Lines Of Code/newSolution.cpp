#include<iostream>
using namespace std;
int main()
{   int n,j,k,min;
    cout<<"enter n:\n";
    cin>>n;
    int ed[n];
    cout<<"enter the amount of drinks:\n";
    for(int i=0;i<n;i++)
        cin>>ed[i];
    if(n<=40)
        min=(2^(n-1))*(ed[n-1]); 
    
    
    
        cout<<"the minimum lines of code:"<<min<<"\n";
    return 0;
    
}