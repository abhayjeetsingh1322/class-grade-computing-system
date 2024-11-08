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

void recalAll (Node *list_head, char **categorys) 
{
    //Creating traversePtr 
    Node *traversePtr = list_head;
    
    while (traversePtr != NULL)
    {
        //Recalculate & print  
        setAllCum(traversePtr);
        traversePtr->Student.Final_Grade = -1;
        printf("Student Name: %-40s", traversePtr->Student.student_name);
        printf("%s Cumulative: %-20.2f", *(categorys), traversePtr->Student.Cat1.Cumulative);
        printf("%s Cumulative: %-20.2f", *(categorys + 1), traversePtr->Student.Cat2.Cumulative);
        printf("%s Cumulative: %-20.2f", *(categorys + 2), traversePtr->Student.Cat3.Cumulative);
        printf("%s Cumulative: %-20.2f", *(categorys + 3), traversePtr->Student.Cat4.Cumulative);
        printf("%s: %5.2f\n", "Current Grade", traversePtr->Student.Current_Grade);
        traversePtr = traversePtr->next;
    }
    printf("\n");
}
