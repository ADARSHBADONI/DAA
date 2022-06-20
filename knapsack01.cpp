//knapsack 0-1 problem.
#include<iostream>

using namespace std;
int knapsack(int ,int profit[],int weight[],int n){
  if(n==0||W==0)
  return 0;
  if(W<weight[n-1])
  return knapsack(W,profit,weight,n-1);
    int lprofit=profit[n-1]+knapsack(W-weight[n-1],profit,weight,n-1);
    int rprofit=knapsack(W,profit,weight,n-1);
    
    return max(lprofit,rprofit);    
}
int main(){
  int n;
  cout<<"enter no of items:";
  cin>>n;
  int profit[n],weight[n];
  cout<<"enter profit:"<<endl;
  for(int i=0;i<n;i++){
    cin>>profit[i];
    }
    
   cout<<"enter weight:"<<endl;
  for(int i=0;i<n;i++){
    cin>>weight[i];
    }
    int  W;
    cout<<"enter knapsack capacity:";
    cin>>W;
    cout<<"maximum profit:"<<knapsack(W,profit,weight,n);
    }
