#include<iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int a[5][5];
    int i,j,sum=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {

               sum=abs(i-2) + abs(j-2);
            }
        }
    }
    cout<<sum<<"\n";
    return 0;
}
