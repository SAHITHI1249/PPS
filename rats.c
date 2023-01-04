
#include<stdio.h>
int main()
{
	int i,r,u,n,a[100],TR;
	scanf("%d%d",&r,&u);
	scanf("%d",&n);
	TR = r*u;
	for( i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		TR = TR - a[i];
		if(TR==0)
			break;
	}
	if(TR<0)
		printf("-%d",i+1);
	else if(TR=0)
		printf("%d",i+1);
	else
                printf("-1");
	return 0;
}



