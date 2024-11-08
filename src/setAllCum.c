/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF 
THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

/*Author: Abhayjeet Singh*/

#include "lab4.h"

void setAllCum (Node *nodePtr) 
{
    //Calculate all cumulative grades
    nodePtr->Student.Cat1.Cumulative = calCumGrade(nodePtr->Student.Cat1.score1,
    nodePtr->Student.Cat1.score2, nodePtr->Student.Cat1.score3);
    
    nodePtr->Student.Cat2.Cumulative = calCumGrade(nodePtr->Student.Cat2.score1,
    nodePtr->Student.Cat2.score2, nodePtr->Student.Cat2.score3);
    
    nodePtr->Student.Cat3.Cumulative = calCumGrade(nodePtr->Student.Cat3.score1,
    nodePtr->Student.Cat3.score2, nodePtr->Student.Cat3.score3);
    
    nodePtr->Student.Cat4.Cumulative = calCumGrade (nodePtr->Student.Cat4.score1,
    nodePtr->Student.Cat4.score2, nodePtr->Student.Cat4.score3);
}
