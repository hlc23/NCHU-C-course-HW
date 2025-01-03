# Assignment5: Merging Binary Files and Sorting
## [Problem link: Github](https://github.com/mcps5601/C-course-materials/blob/main/assignments/assignment5.md)

## Variable Explanation
- `filename1`, `filename2`, `output`: the filenames of the two input files and the output file.
- `numbers1`, `numbers2`: the two arrays to store the numbers read from the two input files.
- `size1`, `size2`: the size of the two arrays.
- `merge`: the array to store the merged numbers.
- `readFile1`, `readFile2`, `outputFile`: the file pointers for the two input files and the output file.

## Flow & Code explanation
1. Read the two input files and check if they are opened successfully by return value of `fread`.
2. After read the two files, close them.
3. Merge the two arrays and sort the merged array.
4. Write the sorted array to the output file.

More details can be found in the comments in the code.
