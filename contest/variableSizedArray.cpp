/**
Find the value of element described in each query
For the first query, the sequence is [1, 5, 4]. Hence the answer is 5;
For the second query, the sequence is [1,2, 8, 9,3]. Hence the answer is 9;
**/

#include <iostream>
using namespace std;

int main(){
  int n, q;
  cin>>n>>q;
  int ** seq=new int* [n];
  for(int i=0; i<n; i++){
      int a;
      cin>>a;
      int* b=new int[a];
      for(int j=0; j<a; j++){
         int e;
         cin>>e;
         b[j]=e;
      }
      *(seq +i)=b;
  }
  
  for(int i=0; i<q; i++){
    int r, s;
    cin>>r>>s;
    cout<<seq[r][s]<<endl;
  }
  

  return 0;
}
