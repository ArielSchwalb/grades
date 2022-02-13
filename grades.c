#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    /* Variable declarations */
    /* --------------------- */
    int numberOfGrades, i, grade;
    int gradeTotal = 0;
    int failureCount = 0;
    float average;

    /* Ask for user input to find out how many grade the user wants. */
    /* ------------------------------------------------------------- */
    printf("How many grades will you be entering? ");
    scanf("%i", &numberOfGrades);

    /* Do a for loop to add the grades together in the grade total. */
    /* ------------------------------------------------------------ */

    for (i = 1; i <= numberOfGrades; ++i)
    {
        printf("Enter grade #%i: ", i);
        scanf("%i", &grade);

        gradeTotal = gradeTotal + grade;

        if (grade < 65)
            ++failureCount;
    }

    /* Calculate the grade average. */
    /* ---------------------------- */

    average = (float) gradeTotal / numberOfGrades;

    /* Print the grade average and the number of failing grades. */
    /* --------------------------------------------------------- */

    printf("\nGrade average = %.2f\n", average);

    printf("\nNumber of failures = %i\n", failureCount);

    return 0;

}
