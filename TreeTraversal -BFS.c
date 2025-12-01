Skip to main content
Google Classroom
Classroom
SCSVMV-S6-2024 BATCH
S6
Home
Calendar
Gemini
Enrolled
To-do
P
PYTHON PROGRAMMING-II-CSE-S6
S6
S
SCSVMV-S6-2024 BATCH
S6
A
AI & ML Class
S6 , S7 & Civil
I
I Year
S6 "F"
Archived classes
Settings
Material details
DSA Programs
Suresh Bhadram 10921
•
Nov 18 (Edited Nov 25)
Linear Search - Iteration & Recursion
Binary Search - Iteration
Stack Operations
String Reversal
Infix To Postfix
Queue Opearions
Simple Linked List
Doubly Linked List
Stack using Linked List
Circular Queue using Linked List
Tree Traversal - DFS
Tree Traversal - BFS
Sorting - Quick & Merge
LinkedList-SampleCode.txt
Text

Infix-To-Postfix.c
C

Linear-Search-Iteration.c
C

Linear-Search-Recursion.c
C

Binary-Search-Iteration.c
C

Stack-Using-LL.c
C

DoublyLinkedList.c
C

StackOperations.c
C

StringReversal.c
C

QueueOperations.c
C

CQ-Using-LL.c
C

Tree-Traversal-DFS.c
C

Tree-Traversal-BFS.c
C

MergeSort.c
C

QuickSort.c
C

LibraryManagement-Easy.c
C

LibraryManagement-Difficult.c
C

MusicPlayer.c
C

1 class comment

Suresh Bhadram 10921 • Nov 25
Head is fixed at first node address, Current points to the currently playing songs / Current Node
Add Song --> Includes Create Node + Insert Node at end
Play Song -> Read Head value
Next Song, Prev Song -> Temporary Traversal
Display -> Show All

Add class comment…

#include <stdio.h>
#include <stdlib.h>

struct Node **queue;
int front = -1, rear = -1, MAX;

// Structure for tree node
// Data, Pointer to left child and Pointer to right child
struct Node
{
    int data;
    struct Node *left, *right;
};

// Node creation
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert the new node and returns root node of the updated tree
struct Node *insert(struct Node *root, int value)
{
    // First node will be root node
    if (root == NULL)
    {
        return createNode(value);
    }

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Queue implementation for Level Order Traversal / BFS


void enqueue(struct Node *temp)
{
    if (rear == MAX-1)
        return; // Queue full
    if (front == -1)
        front = 0;
    queue[++rear] = temp;
}

struct Node *dequeue()
{
    if (front == -1 || front > rear)
        return NULL; // Empty
    return queue[front++];
}

void levelOrder(struct Node *root)
{
    if (root == NULL)
        return;

    enqueue(root);

    while (front <= rear)
    {
        struct Node *current = dequeue();
        printf("%d ", current->data);

        if (current->left != NULL)
            enqueue(current->left);
        if (current->right != NULL)
            enqueue(current->right);
    }
}

int main()
{
    int value;
    struct Node *root = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &MAX);

    queue = (struct Node **)malloc(MAX * sizeof(struct Node *));

    printf("Enter %d values:\n", MAX);

    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &value);
        root = insert(root, value); // Insert dynamically into BST
    }

    printf("\nLevel Order Traversal: ");
    levelOrder(root);

    return 0;
}
Tree-Traversal-BFS.c
Displaying Tree-Traversal-BFS.c.
