#include <iostream>
using namespace std;

int main(){
   int size;
   cin>>size;
   int arr[n][n];
   long long int sum1=0, sum2=0, diff;
   
   for(int i=0; i<size; i++){
     for(int j=0; j<size; j++){
         cin>>a[i][j];
         if(i==j)
         sum1+=a[i][j];
         if(i+j==n-1)
         sum2+=a[i][j]
     }
   }
  
  cout<<abs(sum1-sum2)<<endl;

}
