#include<stdio.h>
int main()
	{   int a[100],b[100],c[100],j,k;
	    	printf("Enter size of the array");
	    int n,i,m;
		scanf("%d",&n);

                printf("enter size of second array");
                scanf("%d",&m);
		
		if(n==m) {
                  printf("Enter elements of first array");
                    for(i=0;i<n;i++)
                       scanf("%d",&a[i]);
                   printf("Enter elements of second  array");
                    for(i=0;i<m;i++)
                         scanf("%d",&b[i]);
		    for(i=0;i<n;i++)
			{
			
			
				c[i]=a[i]+b[i];
     			
		    
 }
         		

	          for(i=0;i<n;i++)
		  printf("%d\n",c[i]);	  
                  }
		else  {
			printf("sizes did not match ");
				printf("enter size of 1st and second arrays");
               }		
   		return 0;       





		     
 	} 
	
