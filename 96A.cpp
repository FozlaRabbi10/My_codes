#include<iostream>
using namespace std;
int main()
{
    string input;
    cin>>input;
    int x=input.length();
    int c=0,i;
    for(i=0;i<x;i++)
    {

        if(c<6)
        {
           if(input[i]!=input[i+1])
            {
            c=0;

            }
            else
            {
                c=c+1;
            }
        }


    }
    if(c<6)
        cout<<"NO"<<"\n";
    else
        cout<<"YES"<<"\n";

    return 0;
}
