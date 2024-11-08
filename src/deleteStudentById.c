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

void deleteStudentById(Node **list_head_ptr)
{
    if(*list_head_ptr == NULL)
    {
        printf("The list of students is empty.\n\n");
    }
    else
    {
        //Prompt
        int id = 0; 
        printf("Please enter the student ID number you wish to delete, followed"
        " by enter.\n");
        scanf("%d", &id);
        
        //Find student by ID
        Node *traversePtr = studentFindById(*list_head_ptr, id);
        
        //If student is found
        if (traversePtr != NULL)
        {
            //Prompt
            int choice = 0;
            printf("Do you really want to delete student ID number %d, %s ?\n",
            traversePtr->Student.student_ID, traversePtr->Student.student_name);
            printf("If yes, enter 1. If no, enter 2: ");
            scanf("%d", &choice);
            
            //Delete student from list
            if (choice == 1) 
            {
                printf("Student ID number %d, %s has been deleted.\n\n",
                traversePtr->Student.student_ID, traversePtr->Student.student_name);
		deleteFromList(list_head_ptr, traversePtr);
            }
        }
        else
        {
            printf("No student ID number exists.\n\n");    
        }
    }
}
