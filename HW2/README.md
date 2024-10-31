# Assignment2: Addition and Subtraction for Large Integers
## [Problem link: Github](https://github.com/mcps5601/C-course-materials/blob/main/assignments/assignment2.md)

## Variable Explanation
- `n1`: array of large integer 1
- `n2`: array of large integer 2
- `oper`: operator

## Flow
1. Read `oper`
2. Read `n1`, `n2` by "%1d" and store in array.
2. If oper is 0, do add
    1. Add from the end of the array
    2. If the sum is greater than 9, carry 1 to the next digit
3. else oper is 1, do subtract
    1. Subtract from the end of the array
    2. If the subtraction is negative, borrow 1 from the next digit and add 10 to the current digit
4. Print the result

## Code explanation
See the comments in the code.
