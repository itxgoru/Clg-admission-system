FILE *data;
int structuresize;
struct student
	{
	char name[10];
	int marks;
	char email[30];
	char mobile[11];
	}s;
void newadmission()
{
	printf("\n\n");
	printf("- - - - - - - - - - - - - - - - - - - -\n");
	printf("Enter your name : \n");
	scanf("%s", s.name);



	printf("Enter your 12th marks : \n");
	scanf("%d", &s.marks);


	printf("Enter your Mobile number : \n");
	scanf("%s", s.mobile);


	printf("Enter you email address : \n");
	scanf("%s",s.email);
	printf("\n- - - - - - - - - - - - - - - - - - - -\n");


}
