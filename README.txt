CS1037A_Project
Team Name: Team JAC
Team Members:
Cameron Brewster ()
Amelia Korble ()
Julia Sheculski (251330607)

This project compresses .txt files into .huf files using Huffman coding compression techniques. Its purpose is to reduce the size of files by producing a Huffman code made of 0s and 1s. The Huffman code is then decoded to verify the success of the encoding functions. The compressed code is displayed in a .huf file, and the decompressed code is displayed in a .txt file. The frequency table and huffman codes of each character are displayed in the terminal.

Our project is split into four .c files:
 - priority_queue.c is responsible for reading the desired file indicated by the execution command received from the terminal. It counts the frequencies of each character and uses this information to build a priority queue where characters with the lowest frequencies are dequeued first.
 - compress_and_decompress.c is mainly responsible for the compression of text data into a huffman code, and the decompression of a huffman code into text data. This is file features the building of the Huffman tree based on the priority queue.
 - write_to_files.c is responsible for writing the compressed data to a .huf type file named based on the execution command received from the terminal, and writing the decompressed data to a .txt type file called decompressed.txt.
 - ptest.c contains the main function that combines the previous three files. The main function receives argc and argv from the command line which correlate to the name of the file that the user wants to compress, and the desired name of the output file where the compressed data will be written.

 Build Instructions:
  - Insert or write test files into project file
  - Compile: gcc compress_and_decompress.c priority_queue.c write_to_files.c ptest.c -o <test name>
  - Run command: ./<test name> <FileName.txt> <CompressedFileName.huf>, where FileName is the name of the file the user would like to compress and CompressedFileName is the name fo the file the user wants the compressed data to be written to

  Additional Notes:
  - In the file compress_and_decompress, the getCode function was incorrectly traversing the Huffman tree, which previously resulted in a 0 being appended for a right branch and a 1 being appended for a left branch. This occurred even though our code specified to append 0 for left and 1 for right. As a result, when the desired output was 001100 for example, our program outputted 110011. To address this issue, we changed the getCodes function to append a 1 for a left branch and a 0 for a right branch. We also changed the decompressed function according to these changes. We are aware that this is opposite what should be appended based on Huffman encoding, but were forced to make this change to produce the desired output.
