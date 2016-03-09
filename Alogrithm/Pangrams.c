#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    while (scanf("%s", &s[strlen(s)]) == 1);
    char big[26] = {0};
    char small[26] = {0};
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            small[s[i] - 'a'] = 1;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            big[s[i] - 'A'] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (!(big[i] == 1 || small[i] == 1)) {
            printf("not pangram");
            return 0;
        }
    }

    printf("pangram");

    return 0;
}
