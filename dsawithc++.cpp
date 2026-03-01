//Arrays-
int arr[5] = {1,2,3,4,5};
for(int i=0;i<5;i++){
    printf(:"%d", arr[i]);
    cout <<arr[i] << endl;
}

//Dynamic Memory Allocation:
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int *arr = (int)malloc(n * sizeof(int)); //allocate memory for an array of n integers
if(arr == NULL) {
    printf("Memory allocation failed");
    return 1; //exit the program if memory allocation fails
}

int n;
cin>>n;
int* arr = new int[n];
delete[] arr;

//Vector(Dynamic Array):
#include <vector>
using namespace std;
vector<int> v = {1,2,3};
v.push_back(4);
v.pop_back();
cout<<v[0];

//Iterate
for(int x : v) cout<<x;
for(auto it=v.begin(); it!=v.end(); it++)
cout<<*it;

//Time:
Access-O(1)
Insert end-O(1)

//String DSA
string s = "Krishna";
s.length();
s.substrate(0,3);
reverse(s.begin(),s.end());

//Palindrome:
bool isPal(string s){
  string t=s;
  reverse(t.begin(),t.end());
  return s==t;
}

//Linked List:
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

//Insert head
void insertHead(Node*& head, int val){
    Node* n = new Node(val);
    n->next=head;
    head=n;
}

//Traverse:
void print(Node* head) {
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}

//Stack
#include <stack>
stack<int> s;
s.pop();
cout<<s.top();
//Applications of Stack:- Parentheses check,Undo,DFS

//Queue:
#include <queue>
queue<int> q;
q.push(1);
q.pop();
cout<<q.front();

//Deque:
deque<int> d;
d.push front(1);
d.push_back(2);

//Priority queue(heap)
priority_queue<int> pq; //max heap
pq.push(10);
pq.push(5);

//Min heap
priority_queue<int, vector<int>, greater<int>> pq;

//Binary Tree
//Node:
struct Node{
    int data;
    Node* left;
    Node* right;
   
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

//Inorder
void inorder(Node* root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
    

//BST(Binary Search Tree)
Node* insert(Node* root,int val){
    if(!root) return new Node(val);

    if(val < root->data)
    root->left = insert(root->left,val);
    else
    root->right = insert(root->right,val);

    return root;
}
//Search-O(log n)

//Heap(Manual)
//Array formula:
Left = 2*i+1
Right = 2*i+2
Parent = (i-1)/2

//Heapify:
void heapify(vector<int>& a,int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left <n && a[left] > a[largest]) //compare with left child
    largest = left;
    if(right < n && a[right]) > a[largest]) //compare with right child
    largest = right;
    if(largest != i){
        swap(a[i], a[largest]);
        heapify(a,n,largest); //recursively heapify the affected subtree
    }
}

//Hashing
#include <unordered_map>
unordered_map<int, string> m;
m[i]=10;
cout<<mp[1];
//Frequency count:
for(int x: arr) m[x]++;
mp[x]++;

//Set:
set<int> st;
s.insert(1);
s.erase(1);
cout<<s.count(1); //returns 1 if 1 is present in the set
//Ordered+unique
//Applications of Set: Unique elements,Sorted order,Intersection,Union


//Graph
//Adjacency List:
#include <vector>
vector<int> graph[100]; //array of vectors to represent the adjacency list
graph[0].push_back(1); //add an edge from node 0 to node

//Add edge:
void addEdge(vector<int> graph[], int u, int v){
    graph[u].push_back(v); //add v to u's list
    graph[v].push_back(u); //add u to v's list (for undirected graph)
}

//DFS:
void DFS(vector<int> graph[], int node, vector<bool>& visited){
    visited[node] = true; //Mark the current node as visited
    cout<<node<<" "; //Process the current node

    for(int neighbor : graph[node]){ //Iterate through the neighbors of the current node
        if(!visited[neighbor]){ //If the neighbor has not been visited
            DFS(graph, neighbor, visited); //Recursively visit the neighbor
        }
    }
        }}

//BFS:
void bfs(int start){
    queue<int> q;
    q.push(start);
    vis[start]=1;

    while(!q.empty()){
        int node=q.front(); q.pop();

        for(int x: g[node])
            if(!vis[x]){
                vis[x]=1;
                q.push(x);
            }
    }
}

//Dijikstra's Alogorithm:
void dijkstra(int src, vector<pair<int,int>> graph[],int v){
    vector<int> dist(v, INT_MAX); //Initialize distances to all vertices as infinite
    dist[src] = 0; //Distance to the source vertex is set to 0

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; //Min-heap priority queue to store vertices based on their distance from the source
    pq.push({0, src}); //Push the source vertex with distance 0 into the priority queue

    while(!pq.empty()){
        int u = pq.top().second; //Get the vertex with the smallest distance
        pq.pop();

        for(auto neighbor : graph[u]){ //Iterate through the neighbors of vertex u
            int v = neighbor.first; //Get the neighboring vertex
            int weight = neighbor.second; //Get the weight of the edge between u and v

            if(dist[u] + weight < dist[v]){ //If a shorter path to v is found through u
                dist[v] = dist[u] + weight; //Update the distance to vertex v
                pq.push({dist[v], v}); //Push the updated distance and vertex into the priority queue
            }
        }
}
}

//Union find(DSU):
int parent[100];

int find(int x){
    if(parent[x]==x) return x;
    return parent[x]=find(parent[x]);
}

void unite(int a,int b){
    a=find(a);
    b=find(b);
    parent[a]=b;
}

//Time complexity of union and find operations is O(α(n)), where α(n) is the inverse Ackermann function, which grows very slowly and is practically constant for all reasonable values of n.\

//DP(Fibonacci):
int fib(int n){
    if(n<=1) return n; //Base cases: fib(0) = 0 and fib(1) = 1
    return fib(n-1) + fib(n-2); //Recursive case: fib(n) = fib(n-1) + fib(n-2);
}

//Time complexity of the naive recursive Fibonacci algorithm is O(2^n) due to the exponential growth of the number of function calls. However, using memoization or tabulation techniques can reduce the time complexity to O(n).

//C and C++ are both powerful programming languages, but they have some key differences. C is a procedural programming language that focuses on functions and procedures, while C++ is an object-oriented programming language that supports classes and objects. C++ also includes features like templates, exception handling, and operator overloading, which are not present in C. Additionally, C++ provides better support for data abstraction and encapsulation compared to C. Overall, C++ is a more versatile language that can be used for a wider range of applications, while C is often preferred for low-level programming and system development due to its simplicity and efficiency.
//C     → Manual memory, interview depth
//C++   → STL speed, CP, production
//C     → Pointer mastery
//C++   → Abstraction + performance