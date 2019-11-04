#include<stdio.h>
int main()
{
   long long int n,m,a,s,s1;
   long long int sum;
    scanf("%lld%lld%lld",&n,&m,&a);
    double count;
    count=(double)n/(double)a;
    //printf("%lf\n",count);
    s=(long long int)count;
    //double c = (double)s;
    if(((double)s < count))
        s=s+1;
    //printf("%lld\n",s);
    count=(double)m/(double)a;
    s1=(long long int)count;
    if((double)s1 < count)
        s1=s1+1;
    //printf("%lld\n",s1);
    sum=s*s1;
    printf("%lld\n",sum);



    return 0;

}
