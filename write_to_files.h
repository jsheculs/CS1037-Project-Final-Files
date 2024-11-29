/*****************************************************************************
**
* Filename: write_to_files.h
* Author: Julia Sheculski
* Student ID: 251330607
* Version: 3
* Date Created: 2024/11/27
* Last Modified: 2024/11/28
*
* Description:
* This purpose of this file is to define the function headers for the write_to_files.c file
*
* Dependencies:
*
*
* Compilation:
*  gcc compress_and_decompress.c priority_queue.c write_to_files.c ptest.c -o 1
* ./1 <FileName.txt> <CompressedFileName.huf>
*****************************************************************************/

#ifndef JSHECULS_H
#define JSHECULS_h

void writeCompressedToFile(const char *filename, const char *compressedData);//function to write the compressed string to a .huf type file
void writeDecompressedToFile(const char *filename, const char *decompressedData);//function to write the decompressed string to a .txt file

#endif
