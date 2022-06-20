#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int key){
   int l=0,r=n-1,mid=l+r/1;
   while(l<=r){
     if (a[mid]==key)
     return mid;
     
     if (a[mid]<key)
     return mid+1;
     
     else
     return mid-1;
     }
     return -1;
}
int main(){
   int n;
   cout<<"enter total no of element:";
   cin>>n;
   int a[n];
   cout<<"enter elements of array:";
   for(int i=0;i<n;i++){
   cin>>a[i];}
   int key;
   cout<<"enter the element you want to search";
   cin>>key;
  int loc=-1;
  loc=binarySearch(a,n,key);
  if(loc>=0){
    cout<<"element found at:"<<loc;
   }
   else 
   cout<<"element not found";
   }
