/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF 
THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

/*Author: Abhayjeet Singh*/

#include "lab4.h"
#include <stdlib.h>

void deleteFromList (Node **list_head_ptr, Node *nodePtr)
{
    //If the Node is the first entry in list
    if (*list_head_ptr == nodePtr)
    {
        *list_head_ptr = (*list_head_ptr)->next;
    }
    //If the Node is not the first entry in list
    else
    {
        Node *previousNodePtr = *list_head_ptr;
        while (previousNodePtr->next != nodePtr)
        {
            previousNodePtr = previousNodePtr->next;
        }
        
        //Delink
        previousNodePtr->next = nodePtr->next;
    }
    
    //Free memory
    free(nodePtr);
    nodePtr = NULL;
}
