#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int t;
scanf("%d", &t);
while (t--) {
    char s[10000];
    scanf("%s", s);
    int len = strlen(s);
    if (len % 2 == 1) {
        printf("-1\n");
        continue;
    }

    int letter[26] = {0};
    int count = 0;
    for (int i = 0; i < len/2; i++) {
        char c = s[i];
        letter[c - 'a']++;
    }
    for (int i = len/2; i < len; i++) {
        char c = s[i];
        letter[c - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
       count += abs(letter[i]);
    }

    printf("%d\n", count/2);
}
return 0;
}
