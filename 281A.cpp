#include<iostream>
//#include<cstring>
using namespace std;
int main()
{
    string a;
    //int c;
    cin>>a;
    //c=a.length();
    if(!(a[0]>='A'&&a[0]<='Z'))
        a[0]=a[0]-32;

    cout<<a<<"\n";

    return 0;

}
