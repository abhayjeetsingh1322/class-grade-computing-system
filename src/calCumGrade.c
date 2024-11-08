/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF 
THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

/*Author: Abhayjeet Singh*/

#include "lab4.h"

float calCumGrade (float score1, float score2, float score3) 
{
    //If all scores are -1 then return -1 else return calculated cumulative 
    if ((score1 < 0) && (score2 < 0) && (score3 < 0))
    {
        return -1;
    }
    else
    {
        //Calculating based on number of scores available
        int divisor = 0; 
        float total = 0;
        if (score1 > -1)
        {
            total += score1;
            divisor++;
        }
        if (score2 > -1)
        {
            total += score2;
            divisor++;
        }
        if (score3 > -1)
        {
            total += score3;
            divisor++;
        }
        
        return total/divisor;
    }
}
