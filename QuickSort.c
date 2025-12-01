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

//Swap the numbers / Call by referene to persist changes
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition 
int partition(int list[], int low, int high)
{
    int pivot = list[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (list[j] < pivot)
        {
            i++;
            swap(&list[i], &list[j]);
        }
    }
    swap(&list[i + 1], &list[high]);
    return i + 1;
}

// Quick Sort function
void quickSort(int list[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(list, low, high);
        quickSort(list, low, pi - 1);
        quickSort(list, pi + 1, high);
    }
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int list[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &list[i]);

    quickSort(list, 0, n - 1);

    printf("Sorted array (Quick Sort): ");
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);

    return 0;
}
QuickSort.c
Displaying Tree-Traversal-BFS.c.
