#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char A[10000];
    char B[10000];

    scanf("%s", A);
    scanf("%s", B);

    int letterA[26] = {0};
    int letterB[26] = {0};

    for (int i = 0; i < strlen(A); i++) {
        char c = A[i];
        letterA[c - 'a']++;
    }

    for (int i = 0; i < strlen(B); i++) {
        char c = B[i];
        letterB[c - 'a']++;    
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        count += abs(letterB[i] - letterA[i]);
    }

    printf("%d", count);

    return 0;
}
