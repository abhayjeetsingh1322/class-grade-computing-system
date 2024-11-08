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
#include <stdlib.h>

int writeToDisk (Node *list_head, char **categorys, char *outFileName)
{
    //Creating a stream for output
    FILE *output_file = fopen(outFileName, "w");
    if (output_file == NULL)
    {
        fprintf(stderr, "%s", "Unable to open output file.");
        exit(EXIT_FAILURE);
    }
    
    //Outputting categorys
    fprintf(output_file, "%s ", *(categorys + 0));
    fprintf(output_file, "%s ", *(categorys + 1));
    fprintf(output_file, "%s ", *(categorys + 2));
    fprintf(output_file, "%s\n", *(categorys + 3));
    
    //Creating two node pointers one for traverse and deletion
    Node *traversePtr = list_head;
    
    //Variable to count number of nodes
    int numNodes = 0;
    
    //Loop until end is reached
    while (traversePtr != NULL)
    {
        //Outputting name and ID
        fprintf(output_file, "%s\n", traversePtr->Student.student_name);
        fprintf(output_file, "%d\n", traversePtr->Student.student_ID);
        
        //Outputting o
        fprintf(output_file, "%-9.2f", traversePtr->Student.Cat1.score1);
        fprintf(output_file, "%-9.2f", traversePtr->Student.Cat1.score2);
        fprintf(output_file, "%-.2f\n", traversePtr->Student.Cat1.score3);
        
        fprintf(output_file, "%-9.2f", traversePtr->Student.Cat2.score1);
        fprintf(output_file, "%-9.2f", traversePtr->Student.Cat2.score2);
        fprintf(output_file, "%-.2f\n", traversePtr->Student.Cat2.score3);
        
        fprintf(output_file, "%-9.2f", traversePtr->Student.Cat3.score1);
        fprintf(output_file, "%-9.2f", traversePtr->Student.Cat3.score2);
        fprintf(output_file, "%-.2f\n", traversePtr->Student.Cat3.score3);
        
        fprintf(output_file, "%-9.2f", traversePtr->Student.Cat4.score1);
        fprintf(output_file, "%-9.2f", traversePtr->Student.Cat4.score2);
        fprintf(output_file, "%-.2f\n", traversePtr->Student.Cat4.score3);
        
        numNodes++;
	traversePtr = traversePtr->next;
    }
    
    return numNodes;
}
