#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int testcases,x,y;
	/*enter no. of testcases*/
	printf("Enter no. of testcases: ");
	scanf("%d",&testcases);
	
	while(testcases--)
	{
		/*input no. of chocolates - X,Y*/
		printf("Enter no. of chocolates Meliodas and Ban has respectively: \n");
		scanf("%d %d",&x,&y);
	
		/*inside while loop(x!=y or x!=0 or y!=0)*/
		while(x!=y && x!=0 && y!=0)
		{
			if(x>y)
				x=x-y;
			else
				y=y-x;
		}
		
		/*outside x,y loop
		print total no. of candies left     */
		printf("total no. of candies left = %d\n\n",x+y);
	}
    
	getch();
    return 1;
}
