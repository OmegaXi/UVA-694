#include<iostream>

using namespace std;

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
	int a,limit;
		while((cin>>a>>limit)&&(a!=-1||limit!=-1))
		{
			int count=1;
			int n=a;
			int numofterms=1;
			while(n>1)
			{
				n=func(n);
				numofterms++;
				if(n>limit)
					break;
			}
			cout<<"Case "<<count++<<": A= "<<a<<", limit = "<<limit<<", number of terms = "<<numofterms<<endl;
		}
}
