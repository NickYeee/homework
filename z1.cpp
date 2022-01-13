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



int main()
{
	int i,j,len,k,n;
	float sum;
	k = 0;
	sum = 0;
	n = 0;
	for(i = 100;i <= 10000;i++)
	{
		if(isprime(i))
		{
			len = 0;
			k = i;
			while(k != 0)
			{
				len++;
				k = k/10;
			}
			if(len == 3)
			{
				if(isprime(i%10+i/10%10+i/100%10))
				{
					if(isprime((i%10)*(i%10)+(i/10%10)*(i/10%10)+(i/100%10)*(i/100%10)))
					{
						printf("%d\n",i);
						sum = sum + i;
						n++;
					}
				}
			}
			if(len == 4)
			{
				if(isprime(i%10+i/10%10+i/100%10+i/1000%10))
				{
					if(isprime((i%10)*(i%10)+(i/10%10)*(i/10%10)+(i/100%10)*(i/100%10)+(i/1000%10)*(i/1000%10)))
					{
						printf("%d\n",i);
						sum = sum + i;
						n++;
					}
				}
			}
		}
	}
	printf("%f",sum/n);
	return 0;
}
