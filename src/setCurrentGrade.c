/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF 
THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

/*Author: Abhayjeet Singh*/

#include "lab4.h"

void setCurrentGrade (Node *nodePtr)
{
    //Calculating current grade
    float total = 0;
    total += cumulativeGradeReturner(nodePtr->Student.Cat1.Cumulative) * 15;
    total += cumulativeGradeReturner(nodePtr->Student.Cat2.Cumulative) * 30;
    total += cumulativeGradeReturner(nodePtr->Student.Cat3.Cumulative) * 20;
    total += cumulativeGradeReturner(nodePtr->Student.Cat4.Cumulative) * 35;
    nodePtr->Student.Current_Grade = (total/100);
}
