#include<stdio.h>

int n1[10], n2[10];

void add(){
    for (int i=9; i>=0; i--){
        n1[i] += n2[i];
        if (n1[i] >= 10){
            n1[i-1] += n1[i] / 10; // the output always be 10 digits so i-1 wont be -1
            n1[i] %= 10;
        }
    }
}

void sub(){
    for (int i=9; i>=0; i--){
        // borrow
        int shift = 0;
        while (n1[i+shift] < n2[i+shift]){
            n1[i+shift] += 9; // add 9 for every borrow
            shift--;
        }
        if (shift != 0){
            n1[i]++; // add 1 to the current digit
            n1[i+shift]--;
        };

        // sub
        n1[i] -= n2[i];
    }
}

int main(){
    // input
    int oper;
    scanf("%d", &oper);
    for (int i=0; i<10; i++)
        scanf("%1d", &n1[i]);
    for (int i=0; i<10; i++)
        scanf("%1d", &n2[i]);

    // process
    if (oper == 0) add();
    else sub();

    // output
    for (int i=0; i<10; i++) printf("%d", n1[i]);
    return 0;
}
