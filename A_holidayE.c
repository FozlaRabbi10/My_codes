#include<stdio.h>
int main()
{
    int n,i,result=0;
    int sum;
    scanf("%d",&n);
    int a[n];
    int max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
            max=a[i];
    }
    //printf("%d\n",max);
    if(n>1)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]<max)
            {
                sum=max-a[i];
                result=result+sum;
            }

        }
        printf("%d\n",result);
    }
    else
        printf("%d\n",result);

    return 0;
}
