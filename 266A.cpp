#include<iostream>
using namespace std;
int main()
{
    int i,s=0;
    int n;
    cin>>n;
    char a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
            s=s+1;
    }
    cout<<s<<"\n";
    return 0;

}
