#include<stdio.h>

int main(){
    char s[1005], t[1005];
    
    // read input
    scanf("%s", &t);
    scanf("%s", &s);

    // two variables to store the index of s and t.
    int sp = 0, tp = 0;


    while (t[tp] != '\0' && s[sp] != t[tp]){ 
        // because size of t always smaller or equal to s
        // so only need to check if t[tp] is end or not until find the first same character.
        sp++; tp++;
    }

    if (t[tp] == '\0'){
        // if t[tp] is end, then it means there is no same character in s and t.
        printf("0");
        return 0;
    }

    // if program reach here, it means there is at least one same character in s and t.
    // now we need to check if the rest of t is in s or not.
    // there will be two cases:
    // 1. if the t isn't in s, then while finding rest t in s, the s will reach end first.
    // 2. if the t is in s, each time find a match char in s, the tp will add 1 which means the next char.
    // And whatever the t[tp] == s[sp] or not, the sp should add 1, it means we are going to check for next char in s. 
    while (t[tp] != '\0' && s[sp] != '\0'){
        if (t[tp] == s[sp]){ // we find a match char ! that's move to next one.
            tp++;
        }
        sp++; // move to next char in s.
    }

    // now we have checked all the char in s, if tp is end, then it means the t is in s.
    if (t[tp] == '\0') printf("1");
    else printf("0");

    return 0;
}