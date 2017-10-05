#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,q,l,r,count;
	scanf("%d %d",&n,&q);
	int arr[1000000];
	int la[1000000];
	int sumla[1000000];
	for(x=1;x<=n;x++)
	{
		scanf("%d",&arr[x]);
		la[x]=(int)(log(arr[x])/log(2))+1;
		sumla[x]=sumla[x-1]+la[x];
	}
	for(x=0;x<q;x++)
	{
		scanf("%d %d",&l,&r);
		if(l!=0)
		count=sumla[r]-sumla[l-1];
		else 
		count=sumla[r];
		if(count%2==0)
		printf("Hacker\n");
		else
		printf("Mishki\n");
	}
	return 0;
}
