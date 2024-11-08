/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF 
THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

/*Author: Abhayjeet Singh*/

#include "lab4.h"
#include <stdio.h>

void printHeaders (char **categorys)
{
    //Printing headers
    printf("%-30s", "Student Name");
    printf("%-20s", "Student ID#");
    printf("%-45s", *(categorys));
    printf("%-45s", *(categorys + 1));
    printf("%-45s", *(categorys + 2));
    printf("%-50s", *(categorys + 3));
    printf("%s\n", "Current Final");
    printf("%51s%10s%10s%12s", "1", "2", "3", "Cum");
    printf("%13s%10s%10s%12s", "1", "2", "3", "Cum");
    printf("%13s%10s%10s%12s", "1", "2", "3", "Cum");
    printf("%13s%10s%10s%12s", "1", "2", "3", "Cum");
    printf("%22s%12s", "Grade", "Grade\n");
}
