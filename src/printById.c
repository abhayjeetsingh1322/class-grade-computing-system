/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF 
THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

/*Author: Abhayjeet Singh*/

#include <stdio.h>
#include "lab4.h"

void printById (Node *list_head, char **categorys) 
{
    //Get student ID
    int sId = 0;
    printf("Enter the Student ID #: ");
    scanf("%d", &sId);
    printf("Hunting for %d\n\n", sId);
    
    //Finding student by the ID
    Node *nodePtr = studentFindById (list_head, sId);
    
    //If ID is found printing information else printing message
    if (nodePtr != NULL)
    {
        //Printing headers
        printHeaders(categorys);
        
        //Printing student information
        printStudentInfo(nodePtr);
    }
    else
    {
        printf("No student by that ID exists.\n");
    }
}

