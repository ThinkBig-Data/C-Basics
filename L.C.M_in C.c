//L.C.M of two numbers
#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int n,a,b;
    printf("\nenter the first no=");
	scanf("%d",&a);
	printf("\nenter the second no=");
	scanf("%d",&b);
    n=a*b;
    for(int i=1;i<=n;i++)
        {
            if(i%a==0&&i%b==0)
	            {
		            printf("L.C.M of %d and %d= %d",a,b,i);
		            break;
                    
	            }
        }
        return 0;
} 