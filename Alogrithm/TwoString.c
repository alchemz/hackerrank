#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--) {
        char str1[100001];
        char str2[100001];
        char *p;

        scanf("%s ", str1);
        scanf("%s ", str2);

        p = strpbrk(str1, str2);

        printf("%s\n", (p == NULL) ? "NO" : "YES");
    }


    return 0;
}
