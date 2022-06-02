#include<iostream>
#include<queue>
#include<vector>
using namespace std;
 
void addEdge(vector<int>adj[],int src,int des){
   adj[src].push_back(des);
   adj[des].push_back(src);
 }
void Bfs(vector<int>adj[],vector<bool>&visit,int sv){
   queue<int>q;
   visit[sv]=true;
   q.push(sv);
   while(!q.empty()){
    int temp=q.front();
    q.pop();
    cout<<temp<<" ";
     for(auto itr:adj[temp]){
        if(!visit[itr]){
             q.push(itr);
           visit[itr]=true;
           
           }
           }
           }
           }  
int main(){
  int e,v;
  cout<<"enter total number of vertices:";
  cin>>v;
  cout<<"enter total number of edges:";
  cin>>e;
  vector<int>adj[v];
  vector<bool>visited(v,false);
cout<<"enter the source to destination vertices:";
  
  for(int i=0;i<e;i++){
     int a,b;
     cin>>a>>b;
     addEdge(adj,a,b);
     }
  int sv;
  cout<<"enter the source vertex:";
  cin>>sv;
  
  for(int i=sv;i<v;i++){
  if(!visited[i]){
   Bfs(adj,visited,i);
   }
   }
   }  
     
