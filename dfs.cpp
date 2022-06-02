#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void addEdge(vector<int>adj[],int src,int des){
  adj[src].push_back(des);
  adj[des].push_back(src);
 }
void dfs(vector<int>adj[],vector<bool>&vis,int sv){
   stack<int>st;
   st.push(sv);
   vis[sv]=true;
   while(!st.empty()){
     int temp=st.top();
     st.pop();
     cout<<temp<<"  ";
     
     for(auto itr:adj[temp]){
       if(!vis[itr]){
       st.push(itr);
       vis[itr]=true;
       }
      }
    }
  }
int main(){
  int e,v;
  cout<<"enter the total number of vertices:";
  cin>>v;
  cout<<"enter total no of edges";
  cin>>e ;
  vector<int>adj[v];
  vector<bool>visited(v,false);
  cout<<"enter source to destination edges:"<<endl;
  for(int i=0;i<e;i++){
  int a,b;
  cin>>a>>b;
  addEdge(adj,a,b);
}
 int sv;
 cout<<"enter the starting vertex:";
 cin>>sv;
 for(int i=sv;i<v;i++){
 if(!visited[i]){
 dfs(adj,visited,i);
}
}
}
