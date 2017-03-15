#include<stdio.h>
int main()
{
    long long a,b,n;
    int number=0;
	int s=0;
    while(scanf("%lld%lld",&a,&b)&&(a!=-1||b!=-1))
    {
        number++;
		s=1;
		n=a;
        while(n>1)
        {
            if(n%2)
                n=n*3+1;
            else
                n/=2;
            if(n>b)break;
            s++;
        }
        printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",number,a,b,s);
    }
    return 0;
}
