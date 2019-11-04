#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    int i;
    int leng=input.length();
    char test[leng];
    int j;
    j=0;

    for(i=0;i<leng;i++)
    {
        if(input[i]!='A'&&input[i]!='E'&&input[i]!='I'&&input[i]!='O'&&input[i]!='U'&&input[i]!='Y'&&input[i]!='a'&&input[i]!='e'&&input[i]!='i'&&input[i]!='o'&&input[i]!='u'&&input[i]!='y')
        {
            if(input[i]>='A'&& input[i]<='Z'){
            test[j]=input[i]+32;
            //cout<<'T'<<test[j]<<'\n';
            j++;
            }
            else
            {
                test[j]=input[i];
                j++;
            }
        }
    }
    //cout<<j<<'\n';
    //test[j]='\0';
    //cout<<test;

    int c=(j)*2;
    //cout<<c<<'\n';
    j=0;
    char result[c];
    for(i=0;i<c;i++)
    {
        if(i<2){
            if(i==0)
            {result[i]='.';
            }
            else
            {
                result[i]=test[j];
                j++;
                //cout<<j<<'\n';
            }
        }
        else
        {
            if(i%2==0){
                result[i]='.';

            }
            else
            {
            result[i]=test[j];
            j++;
            //cout<<j<<'\n';
            }

        }
        //cout<<'i'<<'='<<i<<'\n';

    }
    for(i=0;i<c;i++)
    {
        cout<<result[i];
    }
    cout<<'\n';
    //result[j]='\0';

    //cout<<result;
    //for(i=0;i<)

}
