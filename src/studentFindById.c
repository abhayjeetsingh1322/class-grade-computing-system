/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF 
THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

/*Author: Abhayjeet Singh*/

#include "lab4.h"

//Returns pointer to node if found else NULL
Node * studentFindById (Node *list_head, int id)
{
    Node *traversePtr = list_head;
    while (traversePtr != NULL)
    {
        if (traversePtr->Student.student_ID == id)
        {
            return traversePtr;
        }
        traversePtr = traversePtr->next;
    }
    return NULL;
}
