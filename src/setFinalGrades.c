/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF 
THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

/*Author: Abhayjeet Singh*/

#include "lab4.h"

void setFinalGrades (Node *list_head, char **categorys)
{
    //Creating traverse pointer and variable to hold total
    Node *traversePtr = list_head;
    float total = 0;
    
    //Loop until end is reached
    while (traversePtr != NULL)
    {
        //Calculate and set final grade
        total = 0;
        total += finalGradeReturner(traversePtr->Student.Cat1.Cumulative) * 15;
        total += finalGradeReturner(traversePtr->Student.Cat2.Cumulative) * 30;
        total += finalGradeReturner(traversePtr->Student.Cat3.Cumulative) * 20;
        total += finalGradeReturner(traversePtr->Student.Cat4.Cumulative) * 35;
        traversePtr->Student.Final_Grade = (total/100);

        traversePtr = traversePtr->next;
    }
    
    //Printing student information
    printList(list_head, categorys);
}
