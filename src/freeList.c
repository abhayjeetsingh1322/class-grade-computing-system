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

void freeList (Node *list_head)
{
    //Creating two node pointers one for traverse and deletion
    Node *traversePtr = list_head;
    Node *nodeDeleter;
    
    //Freeing all nodes
    while (traversePtr != NULL)
    {
        nodeDeleter = traversePtr;
        traversePtr = traversePtr->next;
        free(nodeDeleter);
    }
}
