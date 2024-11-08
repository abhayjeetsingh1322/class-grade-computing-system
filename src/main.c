/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF 
THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

/*Author: Abhayjeet Singh*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

int main(int argc, char **argv)
{
    //Check if both files are provided
    if (argc > 2) {
        
        //List head 
        Node *list_head = NULL;
        
        //Open input file
        FILE *input_file = fopen(*(argv + 1), "r");
        if (input_file == NULL)
        {
            fprintf(stderr, "%s", "Unable to open input file.");
            exit(EXIT_FAILURE);
        }
        
        //Allocate space for categorys
        char **categorys = malloc(4 * sizeof(char *));
        if (categorys == NULL)
        {
            fprintf(stderr, "%s", "Unable to allocate memory.");
            exit(EXIT_FAILURE);
        }
        
        //Get categorys
        for (int i = 0; i < 4; i++)
        {
            *(categorys + i) = malloc(256 * sizeof(char));
            if (*(categorys + i) == NULL)
            {
                fprintf(stderr, "%s", "Unable to allocate memory.");
                exit(EXIT_FAILURE);
            }
            fscanf(input_file, "%255s", *(categorys + i));
        }
        
        //Consume \n
        fscanf(input_file, "%*c");
        
        printf("Reading student information from file \"%s\"\n", *(argv + 1));
        
        //Fill nodes with student data
        int numNodes = createAndFillNodes(&list_head, input_file);
        
        printf("A total of %d student records were read from the file %s\n", numNodes,*(argv + 1));
        
        //Close input file
        if (fclose(input_file) == EOF) 
        {
            fprintf(stderr, "%s", "Unable to close file.");
            exit(EXIT_FAILURE);
        }
        
        
        //Array of funtion pointers 1 to 7
        void (*funPtr[7]) (Node *, char **) = {printById, printByName, printList,
        recalById, recalAll, insertScoreById, setFinalGrades};
        
        int option = 0;
        
        //Looping until user exits program
        while (option != 10) 
        {
            //Prompt 
            printf("\nPlease enter an option between 1 and 10:\n");
            printf("1) Print Student Scores by Student ID\n");
            printf("2) Print Student Scores by Last Name\n");
            printf("3) Print Student Scores for All students\n");
            printf("4) Recalculate Student Scores for a single Student ID\n");
            printf("5) Recalculate All Student Scores\n");
            printf("6) Insert a score for a specific Student ID\n");
            printf("7) Calculate Final Grades\n");
            printf("8) Add a new student\n");
            printf("9) Delete a student\n");
            printf("10) Exit Program\n\n");
            printf("Option: ");
            scanf("%d", &option);
            scanf("%*c");
            printf("\n");
            
            //Switch cases 1 to 7 fall, 8 to 10 options
            switch (option)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                    funPtr[option-1](list_head, categorys);
                    break;
                case 8:
                    addNewStudent (&list_head, categorys);
                    break;
                case 9:
                    deleteStudentById(&list_head);
                    break;
                case 10:
                    saveAndExit (list_head, categorys, *(argv +2));
                    break;
                default:
                    printf("Not a valid option.\n");
                    break;
            }
        }
    }
    //Tell command lines arguments not provided
    else 
    {
	printf("No command line arguments provided.\n"); 
    }
	

    return 0;
}
