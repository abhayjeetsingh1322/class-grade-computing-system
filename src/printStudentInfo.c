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

void printStudentInfo (Node *nodePtr) 
{
    //Printing name and ID
    printf("%-30s", nodePtr->Student.student_name);
    printf("%-20d", nodePtr->Student.student_ID);
    
    //Printing category1 grades
    printCategoryGrade(nodePtr->Student.Cat1.score1);
    printCategoryGrade(nodePtr->Student.Cat1.score2);
    printCategoryGrade(nodePtr->Student.Cat1.score3);
    printCumGrade(nodePtr->Student.Cat1.Cumulative);
    
    //Printing category2 grades
    printCategoryGrade(nodePtr->Student.Cat2.score1);
    printCategoryGrade(nodePtr->Student.Cat2.score2);
    printCategoryGrade(nodePtr->Student.Cat2.score3);
    printCumGrade(nodePtr->Student.Cat2.Cumulative);
    
    //Printing category3 grades
    printCategoryGrade(nodePtr->Student.Cat3.score1);
    printCategoryGrade(nodePtr->Student.Cat3.score2);
    printCategoryGrade(nodePtr->Student.Cat3.score3);
    printCumGrade(nodePtr->Student.Cat3.Cumulative);
    
    //Printing category4 grades
    printCategoryGrade(nodePtr->Student.Cat4.score1);
    printCategoryGrade(nodePtr->Student.Cat4.score2);
    printCategoryGrade(nodePtr->Student.Cat4.score3);
    printCumGrade(nodePtr->Student.Cat4.Cumulative);
    
    //Printing current and final grade
    printf("%10.2f", nodePtr->Student.Current_Grade);
    printFinalGrade(nodePtr->Student.Final_Grade);
}
