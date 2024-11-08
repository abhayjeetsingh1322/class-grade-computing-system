#BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
#THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
#THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
#INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
#TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.

# Define the compiler and flags
CC=gcc
CFLAGS=-std=c99 -pedantic -g

# Object files for all functions and main program
OBJS=main.o createAndFillNodes.o setAllCum.o calCumGrade.o setCurrentGrade.o \
cumulativeGradeReturner.o insertInList.o printById.o studentFindById.o \
printHeaders.o printStudentInfo.o printCategoryGrade.o printCumGrade.o \
printFinalGrade.o printByName.o printList.o recalById.o recalAll.o \
insertScoreById.o resetIndividualCatGrade.o resetScoreOfCat1Grade.o \
resetScoreOfCat2Grade.o resetScoreOfCat3Grade.o resetScoreOfCat4Grade.o \
setFinalGrades.o finalGradeReturner.o addNewStudent.o deleteStudentById.o \
deleteFromList.o saveAndExit.o writeToDisk.o freeList.o

# The final executable target
TARGET=lab4

# The default make target
all: $(TARGET)

# Linking the executable from object files
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Compiling each source file to an object file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Running the program with two command-line arguements
run: $(TARGET)
	./$(TARGET) class_records class_records_new

# Creating a zip file with all .c files, Makefile, LAB4README, class_records, lab4.h
zip:
	zip lab4.zip *.c Makefile LAB4README class_records lab4.h

# Cleaning up all build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

#Appendix (Reference Material): 
#https://www.youtube.com/watch?v=_r7i5X0rXJk&t=168s
#StackOverflow
