#include<stdio.h>
int isprime(int x)
{
	int i;
	for (i = 2;i * i <= x;i++)
	{
		if(x%i==0)
		{
			return 0;
			break;
		}
	}
	if(i * i > x)
	{
		return 1;
	}
}

int mi(int a,int b)
{
	int i,m;
	m = 1;
	for(i = 0;i < b;i++)
	{
		m = m * a;
	}
	return m;
}

int main()
{
	int i,j,k,n;
	for(i = 2;i < 100;i++)
	{
		if(isprime(i))
		{
			for(j = i;j < 100;j++)
			{
				if(isprime(j))
				{
					if(isprime(mi(i,j)+mi(j,i)))
					{
						printf("%d %d\n",i,j);
					}
				}
			}
		}
	}
	
	return 0;
	
	
	
	
	
}
