#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int rocks;
    scanf("%d", &rocks);
    char letter[26] = {0};
    int count = 0;
    for (int r = 0; r < rocks; r++) {
        char s[100];
        scanf("%s", s);
        for (int i = 0; i < strlen(s); i++) {
            char c = s[i];
            if (letter[c - 'a'] == r) {
                letter[c - 'a']++;
                if (letter[c - 'a'] == rocks) {
                    count++;
                }                    
            }
        }
    }

    printf("%d", count);

    return 0;
}
