#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    string name[n];
    string cop;
    int c[n];
    int c1;
    int i;
    for(i=0;i<=n-1;i++)
    {
       cin>>name[i];

    }

    for(i=0;i<=n-1;i++)
    {
      c[i]=name[i].length();
      cop.assign(name[i]);

    if(c[i]>10)
    {
       c1=c[i]-2;
       cout<<cop[0] << c1 << cop[c[i]-1] <<"\n";
    }
    else
    cout<<name[i] <<"\n";
    }



    return 0;
}
