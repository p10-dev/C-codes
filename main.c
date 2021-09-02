#include <stdio.h>

void main()
{
  char Mat_No[10], C_code[6], Gr;
  int i,j,m,n,unit,SU=0,P,GP,SGP=0,TU=0,TGP=0;
  float SGPA, CGPA;

  printf("Enter the number of semesters:");
  scanf("%d", &m);

  for(i=0;i<=n;i++){
    printf("\n\nEnter the Matriculation Number of student:");
    scanf("%s", &Mat_No);

    printf("\nEnter the Number of courses done by %s:", Mat_No);
    scanf("%d", &n);

    for(j=0;j<=n;j++){
        printf("\nEnter the Course Code:");
        scanf("%s", &C_code);
        printf("\nEnter the Course Unit:");
        scanf("%d", &unit);
        printf("\nGrade:");
        scanf("%s", &Gr);
    switch(Gr){
    case 'A':case 'a':P=5;break;
    case 'B':case 'b': P=4;break;
    case 'C':case 'c': P=3;break;
    case 'D':case 'd': P=2;break;
    case 'F':case 'f': P=0;break;
    default:
        printf("Enter valid Grades of A,B,C,D, or F");
    }
    GP = unit*P;
    SGP+=GP;
    SU+=unit;
    }
    SGPA = SGP/SU;
    printf("\nGPA = %3.2f", SGPA);
    TU = TU + SU;
    TGP+=SGP;
}
CGPA = TGP/TU;
printf("\n CGPA = %3.2f\n", CGPA);

  }





