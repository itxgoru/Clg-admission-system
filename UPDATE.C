
void updatetofile()
{
	data=fopen("name.txt", "a");
	fprintf(data,"Name : ");
	fprintf(data, "%s ", s.name);
	fprintf(data, "\n");
	fprintf(data, "12th Marks is : ");
	fprintf(data, "%d ", s.marks);
	fprintf(data, "\n");
	fprintf(data, "Contact no. : ");
	fprintf(data,"%s ",s.mobile);
	fprintf(data, "\n");
	fprintf(data, "Mail id : ");
	fprintf(data, "%s ",s.email);
	fprintf(data, "\n ");
 }