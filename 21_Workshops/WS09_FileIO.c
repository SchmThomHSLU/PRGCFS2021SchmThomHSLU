#include <stdio.h>


#define NUM_FIRSTNAME_LENGTH 20
#define NUM_LASTNAME_LENGTH 30
#define NUM_Grades 6
#define NUM_STUDENTS 5


struct Student {
	char firstname[NUM_FIRSTNAME_LENGTH];
	char lastname[NUM_LASTNAME_LENGTH];
	float grades[NUM_Grades];
	float average;
	
	};


void ComputeGradeAverage(struct Student *students)
	{
	float TempAverage = 0;
	for ( int k = 0; k < NUM_Grades; k++)
		{
		printf("%.2f\n",students->grades[k]);
		TempAverage = TempAverage + students->grades[k];
		}
	students->average = TempAverage/NUM_Grades;
	}



int main()
{
	
	struct Student students[NUM_STUDENTS]=
	{
	[0].firstname = "Tony",	[0].lastname = "Stark",	[0].grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0},
	[1].firstname = "Peter",	[1].lastname = "Parker",	[1].grades = {4.5, 4.8, 5.8, 3.2, 5.9, 5.2},
	[2].firstname = "Bruce",	[2].lastname = "Banner",	[2].grades = {5.5, 2.8, 5.3, 4.8, 5.4, 4.5},
	[3].firstname = "Steve",	[3].lastname = "Rodgers",	[3].grades = {4.9, 3.9, 5.8, 2.3, 4.3, 5.4},
	[4].firstname = "Natasha",	[4].lastname = "Romanoff",	[4].grades = {5.3, 5.2, 5.1, 5.7, 4.9, 5.9}
	};


	//Daten aus CSV in Array einlesen
	FILE * fp = NULL;
	
	fp = fopen("Klassenliste.csv", "r");
	
	const int BYTES_IN_LINE = 8;
	unsigned char lineBuffer[BYTES_IN_LINE];
	
	
	while(fread(students,1, 1, fp));
	{
	
	}
	
	
	/*
	fscanf(fp, "%s\n" "%s\n", students->firstname, students->lastname);
	fscanf(fp, "%e", &students->grades[0]);
	fscanf(fp, "%e", &students->grades[1]);
	fscanf(fp, "%e", &students->grades[2]);
	fscanf(fp, "%e", &students->grades[3]);
	*/
	
	//fscanf(fp, "%s\n" "%s\n" "%e\n" "%e\n" "%e\n" "%e\n" "%e\n", students->firstname, students->lastname, &students->grades[0], &students->grades[1], &students->grades[2], &students->grades[3], &students->grades[4]);
	
	
	// %s, %s, %s, %s, %s, %s,
	// students->grades[0],students->grades[1], students->grades[2], students->grades[3], students->grades[4], students->grades[5]
	
	
	
	
	fclose(fp);
	
	
	
	
	
	
	float Classaverage = 0;
	
	for (int s = 0; s < NUM_STUDENTS; s++ )
	{
	ComputeGradeAverage(&students[s]);
	
	Classaverage = Classaverage + students[s].average;
	
	printf("%s %s hat einen Durchschnitt von %.2f\n",students[s].firstname, students[s].lastname, students[s].average);
	
	}
	Classaverage = Classaverage / NUM_STUDENTS;
	
	printf("Der Klassendurchschnitt beträgt %.2f.\n", Classaverage);
	
	
	
	//Daten von Array in CSV schreiben:
	
	/*FILE * fp = NULL;
	
	fp = fopen("Klassenliste.csv", "r+");
	
	
	for ( int i = 0; i <= (NUM_STUDENTS - 1); i++)
	{
	fprintf(fp, "%s,	 %s,	", students[i].firstname, students[i].lastname);
	
		for ( int k = 0; k <= (NUM_Grades -1); k++)
		{
		fprintf(fp, "%.2f,	", students->grades[k]);
		}
	
	char Nextline[] = "\n";
	fputs(Nextline, fp);
	
	}
	fclose(fp);*/
	
	
	
	
	
	
	
	// Stephen,	 Strange,	6.00,	5.40,	5.60,	6.00,	5.60,	6.00,
	// Nick,	 Fury,		4.60,	5.20,	5.30,	4.30,	3.50,	5.00,
	// Hope,	 van Dyne,	5.60,	5.10,	5.60,	4.30,	5.50,	5.70,
	// Scott,	 Lange,	4.60,	4.20,	5.70,	5.90,	4.50,	5.20,	
	
	
	
	
return 0; 
}

