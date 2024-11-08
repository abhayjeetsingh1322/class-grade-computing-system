/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF 
THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

/*Author: Abhayjeet Singh*/

#include "lab4.h"

void insertInList (Node **list_head_ptr, Node *newNodePtr)
{
    //Attach to list, empty 
    if (*list_head_ptr == NULL)
    {
        *list_head_ptr = newNodePtr;
    } 
    //Attach to list, first
    else if (newNodePtr->Student.student_ID <= (*list_head_ptr)->Student.student_ID)
    {
        newNodePtr->next = *list_head_ptr;
        *list_head_ptr = newNodePtr;
    }
    //Attach to list, between
    else 
    {
        Node *traversePtr = (*list_head_ptr)->next;
        Node *previousNodePtr = *list_head_ptr;
        
        while((traversePtr != NULL)&&(traversePtr->Student.student_ID <= newNodePtr->Student.student_ID))
        {
            previousNodePtr = traversePtr; 
            traversePtr = traversePtr->next;
        }
        
        previousNodePtr->next = newNodePtr; 
        newNodePtr->next = traversePtr; 
    }
}
