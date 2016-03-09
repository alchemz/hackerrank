#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   int size;
   int num;
  
  cin>>size;
  int arr[size];
  
  for(int i=0; i<size; i++){
      cin>>num;
      arr[i]=num;
  }
  
  for(int j=size-1; j>=0; j--){
     cout<<arr[j]<<" ";
  }
  
  return 0;

}
