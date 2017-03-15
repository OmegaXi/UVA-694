#include<iostream>

using namespace std;

int t;

int func(int x)
{
t=1;
	while(x!=1)
	{
		if(x%2==0)
			x=x/2;
		else x=3*x+1;
		t++;
	}
	return t;
}

main()
{
	int a,limit;
		while((cin>>a>>limit)&&(a!=-1||limit!=-1))
		{
			int count=1;
			for(int i=1;;i++)
			{
				if(func(m)>limit)
					break;
			}
			cout<<"Case "<<count++<<": A= "<<a<<", limit = "<<limit<<", number of terms = "<<i<<endl;
		}
}
