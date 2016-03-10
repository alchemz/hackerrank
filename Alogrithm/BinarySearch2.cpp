#include <iostream.h>
#include <conio.h>

void main()
{
   int arr[100], beg, mid, end, i, n, num;
   cout<<"Enter the size of an array";
   cin>>n;
   cout<<"Enter the values in sorted order\n";
   for(int i=0; i<n; i++)
   {
      cin>>arr[i];
   }
   
   //initialize beg and end
   beg=0;
   end=n-1;
   cout<<"Enter the value to be searched: ";
   cin>>num;
   
   //run loop
   while(beg<=end)
   {
     mid=(beg+end)/2;
     if(arr[mid]==num)
     {
      cout<<"\nFound"<<(mid+1);
      exit(0);
     }
     
     if(num>arr[mid])
     beg=mid+1;
     else
     end=mid+1;
     }
    cout<<"Not found";
    getch();

}
//http://www.cprogrammingcode.com/2011/08/cc-program-for-binary-search.html
