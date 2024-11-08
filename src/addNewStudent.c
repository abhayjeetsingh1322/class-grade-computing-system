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

void addNewStudent (Node **list_head_ptr, char **categorys)
{
    //Create a structure for node
    Node *newNodePtr = malloc(sizeof(struct Node));
    if (newNodePtr == NULL)
    {
        fprintf(stderr, "%s", "Unable to allocate memory.");
        exit(EXIT_FAILURE);
    }
    
    //Allocate space of name
    char *str = malloc(40 * sizeof(char));
    if (str == NULL)
    {
        fprintf(stderr, "%s", "Unable to allocate memory.");
        exit(EXIT_FAILURE);
    }
    
    //Fill in data
    printf("Enter the Student's Name: ");
    scanf("%39[^\n]", str);
    strcpy(newNodePtr->Student.student_name, str);
    
    printf("Enter the Student's ID: ");
    scanf("%d", &(newNodePtr->Student.student_ID));
    Node *checkID = studentFindById(*list_head_ptr, newNodePtr->Student.student_ID);
    while (checkID != NULL)
    {
        printf("Student ID Number entered was a duplicate.\n");
        printf("Enter the Student's ID: ");
        scanf("%d", &(newNodePtr->Student.student_ID));
        checkID = studentFindById(*list_head_ptr, newNodePtr->Student.student_ID);
    }
    
    printf("Enter first %s score (use -1 if there is no score): ", *categorys);
    scanf("%f", &(newNodePtr->Student.Cat1.score1));
    printf("Enter second %s score (use -1 if there is no score): ", *categorys);
    scanf("%f", &(newNodePtr->Student.Cat1.score2));
    printf("Enter third %s score (use -1 if there is no score): ", *categorys);
    scanf("%f", &(newNodePtr->Student.Cat1.score3));
    
    printf("Enter first %s score (use -1 if there is no score): ", *(categorys + 1));
    scanf("%f", &(newNodePtr->Student.Cat2.score1));
    printf("Enter second %s score (use -1 if there is no score): ", *(categorys + 1));
    scanf("%f", &(newNodePtr->Student.Cat2.score2));
    printf("Enter third %s score (use -1 if there is no score): ", *(categorys + 1));
    scanf("%f", &(newNodePtr->Student.Cat2.score3));

    printf("Enter first %s score (use -1 if there is no score): ", *(categorys + 2));
    scanf("%f", &(newNodePtr->Student.Cat3.score1));
    printf("Enter second %s score (use -1 if there is no score): ", *(categorys + 2));
    scanf("%f", &(newNodePtr->Student.Cat3.score2));
    printf("Enter third %s score (use -1 if there is no score): ", *(categorys + 2));
    scanf("%f", &(newNodePtr->Student.Cat3.score3));

    printf("Enter first %s score (use -1 if there is no score): ", *(categorys + 3));
    scanf("%f", &(newNodePtr->Student.Cat4.score1));
    printf("Enter second %s score (use -1 if there is no score): ", *(categorys + 3));
    scanf("%f", &(newNodePtr->Student.Cat4.score2));
    printf("Enter third %s score (use -1 if there is no score): ", *(categorys + 3));
    scanf("%f", &(newNodePtr->Student.Cat4.score3));

    setAllCum(newNodePtr);
    setCurrentGrade(newNodePtr);
    newNodePtr->Student.Final_Grade = -1;
    
    newNodePtr->next = NULL;
    
    //Insert in node
    insertInList (list_head_ptr, newNodePtr);
    
    //Print information
    printf("\n%s, Student ID# %d has been added with the following information:\n\n"
    , newNodePtr->Student.student_name, newNodePtr->Student.student_ID);
    printHeaders(categorys);
    printStudentInfo(newNodePtr);
}

