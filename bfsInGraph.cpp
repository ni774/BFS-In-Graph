#include<iostream>
#include<vector>
#include<queue>
  using namespace std;
  class graph{
    int n;     //no of virtices
    vector<int>list[10];
    public:
        graph(int n);
        void addEdge(int v,int w);
        void bfs(int s);  
       
  };
  graph::graph(int n){
    this->n=n;
  }
  void graph::addEdge(int v,int w){
          list[v].push_back(w);
        } 
  void graph:: bfs(int s){
    int visited[n]={0};
    queue<int>q;
    visited[s]=1;
    q.push(s);

    while (!q.empty())
    {
       int temp=q.front();
       cout<<temp<<" ";
       q.pop();

       for(auto adjacent:list[temp]){
         if(visited[adjacent]!=1){
           visited[adjacent]=1;
           q.push(adjacent);
         }
       }
    }
    
  }
 
int main()
{
                                                     //adjacency matrix
    // int a[3][3]={0};
    // a[0][1]=1;
    // a[1][0]=1;
    // a[1][2]=1;
    // a[2][1]=1;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         std::cout<<a[i][j]<<" ";
    //     }class Graph
{class Graphclass Graph
{class Graph
{class Graph
{class Graph
{class Graph
{
    int V;    // No. of vertices
 
    // Pointer to an array containing adjacency
    // lists
    vector<list<int>> adj;  
    int V;    // No. of vertices
 
    // Pointer to an array containing adjacency
    // lists
    vector<list<int>> adj;  
    int V;    // No. of vertices
 
    // Pointer to an array containing adjacency
    // lists
    vector<list<int>> adj;  
    int V;    // No. of vertices
 
    // Pointer to an array containing adjacency
    // lists
    vector<list<int>> adj;  
    int V;    // No. of vertices
 
    // Pointer to an array containing adjacency
    // lists
    vector<list<int>> adj;  
{
    int V;    // No. of vertices
 
    // Pointer to an array containing adjacency
    // lists
    vector<list<int>> adj;  
    int V;    // No. of vertices
 
    // Pointer to an array containing adjacency
    // lists
    vector<list<int>> adj;  
    //     std::cout<<std::endl;
    // }

                                       //adjacency list
                                       
      graph g(5);
      vector<int>list[5];
      g.addEdge(1,2);
      g.addEdge(1,3);
      g.addEdge(3,4);
      g.addEdge(4,5);
      g.addEdge(2,3);
      g.addEdge(5,1);
      g.addEdge(1,5);
      g.bfs(3);     
    return 0;
}