#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    string arr[9]={"one", "two", "three", "four", "five","six", "seven", "eight","nine"};
    
    for(int i=a; i<=b; i++){
       if(i<=9){
         cout<<arr[i-1]<<endl;
       }else{
          if(i%2==0){
             cout<<"even"<<endl;
          }else{
            cout<<"odd"<<endl;
          }
       }
    }
  return 0;
}
