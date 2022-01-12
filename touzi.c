#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define True 1
#define False 0

double qiujie(int s,int n ,int q)
{double sum=0.00;
int i;
	if(n==s)
return pow(1.00/q,n);
if(n<1)
	return 0;
if(s<0)
	return 0;
if(n==1&&s>q)
	return 0;
if(n==1&&s<q&&s>0)
	return 1.00/q;
if(s<n)
	return 0;
for(i=1;i<=q;i++)
/*sum=(qiujie(s-1,n-1,q)+qiujie(s-2,n-1,q)+qiujie(s-3,n-1,q)+qiujie(s-4,n-1,q)+qiujie(s-5,n-1,q)+qiujie(s-6,n-1,q))*(1.00/6);*/
sum+=qiujie(s-i,n-1,q);
sum=sum*(1.00/q);
return sum;
}
int main()
{int s,n,l,p=6;
double m;
printf("please input the num of dices:");
scanf("%d",&n);
l=n*6;
for(s=n;s<=l;s++)
{	m=qiujie(s,n,p);
printf("The probability that the sum of points thrown is %d is:%f\n",s,m);
}
return 0;
}