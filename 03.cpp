#include<stdio.h>
int main()
{
	char ress[2048];
	int x,y,i,j,n,t,a[100],b[100],c[100],s,cha,min,re;
	gets(ress);
	scanf("%d %d",&x,&y);
	t = 1;
	n = 0;
	s=x*y;
	for(i = 0;i < 2048;i++)
	{
		if(ress[i]!='\0')
		{
			if(ress[i] >= '0'&&ress[i] <= '9'&&t == 1)
			{
				a[n]=a[n]*10+ress[i]-48;
			}
			else if(ress[i] >= '0'&&ress[i] <= '9'&&t == -1)
			{
				b[n]=b[n]*10+ress[i]-48;
			}
			else if(ress[i] == '*')
			{
				t = -t;
			}
			else if(ress[i] == ',')
			{
				n++;
				t = -t;
			}
		}
		else
		{
			break;
		}
	}
	
	for(i = 0;i < 100;i++)
	{
		c[i] = a[i] * b[i];
	}
	min = s*c[0];
	re = 0;
	for(i = 1;i < 100;i++)
	{
		cha = s-c[i];
		if(cha<0)
		cha=-cha;
		if(cha < min)
		{
			min = cha;
			re = i;
		}
	}
	printf("选中的分辨率是%d*%d",a[re],b[re]);
	return 0;
}
