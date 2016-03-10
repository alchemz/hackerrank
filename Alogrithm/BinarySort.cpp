#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int binarySearch(int haystack[], int length, int needle) {
   
    int first = 0;
    int last = length - 1;
    int middle = last / 2;
   
    while( first <= last ) {
       
        if( haystack[middle] < needle ) {
           
            first = middle + 1;
           
        } else if ( haystack[middle] == needle ) {
           
            return middle;
           
        } else {
           
            last = middle - 1;
           
        }
       
        middle = (first+last) / 2;
       
    }
   
    return 0;
   
}
 
int main() {
 
    int search;
    int i, n;
    int index;
    int array[1000];
    char str[1000];
   
    scanf("%d", &search);
    scanf("%d", &n);
   
    getchar(); // clean the buffer
   
    fgets(str, sizeof str, stdin);
 
    char *s = str, *endp;
   
    for( i=0; i<n; i++ ) {
       
        array[i] = strtof(s, &endp);
        s = endp;
       
    }
   
    index = binarySearch(array, n, search);
   
    printf("%d", index);
   
    return 0;
}
