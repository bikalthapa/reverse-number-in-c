#include<stdio.h>
int main(){
	int unit, tenth;
	printf("Enter one digit of unit Place");
	scanf("%d",&unit);
	
	printf("Enter another digit of Tenth Place");
	scanf("%d",&tenth);
	
	int equation = unit*10 + tenth;
	printf("You Enter %d%d\n",tenth,unit);
	printf("The reverse number is %d",equation);
	return(0);
}
