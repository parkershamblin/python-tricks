/*
https://youtu.be/7eeEf_rAJds?t=1101

Equivalent Python implementation compared vs C implementation.

Pros:
- much simplier
- easier to read
- more correct
- less likely to crash

Cons:
- much slower
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    /* File pointer to hold reference to our file */
    FILE* fPtr;

    char ch;


    /*
     * Open file in r (read) mode.
     * "data/file1.txt" is complete file path to read
     */
    fPtr = fopen("randomly-generated-numbers.txt", "r");


    /* fopen() return NULL if last operation was unsuccessful */
    if (fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }


    /* File open success message */
    printf("File opened successfully. Reading file contents character by character. \n");

    do
    {
        /* Read single character from file */
        ch = fgetc(fPtr);

        /* Print character read on console */
        putchar(ch);

    } while (ch != EOF); /* Repeat this if last read character is not EOF */


    /* Done with this file, close file to release resource */
    fclose(fPtr);


    return 0;
}