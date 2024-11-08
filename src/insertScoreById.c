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

void insertScoreById (Node *list_head, char **categorys)
{
    //Getting ID 
    int id; 
    printf("Enter the Student ID #: ");
    scanf("%d", &id);
    printf("Hunting for %d\n", id);
    
    //Finding student 
    Node *nodePtr = studentFindById(list_head, id);
    if (nodePtr != NULL)
    {
        int answer = 0;
        printf("Insert a Score for %s ?", nodePtr->Student.student_name);
        printf(" Enter 1, if yes. Enter 2, if no: ");
        scanf("%d", &answer);
        
        if (answer == 1)
        {
            printf("Which category?\n");
            printf("1) %s\n", *categorys);
            printf("2) %s\n", *(categorys+1));
            printf("3) %s\n", *(categorys+2));
            printf("4) %s\n", *(categorys+3));
            scanf("%d", &answer);
            resetIndividualCatGrade(nodePtr, answer);
            printf("\n");
            printHeaders(categorys);
            printStudentInfo(nodePtr);
            printf("Note: Category Cums, Current Grade, and Final Grade have not"
            " been recalculated based on the new value entered.\n\n");
        }
    }
    else
    {
        printf("No student by that ID exists.\n\n");
    }
}

