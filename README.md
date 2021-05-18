
<h1 align="center">DAA Practical Exam 2021</h1>

**Submitted by:** Tanya Jain (19020570041)                                         
**Submitted to:** Mr. Vipin Rathi 

# Question 1: Red Black Tree
  Complexity Analysis:

 - Search: ```O(log n)```
 - Insert: ```O(log n) ```
 - Delete: ```O(log n)```

### Applications:
 
 1. Most of the self-balancing BST library functions like map and set in C++ (OR TreeSet and TreeMap in Java) use Red-Black Tree. 
 2. It is used to implement CPU Scheduling Linux. Completely Fair Scheduler uses it. 
 3. Besides they are used in the K-mean clustering algorithm for reducing time complexity. 
 4. Moreover, MySQL also uses the Red-Black tree for indexes on tables.


# Question 2: Kruskal's Minimum Spanning Tree
  Complexity Analysis:
 1. Best Case: ```O(N logE)```
 2. Worst Case: ```O(ElogE) or O(ElogV)```
 3. Average Case: ```O(ElogE)```

### Applications:
Spanning tree is basically used to find a minimum path to connect all nodes in a graph. Common application of spanning trees are −
1. Civil Network Planning   
2. Computer Network Routing Protocol   
3. Cluster Analysis

 
 
# Question 3: 
## Bubble
Complexity:
- Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
- Best Case Time Complexity: O(n). Best case occurs when array is already sorted.

### Application of Bubble Sort:
- Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm.
- In computer graphics it is popular for its capability to detect a very small error (like swap of just two elements) in almost-sorted arrays and fix it with just linear complexity (2n). 
 
## Selection
Complexity:
O(n^2) as there are two nested loops in all cases.
### Application:
1. Selection sort almost always outperforms bubble sort and gnome sort.
2. Can be useful when memory write is a costly operation
3. While selection sort is preferable to insertion sort in terms of number of writes (Θ(n) swaps versus Ο(n^2) swaps).
4. This can be important if writes are significantly more expensive than reads, such as with EEPROM or Flash memory, where every write lessens the lifespan of the memory.
 
## Insertion
Complexity:
- Worst case time complexity: ```Θ(N^2)``` comparisons and swaps
- Average case time complexity:``` Θ(N^2)``` comparisons and swaps
- Best case time complexity: ```Θ(N)``` comparisons and Θ(1) swaps

### Application:
1. If the cost of comparisons exceeds the cost of swaps, as is the case for example with string keys stored by reference or with human interaction, then using binary insertion sort may yield better performance.
2. A variant named binary merge sort uses a binary insertion sort to sort groups of 32 elements, followed by a final sort using merge sort.
3. If a skip list is used, the insertion time is brought down to O(log n), and swaps are not needed because the skip list is implemented on a linked list structure. The final running time for insertion would be O(n log n).
 
## Merge
Complexity:
- Worst case time complexity: ```Θ(N log N)```
- Average case time complexity: ```Θ(N log N)```
- Best case time complexity:``` Θ(N log N)```
   
#### Time complexity of Merge Sort is  θ(nLogn) in all 3 cases (worst, average and best) as merge sort always divides the array into two halves and takes linear time to merge two halves.

### Applications:
1. Merge Sort is useful for sorting linked lists in O(n Log n) time
2. Merge sort can be implemented without extra space for linked lists
3. Merge sort is used for counting inversions in a list
4. Merge sort is used in external sorting
  
## Quick 
Complexity:
- Worst case time complexity: ```Θ(N^2)```
- Average case time complexity: ```Θ(N log N)```
- Best case time complexity: ```Θ(N log N)```

### Applications:
1. Quicksort is used everywhere where a stable sort is not needed
2. Variants of quicksort are used to separate the k smallest or largest elements
3. Quicksort's divide-and-conquer enables the use of parallelization
4. Quick Sort is a cache friendly sorting algorithm as it has good locality of reference when used for arrays
5. Quick Sort is tail recursive and hence, all tail call optimizations can be done
6. Quick Sort is an in-place sort that is does not require any extra storage