# Sorting algorithms & Big O

A sorting algorithm is a method for arranging a set of data in a specific order, such as ascending or descending. Examples of sorting algorithms include:
```burble sort```  ```insertion sort``` ```selection sort``` ```merge sort``` and ```quick sort```

Big-O notation is a way to describe the performance of an algorithm, specifically the amount of time it takes for the algorithm to complete. It describes the upper bound on the number of operations the algorithm performs in relation to the size of the input data set. For example, an algorithm with a time complexity of O(n) will take roughly the same amount of time to complete regardless of the size of the input data set, while an algorithm with a time complexity of O(n^2) will take much longer to complete as the size of the input data set increases.

## Bubble Sort

Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

The algorithm can be described as follows:

    Start at the beginning of the list
    Compare the first two elements, and swap them if they are in the wrong order
    Move to the next pair of elements and repeat step 2
    Continue until the end of the list is reached
    Repeat steps 1 through 4 until the list is sorted

Bubble sort has a time complexity of O(n^2) which makes it inefficient for large data sets. It performs well on small data sets and when the data is already partially sorted.

It can be improved to O(n) if we add a flag that checks if any swapping happened in the last pass, if not then the list is already sorted and we can break the loop.

It is not widely used in practice due to its poor performance, but it is often used as a simple example in teaching basic algorithms.

## Insertion Sort

Insertion sort is a simple sorting algorithm that builds the final sorted list one item at a time. It repeatedly takes an unsorted element and inserts it into its proper position in the sorted portion of the list.

The algorithm can be described as follows:

    Start with an empty sorted list
    Take the first unsorted element and insert it into the correct position in the sorted list
    Repeat step 2 for each unsorted element
    Continue until all elements have been inserted into the sorted list

Insertion sort has a time complexity of O(n^2) which makes it inefficient for large data sets. However, it performs well on small data sets and when the data is already partially sorted. It is also efficient for data sets that are continuously being added to.

Insertion sort is often used in practice for small data sets, and also as a simple example in teaching basic algorithms. It can also be useful for sorting data that is being received continuously and not all at once.

It has a best-case time complexity of O(n) when the input is already sorted and worst case of O(n^2) when the input is sorted in reverse.

## Selection Sort

Selection sort is a simple sorting algorithm that repeatedly selects the smallest (or largest) element from the unsorted portion of the list and appends it to the sorted portion of the list.

The algorithm can be described as follows:

    Start with an empty sorted list
    Find the smallest (or largest) element in the unsorted portion of the list
    Append the selected element to the sorted portion of the list
    Repeat steps 2 and 3 until all elements have been added to the sorted list

Selection sort has a time complexity of O(n^2) which makes it inefficient for large data sets. It is similar to bubble sort and insertion sort in terms of performance, but it has the advantage of minimizing the number of swaps.

It is not widely used in practice due to its poor performance, but it is often used as a simple example in teaching basic algorithms.

It has a best case and worst-case time complexity of O(n^2) which makes it less efficient for larger data sets.

## Merge Sort

Merge sort is a divide and conquer sorting algorithm that divides the input list into two sublists, recursively sorts the sublists, and then merges the sorted sublists to produce the final sorted list.

The algorithm can be described as follows:

    Divide the input list into two equal-sized sublists
    Recursively sort each sublist
    Merge the two sorted sublists back into one sorted list

Merge sort has a time complexity of O(n log n) which makes it more efficient than the previous sorting algorithms discussed (bubble sort, insertion sort, and selection sort) which have O(n^2) time complexity.

This algorithm has a good balance between the time and space efficiency and it's widely used in practice because of its stability and efficiency. It is also a good choice for sorting data that is being received continuously and not all at once.

It has a best and worst-case time complexity of O(n log n) which makes it more efficient than the previous sorting algorithms discussed.

## Quick Sort

Quick sort is a divide and conquer sorting algorithm that selects a "pivot" element from the list and partition the other elements into two sublists, according to whether they are less than or greater than the pivot. The sublists are then recursively sorted.

The algorithm can be described as follows:

    Select a pivot element from the list
    Partition the other elements into two sublists, according to whether they are less than or greater than the pivot
    Recursively sort the sublists
    Combine the sorted sublists and the pivot to form the final sorted list

Quick sort has an average time complexity of O(n log n), making it more efficient than the previous sorting algorithms discussed. In the best case, the pivot is the middle element of the array and the time complexity is O(n log n). In the worst case, the pivot is always the smallest or largest element, which makes the time complexity O(n^2) if the pivot is always the same.

Quick sort is widely used in practice because of its speed and efficiency and it's also an in-place sorting algorithm which means it uses a small constant amount of memory. However, the worst-case scenario can be avoided by choosing a random pivot or using a modified version of quick sort like the "IntroSort" which fallbacks to a stable sorting algorithm like heap sort or merge sort when the recursion depth exceeds a certain level.

