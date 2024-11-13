# Assignment3: Find intersection of two 1D arrays
## [Problem link: Github](https://github.com/mcps5601/C-course-materials/blob/main/assignments/assignment3.md)

## Variable Explanation
### `main` function:
- `n1, n2`: the size of the two arrays.
- `arr1, arr2, result, count`: arrays for store data.
- `ar1p, ar2p, resp, coup`: pointers for the arrays to satisfy the **Requirements 2**.

### `find_intersection_with_count` function:
- `c`: the count of the intersection.

### global variables: 
- `i, j, k`: loop variables.

## Flow
1. Read the two arrays and store them in `arr1` and `arr2`.
2. walk through the two arrays and find the intersection.
3. if a number in the intersection is found, increment the count.
4. if a number isn't in the intersection, record it in the `result` and `count` array.
5. after process a number in the intersection, mark it as `-1` in`arr2` to avoid duplicate counting.
6. print the result and the count.
### Bonus
sort the count array and do swap to result at the same time.

## Code explanation
See the comments in the code.
