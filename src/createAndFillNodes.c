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
#include <string.h>

int createAndFillNodes (Node **list_head_ptr, FILE *input_file) 
{
    //Allocate space of name
    char *str = malloc(40 * sizeof(char));
    if (str == NULL)
    {
        fprintf(stderr, "%s", "Unable to allocate memory.");
        exit(EXIT_FAILURE);
    }
    
    //Variable for number of nodes
    int numNodes = 0;
    
    //Loop to check if EOF is reached
    while(fscanf(input_file, "%39[^\n]", str) == 1)
    {
        //Create a structure for node
        Node *newNodePtr = malloc(sizeof(struct Node));
        if (newNodePtr == NULL)
        {
            fprintf(stderr, "%s", "Unable to allocate memory.");
            exit(EXIT_FAILURE);
        }
        numNodes++;
        
        //Fill in data
        strcpy(newNodePtr->Student.student_name, str);
        fscanf(input_file, "%d", &(newNodePtr->Student.student_ID));
        
        fscanf(input_file, "%f", &(newNodePtr->Student.Cat1.score1));
        fscanf(input_file, "%f", &(newNodePtr->Student.Cat1.score2));
        fscanf(input_file, "%f", &(newNodePtr->Student.Cat1.score3));
        
        fscanf(input_file, "%f", &(newNodePtr->Student.Cat2.score1));
        fscanf(input_file, "%f", &(newNodePtr->Student.Cat2.score2));
        fscanf(input_file, "%f", &(newNodePtr->Student.Cat2.score3));

        fscanf(input_file, "%f", &(newNodePtr->Student.Cat3.score1));
        fscanf(input_file, "%f", &(newNodePtr->Student.Cat3.score2));
        fscanf(input_file, "%f", &(newNodePtr->Student.Cat3.score3));

        fscanf(input_file, "%f", &(newNodePtr->Student.Cat4.score1));
        fscanf(input_file, "%f", &(newNodePtr->Student.Cat4.score2));
        fscanf(input_file, "%f", &(newNodePtr->Student.Cat4.score3));

        setAllCum(newNodePtr);
        setCurrentGrade(newNodePtr);
        newNodePtr->Student.Final_Grade = -1;
        
        newNodePtr->next = NULL;
        
        //Consume \n
        fscanf(input_file, "%*c");
        
        //Insert in node
        insertInList (list_head_ptr, newNodePtr);
    }
    
    //Free memory
    free(str);
    str = NULL;
    
    return numNodes;
}
