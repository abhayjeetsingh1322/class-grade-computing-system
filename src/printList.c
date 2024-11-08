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

void printList (Node *list_head, char **categorys)
{
    //Varaibles for all class average
    double cat1 = 0;
    double cat2 = 0;
    double cat3 = 0;
    double cat4 = 0;
    double current = 0;
    
    //Printing headers
    printHeaders(categorys);
    
    //Creating traverse pointer
    Node *traversePtr = list_head;
    int numStudents = 0;
    
    //Looping until end is reached
    while(traversePtr != NULL)
    {   
        //Add to class average
        cat1 += traversePtr->Student.Cat1.Cumulative;
        cat2 += traversePtr->Student.Cat2.Cumulative;
        cat3 += traversePtr->Student.Cat3.Cumulative;
        cat4 += traversePtr->Student.Cat4.Cumulative;
        current += traversePtr->Student.Current_Grade;
        
        //Printing student information
        printStudentInfo(traversePtr);
        
        numStudents++;
        
        //Moving to next node
        traversePtr = traversePtr->next;
    }
    
    //Printing all class averages
    printf("\nClass averages for ");
    printf("%s: %.2f, ", *(categorys), (cat1/numStudents));
    printf("%s: %.2f, ", *(categorys + 1), (cat2/numStudents));
    printf("%s: %.2f, ", *(categorys + 2), (cat3/numStudents));
    printf("%s: %.2f, ", *(categorys + 3), (cat4/numStudents));
    printf("Current Grade: %.2f\n\n", (current/numStudents));
}
