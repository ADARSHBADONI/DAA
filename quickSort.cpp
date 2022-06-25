#include<iostream>
using namespace std;

int findRange(int a[],int n){
  int max=a[0];
  for(int i=1;i<n;i++){
  if(max<a[i]){
   max=a[i];
   }
   }
   return max;
   }
void countSort(int a[],int n){
  int max=findRange(a,n);
   int b[n];
  int count[max];
   for(int i=0;i<=max;i++){                        //for initializing every count array index 0
   count[i]=0;
   }
    for(int i=0;i<n;i++){                         //for counting frequency of array elements
    count[a[i]]++;
    }
    for(int i=1;i<=max;i++){                      //for updating count array..(for index)
    count[i]=count[i]+count[i-1];
    }
   for(int i=n-1;i>=0;i--){                      //storing the sorted array in temp..array..
   b[--count[a[i]]]=a[i];
   }
   for(int i=0;i<n;i++){                         //for changing the orignal array with the sorted array i.e b[n]
   a[i]=b[i];
   }
 }

void printArray(int a[],int n){
 for(int i=0;i<n;i++){
 cout<<a[i]<<"  ";
 }
 }
 
int main(){
  int a[]={12,5,10,15,17,30};
  int n=sizeof(a)/sizeof(a[0]);
  countSort(a,n);
  printArray(a,n);
}
