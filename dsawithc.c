//Array

//Declaration:
int arr[5] = {1,2,3,4,5};
//declaration of an array named arr with a size of 5 and initializes it with the values 1, 2, 3, 4, and 5. The elements of the array can be accessed using their index starting from 0. For example, arr[0] will access the first element of the array, which is 1, and arr[4] will access the last element, which is 5. Arrays can also be initialized at the time of declaration, as shown in the example above.  

//TRAVERSING AN ARRAY
for(int i=0;i<5;i++){
    printf("%d", arr[i]);
}

//Insertion(at position):
int pos = 2; // position where the new element will be inserted
int newElement = 10; // new element to be inserted
for(int i=4; i>=pos; i--){
    arr[i] = arr[i-1]; // shift elements to the right
}
arr[pos] = newElement; // insert the new element at the specified position//Time complexity: O(n) - In the worst case, when inserting at the beginning of the array, all elements need to be shifted to the right, resulting in a time complexity of O(n). In the best case, when inserting at the end of the array, no elements need to be shifted, resulting in a time complexity of O(1).    

//Deletion(at position):
int pos = 2;//position of the element to be deleted
for(int i=pos; i<4; i++){
    arr[i] = arr[i+1]; //shift elements to the left
}
//Time complexity: O(n) - In the worst case, when deleting the first element of the array, all elements need to be shifted to the left, resulting in a time complexity of O(n). In the best case, when deleting the last element of the array, no elements need to be shifted, resulting in a time complexity of O(1). 

//Linked List:
//Node Structure:
struct Node {
    int data; //data stored in the node
    struct Node* next; //pointer to the next node in the list
}

//Create Node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*malloc(sizeof(struct Node)));
    newNode->data = data; //assign data to the new node
    newNode->next = NULL; //initialize the next pointer to NULL
    return newNode; //return the newly created node
}

//Insert at beginning:
void insertAtBeginning(struct Node** head, int val){
    struct Node* newNode = createNode(val); //create a new node with the given value
    newNode->next = *head; //point the next of the new node to the current head of the list
    *head = newNode; //update the head of the list to point to the new node
}
//Inser head- This function takes a pointer to the head of the linked list and a value to be inserted. It creates a new node with the given value, points the next of the new node to the current head of the list, and updates the head of the list to point to the new node. The time complexity of this operation is O(1) since it only involves updating a few pointers without needing to traverse the list.
//Search- O(n) - In the worst case, when the element to be searched is at the end of the list or not present at all, all nodes need to be traversed, resulting in a time complexity of O(n). In the best case, when the element to be searched is at the beginning of the list, only one node needs to be checked, resulting in a time complexity of O(1).



//Stack(using Array):
#define MAX 100
int stack[MAX]; //array to hold the stack elements
int top = -1; //initialize the top of the stack to -1, indicating that the stack is empty 

//Push operation:
void push(int val){
    stack[++top] = val; //increment the top and add the new value to stack
}

//pop operation:
int pop(){
    return stack[top--]; //return the top element and decrement the top of the stack
}
//Time complexity of both push and pop operations is O(1) since they involve a constant number of steps to add or remove an element from the stack, regardless of the size of the stack.

//Queue(using Array):
int queue[100]; //array to hold the queue elements
int front = -1, rear = -1;

//Enqueue operation:
void enqueue(int val){
    if(front == -1) front = 0;
    queue[++rear] = val;
}

//Dequeue operation:
int dequeue(){
    return queue[front++]; //return the front element and increment the front of the queue
}

//Recursion(Factorial):
int factorial(int n){
    if(n==0) return 1; //base case: factorial of 0 is 1
    return n*factorial(n-1); //recursive case: n! = n * (n-1)!
}

//Binary Search:
int binarySearch(int arr[],int left, int right, int target){
    if(left > right) return -1; //base case: target not found
    int mid = left + (right - left) / 2; //calculate the middle index
    if(arr[mid] == target) return mid; //target found at index mid
    else if(arr[mid] > target) return binarySearch(arr, left, mid - 1, target); //search in the left half
    else return binarySearch(arr, mid + 1, right, target); //search in the right half
}
//Time complexity of binary search is O(log n) since it divides the search space in half


//Sorting Algorithms:
void bubble(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if arr[j] > arr[j+1] {
                //swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
//Time complexity of bubble sort is O(n^2) in the worst and average cases, and O(n) in the best case when the array is already sorted.

//Tree(Binary Tree):
//Node Structure:
struct TreeNode {
    int data; //data stored in the node
    struct TreeNode* left; //pointer to the left child
    struct TreeNode* right; //pointer to the right child
}

//Inorer Traversal:
void inorder(struct Node* root){
    if(root==NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

//Graph(Adjacency Matrix):
int graph[10][10]; //adjcency matrix to represent the graph
int visited[10]; //array to keep track of visited nodes

//DFS Traversal:
void DFS(int node, int n){
    visited[node] = 1; //mark the current node as visited 
    printf("%d", node); //process the current node

    for(int i=0; i<n; i++){
        if(graph[node][i] == 1 && !visited[i]}{ //if there is an edge from the current node to node i and node i has not been visited
            DFS(i, n); //recursively visit node i
        }
    }
}
//Time complexity of DFS is O(V + E) where V is the number of vertices and E is the number of edges in the graph, since in the worst case, all vertices and edges may need to be explored.

//Dynamic Memory ALlocation:
int *arr = malloc(5*sizeof(int)); //allocate memory for an array of 5 integers
free(arr); //deallocate the memory allocated for the array
//Time complexity of malloc() and free() is O(1) for the allocation and deallocation operations themselvesm but the overall time complexity of using dynamic memory allocation can vary depending on how it is used in the program. For example, if you are allocating and deallocating memory in a loop, the time complexity could be O(n) where n is the number of iterations in the loop.