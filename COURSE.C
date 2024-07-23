void courselist()
 {
  int choice;
  clrscr();
  printf("In our college many courses are available !!\n");
  printf("Select one of them...\n");
  printf(" number courses     fees (annualy)\n");
  printf("   1    BCA         65000\n");
  printf("   2    BBA         75000\n");
  printf("   3    MCA         95000\n");
  printf("   4    Btech       120000\n");
  printf("\nEnter 0 for exit our course menue !! \n");
  printf("Enter your desired course number please \n");
  scanf("%d",&choice);
  clrscr();
  switch(choice)
  {
  case 1:
	 printf("\nCongrats you select BCA course \n");
	 if(s.marks>=95 && s.marks<=100)
 {

  printf("Congrats ! you got 20%% scholarship\n");
  printf("Now your BCA fees is : %ld",(65000-((65000*20)/100)));
  }
  else if(s.marks>=85 && s.marks<=94)
  {
   printf("Congrats ! you got 10%% scholarship\n");
   printf("Now your BCA fees is : %ld",(65000-((65000*10)/100)));
   }
   else if(s.marks>=80 && s.marks<=84)
   {
   printf("Congrats ! you got 5%% scholarship\n");
   printf("Now your BCA fees is : %ld",(65000-((65000*5)/100)));
   }
   else
   {
    printf("You will not get any scholarship\n");
    }
	 printf("\nIn this course there is 6 semesters\n");
	 printf("Every semester is of 6 months\n");
	 printf("Average placement of BCA is : 3lakh/yr\n");
	 printf("Are you interest in this course \n.\n.\n.\nplease type ** Y ** otherwise ** N **\n");
	 scanf("%s",&select);
	 if(select=='y' || select=='Y')
	 {
	  fprintf(data,"course selected : ");
	  fprintf(data,"BCA");
	  fprintf(data,"\n");
	  clrscr();
	   printf("\n#### Eligibility criteria ####\n");
	  printf("Completed 12th with any stream\n");
	  printf("There is no reappear in any subject\n");
	 }
	  else
	  {
	    printf("Thanks for checking \n");
	   }
	   break;
case 2:
	 printf("\nCongrats you select BBA course \n");
	 if(s.marks>=95 && s.marks<=100)
 {

  printf("Congrats ! you got 20%% scholarship\n");
  printf("Now your BBA fees is : %ld",(75000-((75000*20)/100)));
  }
  else if(s.marks>=85 && s.marks<=94)
  {
   printf("Congrats ! you got 10%% scholarship\n");
   printf("Now your BBA fees is : %ld",(75000-((75000*10)/100)));
   }
   else if(s.marks>=80 && s.marks<=84)
   {
   printf("Congrats ! you got 5%% scholarship\n");
   printf("Now your BBA fees is : %ld",(75000-((75000*5)/100)));
   }
   else
   {
    printf("You will not get any scholarship\n");
    }
	 printf("\nIn this course there is 6 semesters\n");
	 printf("Every semester is of 6 months\n");
	 printf("Average placement of BBA is : 2lakh/yr\n");
	 printf("Are you interest in this course \n.\n.\n.\nplease type ** Y **  otherwise ** N **\n");
	 scanf("%s",&select);
	 if(select=='y' || select=='Y')
	 {
	  fprintf(data,"course selected : ");
	  fprintf(data,"BBA");
	  fprintf(data,"\n");
	  clrscr();
	  printf("\n#### Eligibility criteria ####\n");
	  printf("Completed 12th with any stream\n");
	  printf("There is no reappear in any subject\n");
	  }
	  else
	  {
	    printf("Thanks for checking \n");
	   }
	   break;
case 3:
	 printf("\nCongrats you select MCA course \n");
	 if(s.marks>=95 && s.marks<=100)
 {

  printf("Congrats ! you got 20%% scholarship\n");
  printf("Now your MCA fees is : %ld",(95000-((95000*20)/100)));
  }
  else if(s.marks>=85 && s.marks<=94)
  {
   printf("Congrats ! you got 10%% scholarship\n");
   printf("Now your MCA fees is : %ld",(95000-((95000*10)/100)));
   }
   else if(s.marks>=80 && s.marks<=84)
   {
   printf("Congrats ! you got 5%% scholarship\n");
   printf("Now your MCA fees is : %ld",(95000-((95000*5)/100)));
   }
   else
   {
    printf("You will not get any scholarship\n");
    }
	 printf("\nIn this course there is 4 semesters\n");
	 printf("Every semester is of 4 months\n");
	 printf("Average placement of MCA is : 10lakh/yr\n");
	 printf("Are you interest in this course \n.\n.\n.\nplease type ** Y ** otherwise ** N **\n");
	 scanf("%s",&select);
	 if(select=='Y' || select=='y')
	 {
	  fprintf(data,"course selected : ");
	  fprintf(data,"MCA");
	  fprintf(data,"\n");
	  clrscr();
	   printf("\n#### Eligibility criteria ####\n");
	  printf("Completed Graduation with any stream\n");
	  printf("There is no reappear in any subject\n");
	  printf("\n");
	  printf("press any key to show main menue\n");
	  getch();
	  }
	  else
	  {
	    printf("Thanks for checking \n");
	   }
	   break;
case 4:
	 printf("\nCongrats you select Btech course \n");
	 if(s.marks>=95 && s.marks<=100)
 {

  printf("Congrats ! you got 20%% scholarship\n");
  printf("Now your Btech fees is : %ld",(120000-((120000*20)/100)));
  }
  else if(s.marks>=85 && s.marks<=94)
  {
   printf("Congrats ! you got 10%% scholarship\n");
   printf("Now your Btech fees is : %ld",(120000-((120000*10)/100)));
   }
   else if(s.marks>=80 && s.marks<=84)
   {
   printf("Congrats ! you got 5%% scholarship\n");
   printf("Now your Btech fees is : %ld",(120000-((120000*5)/100)));
   }
   else
   {
    printf("You will not get any scholarship\n");
    }
	 printf("\nIn this course there is 8 semesters\n");
	 printf("Every semester is of 6 months\n");
	 printf("Average placement of Btech is : 7lakh/yr\n");
	 printf("Are you interest in this course \n.\n.\n.\n please type ** Y ** otherwise type ** N **\n");
	 scanf("%s",&select);
	 if(select=='y' || select=='Y')
	 {
	  fprintf(data,"course selected : ");
	  fprintf(data,"Btech");
	  fprintf(data,"\n");
	  clrscr();
	   printf("\n#### Eligibility criteria ####\n");
	  printf("Completed 12th with non medical stream\n");
	  printf("There is no reappear in any subject\n");
	  }
	  else
	  {
	    printf("Thanks for checking \n");
	   }
	   break;
    default:
		printf("Enter correct choice from menue\n");

}
}