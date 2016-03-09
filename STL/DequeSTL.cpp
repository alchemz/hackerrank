#include <iostream>
#include <deque> 
using namespace std;
void updateDeque(deque<int> &dq, int k, int newNumber, bool keepSize=true) {
    int poppedCount = 0;
    int initialSize=dq.size();
    for(int i=0; i<k && i<initialSize; i++) {
        if(dq.back()<newNumber) {
            dq.pop_back();
            poppedCount++;
        } else {
            break;
        }
    }

    for(int i=0; i<poppedCount; i++)
        dq.push_back(newNumber);

    if(keepSize) {
        dq.pop_front();
    }
    dq.push_back(newNumber);
}

void printKMax(int arr[], int n, int k) {
    deque<int> dq;
    int maxNumber = INT_MIN;

    for(int i=0; i<k; i++) {
        updateDeque(dq, i+1, arr[i], false);
        maxNumber = max(maxNumber, arr[i]);
    }

    cout<<maxNumber<<" ";

    for(int i=k; i<n; i++) {
        updateDeque(dq, k, arr[i], true);
        maxNumber = dq.front();
        cout<<maxNumber<<" ";
    }
    cout<<endl;
}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
