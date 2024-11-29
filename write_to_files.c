/*****************************************************************************
**
* Filename: write_to_files.c
* Author: Julia Sheculski
* Student ID: 251330607
* Version: 3
* Date Created: 2024/11/27
* Last Modified: 2024/11/29
*
* Description:
* This purpose of this file is write the compressed or decompressed data to the specified file. Both functions open the specified file in write mode, write the given data to the file, then close the file.
*
* Dependencies:
* - stdio.h
* - stdlib.h
*
* Compilation:
*  gcc compress_and_decompress.c priority_queue.c write_to_files.c ptest.c -o 1
* ./1 <FileName.txt> <CompressedFileName.huf>
*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*****************************************************************************
**
* Function: writeCompressedToFile
*
* Purpose:
* The purpose of this function is to receive compressed data and write this to a .huf type file. The name of this file is determined by the command line "./1 <FileName.txt> <CompressedFileName.huf>".
*
* Parameters:
* filename (const char pointer) - the name of the compressed .huf file where the compressed data will be written
* compressedData (const char pointer) - string containing the compressed data that needs to be written to the file
*
* Returns:
* void - this function does not return a value, it simply writes the compressed data to a file
*
* Errors:
* - If the file cannot be opened the function prints an error message
*
* Notes:
* - This function will overwrite the existing .huf file if a file with the same name already exists.
* - The function prints a confirmation message to the terminal after successfully writing to the file.
*****************************************************************************/

void writeCompressedToFile(const char *filename, const char *compressedData) {
    FILE *file = fopen(filename, "w");//opening the file in write mode and assigning file pointer to 'file'

    //checking if the file could not be opened
    if (file == NULL) {
        fprintf(stderr, "Error: Unable to open file '%s' for writing\n", filename);//print an error message
        exit(1);//exit program indicating an error
    }

    fprintf(file, "%s", compressedData);//writing the compressed data string to opened file

    fclose(file);//closing the file

    printf("\nCompressed data successfully written to '%s'\n", filename);//printing success message to the terminal
}


/*****************************************************************************
**
* Function: writeDecompressedToFile
*
* Purpose:
*
*
* Parameters:
* filename (const char pointer) - the name of the output .txt file where the decompressed data will be written
* decompressedData (const char pointer) - string containing the decompressed data that needs to be written to the file
*
* Returns:
* void - this function does not return a value, it simply writes the decompressed data to a file
*
* Errors:
* - If the file cannot be opened the function prints an error message
*
* Notes:
* - This function will overwrite the existing .txt file if a file with the same name already exists.
* - The function prints a confirmation message to the terminal after successfully writing to the file.
*****************************************************************************/

void writeDecompressedToFile(const char *filename, const char *decompressedData) {
    FILE *file = fopen(filename, "w");//opening the file in write mode and assigning the file pointer to 'file'

    //checking if the file count not be opened
    if (file == NULL) {
        fprintf(stderr, "Error: Unable to open file '%s' for writing\n", filename);//print an error message
        exit(1);//exit program indicating error
    }

    fprintf(file, "%s", decompressedData);//writing the decompressed data string to opened file

    fclose(file);//closing the file

    printf("\nDecompressed data successfully written to '%s'\n", filename);//printing success message to terminal
}
