#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Requirement 2:
// The program should merge the integers from file1.bin and file2.bin.
void sort(int arr[], int size){
    int i;
    for (i=0; i<size-1; i++){
        // Requirement 3:
        // The program should contain a function to sort the integers in an ascending order.
        if (arr[i] > arr[i+1]) {
            arr[i+1] ^= arr[i];
            arr[i] ^= arr[i+1];
            arr[i+1] ^= arr[i];
            i=-1;
        }
    }
}

int main(void) {
    // define file names
    const char *filename1 = "file1.bin";
    const char *filename2 = "file2.bin";
    const char *output = "sorted_output.bin";

    int numbers1[MAX];
    int numbers2[MAX];
    int size1, size2, i;

    // Requirement 1: 
    // The program should read the content of file1.bin and file2.bin.
    FILE *readFile1 = fopen(filename1, "rb");
    FILE *readFile2 = fopen(filename2, "rb");
    size1 = fread(numbers1, sizeof(int), MAX, readFile1);
    size2 = fread(numbers2, sizeof(int), MAX, readFile2);

    // Requirement 5:
    // The program should check if the files are opened successfully.
    if (size1 <= 0 || size2 <= 0) return -1;

    // Requirement 6:
    // The program should contain lines for closing the files.
    fclose(readFile1);
    fclose(readFile2);

    // merge two binary content
    int merge[MAX*2];
    for (i=0; i<size1; i++){
        merge[i] = numbers1[i];
    }
    for (i=0; i<size2; i++){
        merge[size1+i] = numbers2[i];
    }

    sort(merge, size1+size2);

    // Requirement 4 & 5:
    // The program should write the sorted integers to a new binary file, sorted_output.bin.
    // The program should check if the files are opened successfully.
    FILE *outputFile = fopen(output, "wb");
    fwrite(merge, sizeof(merge[0]), sizeof(merge)/sizeof(merge[0]), outputFile);
    fclose(outputFile);
}