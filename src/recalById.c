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

void recalById (Node *list_head, char **categorys) 
{
    //Variable to store id
    int id; 
    
    printf("What is the Student ID for the scores you want to recalculate?\n Student ID: ");
    scanf("%d", &id);
    
    //Find student 
    Node *traversePtr = studentFindById(list_head, id);
    
    if (traversePtr != NULL)
    {
        printf("Recalculating grades for %s, ", traversePtr->Student.student_name);
        printf("Student ID Number: %d\n", traversePtr->Student.student_ID);
        
        //Recalculate & print  
        setAllCum(traversePtr);
        printf("%s Cumulative: %.2f\n", *(categorys), traversePtr->Student.Cat1.Cumulative);
        printf("%s Cumulative: %.2f\n", *(categorys + 1), traversePtr->Student.Cat2.Cumulative);
        printf("%s Cumulative: %.2f\n", *(categorys + 2), traversePtr->Student.Cat3.Cumulative);
        printf("%s Cumulative: %.2f\n", *(categorys + 3), traversePtr->Student.Cat4.Cumulative);
        printf("Current Grade: %.2f\n", traversePtr->Student.Current_Grade);
        
        traversePtr->Student.Final_Grade = -1;
        printf("Student's Final Grade was deleted.\n\n");
    }
    else
    {
        printf("No student by that ID exists.\n\n");
    }
    
}
