#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    //if(a[k-1]!=0)

        for(i=0;i<=n-1;i++)
        {
            if(a[i]>0)
            {
                if(a[i]==a[k-1] || a[i]>a[k-1])
                count++;
            }

        }


    printf("%d\n",count);

    return 0;
}
