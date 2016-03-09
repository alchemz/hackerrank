#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> v(n);
 float pos=0, neg=0, zer=0;
  for(int i=0;i<n;i++)
  {
     cin>>v[i];
     if(v[i]==0)
       zer++;
     if(v[i]<0)
     neg++;
     if(v[i]>0)
     pos++;
  }
  
  cin>>pos>>neg>>zer;
  
  pos=pos/(float)n;
  neg=neg/(float)n;
  zer=zer/(float)n;
  cout<<pos<<endl<<neg<<endl<<zer;
  
  return 0;
}
