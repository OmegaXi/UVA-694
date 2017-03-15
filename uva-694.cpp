#include<cstdio>

int func(int x)
{
    if(x%2==0)
        x=x/2;
    else
        x=3*x+1;
	return x;
}

main()
{
	long long a,limit,n;
	int num=0;
	int s=0;
	while(scanf("%lld%lld",&a,&limit)&&(a!=-1||limit!=-1))
	{
		num++;
		s=1;
		n=a;
		while(n>1)
		{
			n=func(n);
			if(n>limit)break;
			s++;
		}
		printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",num,a,limit,s);
	}
}
