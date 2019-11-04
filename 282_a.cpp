#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int x=0;
    scanf("%d",&n);
    string input[n];
    for(i=0;i<n;i++)
    {
        cin>>input[i];
        if(input[i]=="++X")
            x=x+1;
        else if(input[i]=="X++")
            x=x+1;
        else if(input[i]=="--X")
            x=x-1;
        else
            x=x-1;
    }
    cout<<x;
    cout<<'\n';

    return 0;



}

