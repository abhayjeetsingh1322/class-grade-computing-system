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

void resetIndividualCatGrade (Node *nodePtr, int cat)
{
    //If category is valid
    if (cat > 0 && cat < 5)
    {   
        //Get score number to update
        int scoreCat = 0;
        printf("Which score?\nEnter 1, 2, or 3\n");
        scanf("%d", &scoreCat);
        float newScore = 0;
        printf("Enter new score: ");
        scanf("%f", &newScore);
        
        //Cases for each category
        switch(cat) 
        {
            case 1:
                resetScoreOfCat1Grade(nodePtr, scoreCat, newScore);
                break;
            case 2: 
                resetScoreOfCat2Grade(nodePtr, scoreCat, newScore);
                break;
            case 3:
                resetScoreOfCat3Grade(nodePtr, scoreCat, newScore);
                break;
            case 4:
                resetScoreOfCat4Grade(nodePtr, scoreCat, newScore);
                break;
            default:    
                break;  //No message because category has been already checked
        }
    }
    else
    {
        printf("Invalid category.\n\n");
    }
}

