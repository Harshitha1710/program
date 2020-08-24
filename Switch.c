#include<stdio.h>
int main()
{
	printf("pick a food item : \n1. Pizza,rs 239\n2. Burger,rs 129\n3. Pasta,rs 179\n4. FrenchFires,rs 99\n5. Sandwich,rs 149");
	int choice=0;
	scanf("%d", &choice);
	switch(choice)
	{
		case 1 :
			printf("Your choice is Pizza,rs 239");
			break;
		case 2 :
			printf("Your choice is Burger,rs 129");
			break;
		case 3 :
		    printf("Your choice is Pasta,rs 179");
			break;	
		case 4 :
		    printf("Your choice is FrenchFires,rs 99");
			break;
		case 5 :
		    printf("Your choice is Sandwich,rs 149");
			break;	
		default : printf("Invalid choice");	
	
	}
}
