#include <stdio.h>
#include <stdlib.h>
using namespace std;

void update(int *a, int *b){
int c;
c=*a+*b;
int d;
d=abs(*a-*b);
*a=c;
*b=d;
}

int main(){
  int a, b;
  int *pa=&a, *pb=&b;
  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a,b);
  
  return 0;

}
