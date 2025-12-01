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
DSA ProgramsMaterial details
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

// Merge two sorted subarrays
void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;

    int temp[right - left + 1];

    // Merge logic
    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    // Copy left-out elements
    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    // Copy temp back to original
    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}

// Merge Sort function
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);      // Left part
        mergeSort(arr, mid + 1, right); // Right part
        merge(arr, left, mid, right);   // Merge halves
    }
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array (Merge Sort): ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
MergeSort.c
Displaying MergeSort.c.
