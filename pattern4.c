#include<stdio.h>

int main()
{    
	int i,j,n,k;
	printf("Enter the no. of rows for Inv. half pyramid: ");
	scanf("%d",&n);
		for(i=n;i>=1;i--){
		    for(j=1;j<=n-i;j++){
                        printf(" ");
		    }
		    for(k=1;k<=i;k++){
		        printf("*");
		    }
		printf("\n");
	    }
	
} 
