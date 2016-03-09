#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    char str[100001];

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int deletions = 0;
        char *follower = str;
        char *leader = str + 1;
        scanf("%s", str);
        while (*leader) {
            deletions += !(*follower++ ^ (*leader++));
        }
        printf("%d\n", deletions);        
    }
    return 0;
}
