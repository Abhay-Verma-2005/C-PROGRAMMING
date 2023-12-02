#include <stdio.h>
#include <conio.h>
#include <string.h>
void menu();
void menu()
{
    printf("\nList of Political Parties:\n-------------------------------------------\n");
    printf("1-> BHARATIYA JANATA PARTY (B.J.P)\n");
    printf("2-> AAM AADMI PARTY (A.A.P)\n");
    printf("3-> INDIAN NATIONAL CONGRESS (I.N.C)\n");
    printf("4-> BAHUJAN SAMAJ PARTY (B.S.P)\n-------------------------------------------\n");
}

int main() 
{
	int a = 0, b = 0, c = 0, d = 0;
	printf("************Welcome in Online Voting System!************\n");
	start:
    while (1)
	{
	char name[100];
    char gender; 
    int age;
	printf("\nEnter Voter's Name: ");
    scanf("%s", name);
	printf("Enter Voter's Age: ");
    scanf("%d", &age);
    printf("Enter Voter's Gender (M/F): ");
    scanf(" %C",&gender);
    printf("\n------------YOUR DETAILS ARE---------------\n");
    if (age < 18)
			{
            printf("Sorry, %s, you are not eligible to vote.\n", name);
            goto start;
        	} 
    else{
		if (gender=='M' || gender=='m')
		{
			printf(" NAME: Mr. %s ", name);
			printf("\t AGE: %d",age);
		}
		else if (gender=='F' || gender=='f')
		{
			printf(" NAME: Ms. %s ", name);
			printf("\t AGE: %d",age);
		}
		else 
		{
			printf("INVALID CHOICE! , Please Enter correct Gender.");
			goto start;
		}
		printf("\n-------------------------------------------\n");
		}
	int choice;
	menu(); 																						//USE OF FUNCTIONS
	printf("Enter your Vote : ");
    scanf("%d", &choice);
    
	switch (choice) 
	{
        case 1:
        a++;
        break;
        case 2:
      	b++;
        break;
        case 3:
        c++;
        break;
        case 4:
        d++;
        break;
        default:
        {
		printf("Invalid choice! You choice wrong...\n");
		
		}   
	}
    printf("Do you want another response? (Y/N): ");
    char ch = getch();
    if (ch !='Y') 
			{
	printf("\n-------------------------------------\nVoting Results:\n-------------------------------------\n");
    printf("(B.J.P): %d votes\n", a);
    printf("(A.A.P): %d votes\n", b);
    printf("(I.N.C): %d votes\n", c);
    printf("(B.S.P): %d votes\n", d);
    printf("\nWinner: ");
    if (a>b && a>c && a>d) {
        printf("(B.J.P)\n");
    } else if (b>a && b>c && b>d) {
        printf("(A.A.P)\n");
    } else if (c>a && c>b && c>d) {
        printf("(I.N.C)\n");
    } else if (d>a && d>b && d>c) {
        printf("(B.S.P)\n");
    } else {
        printf(" Oops! It is a TIE!!! \n");
    }
            break;
        	}
    }
    printf("\n**********Thank you for using this Voting System!**********\n");
    return 0;   
}

