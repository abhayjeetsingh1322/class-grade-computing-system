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

void printByName(Node *list_head, char **categorys) 
{
    //Getting name 
    char *name = malloc (40 * sizeof(char));
    if (name == NULL)
    {
        fprintf(stderr, "%s", "Unable to allocate memory.");
        exit(EXIT_FAILURE);
    }
    printf("Enter the Student's Last Name: ");
    scanf("%39s", name);
    printf("Hunting for %s\n", name);
    
    //Creating a traverse pointer
    Node *traversePtr = list_head;
    
    //Variable to store occurences
    int occurs = 0;
    
    //Looping to find number of occurences
    while (traversePtr != NULL)
    {
        if(strstr(traversePtr->Student.student_name, name) != NULL)
        {
            occurs++;
        }
        traversePtr = traversePtr->next;
    }
    
    //Output based on occurences
    if(occurs == 0)
    {
        printf("No student by that name is found.\n\n");
    }
    else if (occurs == 1)
    {
        printf("One student by that name is found.\n\n");
        
        //Reset traverse pointer
        traversePtr = list_head;
        while(strstr(traversePtr->Student.student_name, name) == NULL)
        {
            traversePtr = traversePtr->next;
        }
        
        //Printing student information
        printHeaders(categorys);
        printStudentInfo(traversePtr);
    }
    else if (occurs > 1)
    {
        printf("More than one student by that name.\n");
        
        //Allocating space based on occurences
        Node **allNames = malloc (occurs * sizeof(struct Node));
        if (allNames == NULL)
        {
            fprintf(stderr, "%s", "Unable to allocate memory.");
            exit(EXIT_FAILURE);
        }
        
        //Reseting traverse pointer 
        traversePtr = list_head;
        
        //Looping until all occurences are found
        int i = 0;
        while(i < occurs)
        {
            //If name is found, print & assign to array of all names, incrememt i
            if(strstr(traversePtr->Student.student_name, name) != NULL)
            {
                printf("%d) %s\n", (i+1), traversePtr->Student.student_name);
                *(allNames + i) = traversePtr;
                i++;
            }
            traversePtr = traversePtr->next;
        }
        
        //Prompt
        printf("Please indicate which student you want: ");
        scanf("%d", &i);
        traversePtr = *(allNames + i - 1);
        
        //Printing student information
        printf("\n");
        printHeaders(categorys);
        printStudentInfo(traversePtr);
        
        //Free memory
        free(allNames);
        allNames = NULL;
    }
    
    //Free memory
    free(name);
    name = NULL;
}
