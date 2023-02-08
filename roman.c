#include<stdio.h>
#include<string.h>
int decimal(char c)
{
       int count;
       switch (c)
    {
       case 'I':
           count = 1;
           break;
       case 'V':
           count = 5;
           break;
       case 'X':
           count = 10;
           break;
       case 'L':
           count = 50;
           break;
       case 'C':
           count = 100;
           break;
       case 'D':
           count = 500;
           break;
       case 'M':
           count = 1000;
           break;
       case '\0':
           count = 0;
           break;
       default :
           count = -1;
           break;
    }
     return count;
} 
int main()
{
     char roman[1000];
     int num=0,i=0;
     printf("enter the roman number");
     scanf("%s",roman);

     int length;
     length = strlen(roman);
     printf("\n length of string %ld",strlen(roman));
     while(roman[i]!='\0')
    {
      if(decimal (roman[i])<0)
      {
        printf("invalid roman");
      }
      if(strlen(roman)-i >=2)
      {
        if(decimal(roman[i]) < decimal(roman[i+2]))
        {
          printf("invalid roman");
        }
        if (decimal(roman[i]) >= decimal(roman[i+1]))
        {
           num = num + decimal(roman[i]);
	}
        else 
        {
           num = num + decimal(roman[i+1])-decimal (roman[i]);
       
        i++;
	}	
      }
      
	     
      i++;
    }
     int a;
    a = decimal(roman[length-1]);
   
      printf("%d is the decimal value",num + a); return 0;
    
}
