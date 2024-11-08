
/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF 
THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

/*Author: Abhayjeet Singh*/

//Library for FILE prototypes
#include <stdio.h>

//Node Data Structure (provided).
struct Cat_Grade{
    float score1;
    float score2;
    float score3;
    float Cumulative;
}; 
struct Data{
    char student_name[40];
    int student_ID;
    struct Cat_Grade Cat1;
    struct Cat_Grade Cat2;
    struct Cat_Grade Cat3;
    struct Cat_Grade Cat4;
    float Current_Grade;
    float Final_Grade;
};
typedef struct Node {
    struct Data Student;
    struct Node *next;
} Node;

/**
 * Reads from input file to create and populate `Node` structures.
 * @param list_head_ptr Pointer to list head pointer for node linkage.
 * @param input_file File pointer for the input file being read.
 * @return number of nodes created and filled
 */
int createAndFillNodes(Node **list_head_ptr, FILE *input_file);

/**
 * Updates node's cumulative grades based on current score values.
 * @param nodePtr Pointer to the node for updating cumulative grades.
 */
void setAllCum(Node *nodePtr);

/**
 * Calculates cumulative grade from three scores, handling special cases.
 * @param score1 First score, can be -1 to indicate not available.
 * @param score2 Second score, can be -1 to indicate not available.
 * @param score3 Third score, can be -1 to indicate not available.
 * @return Cumulative grade, or -1 if all input scores are -1.
 */
float calCumGrade(float score1, float score2, float score3);

/**
 * Calculates and sets current grade based on cumulative score weights.
 * @param nodePtr Node pointer for which current grade is set.
 */
void setCurrentGrade(Node *nodePtr);

/**
 * Returns 100 for a cumulative score of -1, otherwise returns score.
 * @param cum Input cumulative score to evaluate.
 * @return 100 if cum is -1; otherwise, returns the input score.
 */
float cumulativeGradeReturner(float cum);

/**
 * Inserts a new node in list ensuring student IDs are in order.
 * @param list_head_ptr Pointer to list's head pointer, might be modified.
 * @param newNodePtr Pointer to new node being inserted into the list.
 */
void insertInList(Node **list_head_ptr, Node *newNodePtr);

/**
 * Prints student information by ID or indicates if ID is not found.
 * @param list_head Pointer to the head of the student list.
 * @param categories Array of strings representing grade categories.
 */
void printById(Node *list_head, char **categories);

/**
 * Finds and returns node by ID, or NULL if student is not found.
 * @param list_head Head pointer of the list for the search.
 * @param id Student ID to search for within the list.
 * @return Node pointer if found, otherwise NULL.
 */
Node *studentFindById(Node *list_head, int id);

/**
 * Prints headers based on provided grade categories for organization.
 * @param categories Array of strings for grade category headers.
 */
void printHeaders(char **categories);

/**
 * Prints detailed info for a student, aligning with header categories.
 * @param nodePtr Pointer to the student node for info printing.
 */
void printStudentInfo(Node *nodePtr);

/**
 * Prints a category score, or "n/a" if score is -1 (not applicable).
 * @param score Score to print; -1 prints "n/a".
 */
void printCategoryGrade(float score);

/**
 * Prints cumulative grade, or "n/a" if it's -1 (not applicable).
 * @param cum Cumulative grade to be printed.
 */
void printCumGrade(float cum);

/**
 * Prints final grade, using "n/a" for -1, otherwise prints the score.
 * @param final The final grade value to be printed.
 */
void printFinalGrade(float final);

/**
 * Prints student info by name, handling duplicates with user choice.
 * @param list_head Head pointer of the list for searching by name.
 * @param categories Grade categories for structured information display.
 */
void printByName(Node *list_head, char **categories);

/**
 * Iterates and prints details for all students in the list as per categories.
 * @param list_head Head pointer to the beginning of the student list.
 * @param categories Grade categories for structured information display.
 */
void printList(Node *list_head, char **categories);

/**
 * Recalculates grades for a student by ID and prints updated grades.
 * @param list_head Pointer to the head of the list for student search.
 * @param categories Grade categories for structured information display.
 */
