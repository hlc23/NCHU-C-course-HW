#include<stdio.h>

// global variables for loop use
int i, j, k;

void find_intersection_with_count(int *arr1, int n1, int *arr2, int n2, int *result, int *count){
    int c = 0;
    // walk through two arrays
    for (i = 0; i < n1; i++){
        for (j = 0; j < n2; j++){
            if (*(arr1+i) == *(arr2+j)){
                // search in the result to know if this number has been recorded or not
                for (k = 0; k <= c; k++){
                    // if this number has been recorded, increase the count
                    if (*(arr1+i) == *(result+k)){
                        (*(count+k))++;
                        break;
                    }
                    // if this number hasn't been recorded, record it in result
                    if (*(result+k) == 0){
                        *(result+k) = *(arr1+i);
                        (*(count+k))++;
                        c++;
                        break;
                    }
                }
                // remove the number which has already been counted to avoid repetition
                *(arr2 + j) = -1;
            }
        }
    }
}

int main(){
    int n1, n2;
    int arr1[15], arr2[15], result[15] = {0}, count[15] = {0};
    int* ar1p = arr1, *ar2p = arr2, *resp = result, *coup = count;
    
    // input
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
        scanf("%d", ar1p + i);
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
        scanf("%d", ar2p + i);

    // process
    find_intersection_with_count(ar1p, n1, ar2p, n2, resp, coup);

    // output
    // check if there is no intersection
    if (*resp == 0) printf("-1");
    else {
        // otherwise print the intersection and count until end (the result)
        do{
            printf("%d (%d) ", *resp++, *coup++);
        } while (*resp != 0);
        
        // bonus part: print the result sorted in descending order
        printf("\nbonus part:\n");

        // reset the pointers to the start of arrays
        resp = result;
        coup = count;

        // walk through array
        while (*resp != 0){
            // if current count is smaller than next, swap them and result
            if (*coup < *(coup+1) && *(coup+1) != 0){
                // swap by binary operation
                *(coup) ^= *(coup+1);
                *(coup+1) ^= *(coup);
                *(coup) ^= *(coup+1);
                *(resp) ^= *(resp+1);
                *(resp+1) ^= *(resp);
                *(resp) ^= *(resp+1);

                // reset the pointers to the start of arrays
                resp = result;
                coup = count;
                continue;
            }
            // 
            resp++;
            coup++;
        }
        
        // reset the pointers to the start of arrays and print the result
        resp = result;
        coup = count;
        do{
            printf("%d (%d) ", *resp++, *coup++);
        } while (*resp != 0);
    
    }

    return 0;
}