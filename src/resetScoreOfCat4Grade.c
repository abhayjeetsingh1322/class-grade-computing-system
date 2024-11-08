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

void resetScoreOfCat4Grade (Node *nodePtr, int scoreCat, float newScore)
{
    //Updating score based on score category and new score
    switch(scoreCat) 
    {
        case 1: 
            nodePtr->Student.Cat4.score1 = newScore;
            break;
        case 2:
            nodePtr->Student.Cat4.score2 = newScore;
            break;
        case 3: 
            nodePtr->Student.Cat4.score3 = newScore;
            break;
        default:
            printf("Invalid score category.\n\n");
            break;
    }
}