void recalById(Node *list_head, char **categories);

/**
 * Traverses list to recalculate, update, print grades for all students.
 * @param list_head Head pointer of the list for traversal.
 * @param categories Grade categories for structured information display.
 */
void recalAll(Node *list_head, char **categories);

/**
 * Prompts for student ID to update a score within chosen category, results 
 * printed at end.
 * @param list_head List's head pointer for student identification.
 * @param categories Grade categories for structured information display.
 */
void insertScoreById(Node *list_head, char **categories);

/**
 * Redirects to appropriate function based on category for score update.
 * @param nodePtr Node pointer for identifying student record.
 * @param cat Category index to direct specific score update.
 */
void resetIndividualCatGrade(Node *nodePtr, int cat);

/**
 * Updates a score in a specific category for student record modification.
 * @param traversePtr Pointer to the node being updated.
 * @param scoreCat Score category index for precise update location.
 * @param newScore New score value to replace the existing one.
 */
void resetScoreOfCat1Grade(Node *traversePtr, int scoreCat, float newScore);

/**
 * Updates a score in a specific category for student record modification.
 * @param traversePtr Pointer to the node being updated.
 * @param scoreCat Score category index for precise update location.
 * @param newScore New score value to replace the existing one.
 */
void resetScoreOfCat2Grade(Node *traversePtr, int scoreCat, float newScore);

/**
 * Updates a score in a specific category for student record modification.
 * @param traversePtr Pointer to the node being updated.
 * @param scoreCat Score category index for precise update location.
 * @param newScore New score value to replace the existing one.
 */
void resetScoreOfCat3Grade(Node *traversePtr, int scoreCat, float newScore);

/**
 * Updates a score in a specific category for student record modification.
 * @param traversePtr Pointer to the node being updated.
 * @param scoreCat Score category index for precise update location.
 * @param newScore New score value to replace the existing one.
 */
void resetScoreOfCat4Grade(Node *traversePtr, int scoreCat, float newScore);

/**
 * Calculates, sets, and prints final grades for the entire student list.
 * @param list_head Head pointer to the list for grade finalization.
 * @param categories Grade categories for detailed output formatting.
 */
void setFinalGrades(Node *list_head, char **categories);

/**
 * Evaluates cumulative score, returning 0 for -1, else returns score.
 * @param cum Cumulative grade for final grade determination.
 * @return 0 if cumulative grade is -1; otherwise, the cumulative score.
 */
float finalGradeReturner(float cum);

/**
 * Adds and prints a new student ensuring unique ID, prompting for grade input.
 * @param list_head_ptr Pointer to the list head pointer for additions.
 * @param categories Categories for grade output organization.
 */
void addNewStudent(Node **list_head_ptr, char **categories);

/**
 * Prompts for an ID and deletes corresponding student if found.
 * @param list_head_ptr Pointer to list's head pointer for deletion.
 */
void deleteStudentById(Node **list_head_ptr);

/**
 * Removes a node from a linked list. Traverses the list to find and 
 * remove the node specified by nodePtr, adjusting links to maintain the list.
 * 
 * @param list_head_ptr Pointer to the head of the list.
 * @param nodePtr Pointer to the node to be removed.
 */
void deleteFromList(Node **list_head_ptr, Node *nodePtr);

/**
 * Exits program after saving student records to file, freeing list memory,
 * and prints the count of records written.
 * 
 * @param list_head Head of the student records list.
 * @param categories Record categories.
 * @param outFileName Output file name.
 */
void saveAndExit(Node *list_head, char **categories, char *outFileName);

/**
 * Writes student list data to a file in a format reusable as input.
 * @param list_head Pointer to list head for data extraction.
 * @param categories Grade categories for structured file output.
 * @param outFileName Name of the file for writing the student data.
 * @returns number of student nodes written to file.
 */
int writeToDisk(Node *list_head, char **categories, char *outFileName);

/**
 * Frees the memory allocated for a linked list. Iterates over the list
 * starting from list_head, releasing the memory for each node.
 * 
 * @param list_head The head of the list to be freed.
 */
void freeList(Node *list_head);
