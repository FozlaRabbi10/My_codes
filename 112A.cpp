#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int len1=a.length();
    string b;
    cin>>b;
    int i;
    for(i=0;i<len1;i++)
    {
        if(a[i]>='A'&& a[i]<='Z')
            a[i]=a[i]+32;
        if(b[i]>='A'&&b[i]<='Z')
            b[i]=b[i]+32;
    }
    //cout<<a<<"\n"<<b;
   int x = a.compare(b);

   if(x>0)
    cout<<"1"<<"\n";
   else if(x<0)
    cout<<"-1"<<"\n";
    else
        cout<<"0"<<"\n";
    return 0;

}
