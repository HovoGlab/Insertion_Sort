#include <iostream>
using namespace std;

int main ()
{
   int arr[]={2,5,7,-2,1,25,69,4,-9};
   int j = 1;
   int size = sizeof(arr)/sizeof(arr[0]);
   for(int i = 1;i<size;i++)
   {
       if(arr[i]<arr[i-1])
       {
           while(arr[j]<arr[j-1]&&j!=0)
           {
               int tmp = arr[j];
               arr[j] = arr[j-1];
               arr[j-1] = tmp;
               j--;
           }
           j=i;
       }
       j++;
   }
   for(int i = 0;i < size;i++)
   {
       cout << arr[i] <<" ";
   }    

}
