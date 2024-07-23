#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
char select;
#include "ADMIN.c"
#include "UPDATE.c"
#include "COURSE.c"
#include "PRINT.c"

 int main()
{
	int choice;
	clrscr();
	do
	{
		printf("\n\n");
		printf("  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
		printf("|						  |\n");
		printf("|  *** Enter your choice from below menue ***     |\n");
		printf("|  Enter 1 for Get admission     	          |\n");
		printf("|  Enter 0 for exit 		 		  |\n");
		printf("| _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |\n\n  ");
		scanf("%d", &choice);
		clrscr();
		switch (choice)
		{
		case 1:
			newadmission();
			courselist();
			if(select=='y' || select=='Y')
			{
			updatetofile();
			printadmissiondata();
			printf("\n");

			printf("press any key to show main menue\n");
			getch();
			clrscr();
			fprintf(data,"\n");
			fclose(data);
			}
			else
			{
			clrscr();
			}
			break;
		default:
		{
			printf("Enter right choice !!\n");
		}
	}
	} while (choice != 0);
	return 0;
}