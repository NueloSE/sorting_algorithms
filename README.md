![Sorting-in-C](https://github.com/El-gibbor/sorting_algorithms/assets/107848793/a99be5dc-eef6-43f4-a7d0-8d499439be24)  
# Sorting Algorithm & Big O   
Sorting algorithms and Big O notation are foundational concepts in computer science. It empowers one to write efficient code and make informed decisions about algorithm selection based on the characteristics of the data.  

# C - Sorting algorithms & Big O

In this project, I implemented several different sorting algorithms.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. 

## Helper Files :raised_hands:

* [print_array.c](./print_array.c): C function that prints an array of integers. 
* [print_list.c](./print_list.c): C function that prints a `listint_t` doubly-linked list. 

## Header Files :file_folder:

* [sort.h](./sort.h): Header file containing definitions and prototypes for all types and functions written for the project.

Data Structure:
```
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
```

Function Prototypes:

| File                       | Prototype                                         |
| -------------------------- | ------------------------------------------------- |
| `print_array.c`            | `void print_array(const int *array, size_t size)` |
| `print_list.c`             | `void print_list(const listint_t *list)`          |
| `0-bubble_sort.c`          | `void bubble_sort(int *array, size_t size);`      |
| `1-insertion_sort_list.c`  | `void insertion_sort_list(listint_t **list);`     |
| `2-selection-sort.c`       | `void selection_sort(int *array, size_t size);`   |
| `3-quick_sort.c`           | `void quick_sort(int *array, size_t size);`       |
| `100-shell_sort.c`         | `void shell_sort(int *array, size_t size);`       |
| `101-cocktail_sort_list.c` | `void cocktail_sort_list(listint_t **list);`      |
| `102-counting_sort.c`      | `void counting_sort(int *array, size_t size);`    |
| `103-merge_sort.c`         | `void merge_sort(int *array, size_t size);`       |
| `104-heap_sort.c`          | `void heap_sort(int *array, size_t size);`        |
| `105-radix_sort.c`         | `void radix_sort(int *array, size_t size);`       |
| `106-bitonic_sort.c`       | `void bitonic_sort(int *array, size_t size);`     |
| `107-quick_sort_hoare.c`   | `void quick_sort_hoare(int *array, size_t size);` |

* [deck.h](./deck.h): Header file containing definitions and prototypes for all types and functions written for the task `1000-sort_deck.c`.

Data Structures:
```
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;
```

Function Prototype:

| File               | Prototype                             |
| ------------------ | ------------------------------------- |
| `1000-deck_node.c` | `void sort_deck(deck_node_t **deck);` |

## Tasks :page_with_curl:

* **0. Bubble sort**
  * [0-bubble_sort.c](./0-bubble_sort.c): C function that sorts an array of integers in ascending order using the Bubble Sort algorithm.
  * Prints the array after each swap.
  * [0-O](./0-O): Text file containing the best, average, and worst case time complexities of the Bubble Sort algorithm, one per line.

* **1. Insertion sort**
  * [1-insertion_sort_list.c](./1-insertion_sort_list.c): C function that sorts a `listint_t` doubly-linked list of integers in ascending order using the
  Insertion Sort algorithm.
  * Prints the list after each swap.
  * [1-O](./1-O): Text file containing the best, average, and worst case time complexities of the Insertion Sort algorithm, one per line.

* **2. Selection sort**
  * [2-selection_sort.c](./2-selection_sort.c): C function that sorts an array of integers in ascending order using the Selection Sort algorithm.
  * Prints the array after each swap.
  * [2-O](./2-O): Text file containing the best, average, and worst case time complexities of the Selection Sort algorithm, one per line.

* **3. Quick sort**
  * [3-quick_sort.c](./3-quick_sort.c): C function that sorts an array of integers in ascending order using the Quick Sort algorithm.
  * Implements the Lomuto partition scheme.
  * Always uses the last element of the partition being sorted as the pivot.
  * Prints the array after each swap.
  * [3-O](./3-O): Text file containing the best, average, and worst case time complexities of the Quick Sort Lomuto Partition scheme algorithm, one per line.

* **4. Shell sort - Knuth Sequence**
  * [100-shell_sort.c](./100-shell_sort.c): C function that sorts an array of integers in ascending order using the Shell sort algorithm.
  * Implements the Knuth interval sequence.
  * Prints the array each time the interval is decreased.

* **5. Cocktail shaker sort**
  * [101-cocktail_sort_list.c](./101-cocktail_sort_list.c): C function that sorts
  a `listint_t` doubly-linked list of integers in ascending order using the Cocktail Shaker Sort algorithm.
  * Prints the list after each swap.
  * [101-O](./101-O): Text file containing the best, average, and worst case time complexities of the Cocktail Shaker Sort algorithm, one per line.

* **6. Counting sort**
  * [102-counting_sort.c](./102-counting_sort.c): C function that sorts an array of integers in ascending order using the Counting Sort algorithm.
  * Assumes that the array will only contain numbers `>= 0`.
  * Prints the counting array after it has been initialized.
  * [102-O](./102-O): Text file containing the best, average, and worst case time complexities of the Counting Sort algorithm, one per line.

* **7. Merge sort**
  * [103-merge_sort.c](./103-merge_sort.c): C function that sorts an array of integers in ascending order using the Merge Sort algorithm.
  * Implements the `top-down` Merge Sort algorithm.
    * When an array is divided, the size of the left subarray is always less than or equal to the size of the right subarray.
    * Always sorts the left subarray before the right one.
  * Prints subarrays each time they are merged.
  * [103-O](./103-O): Text file containing the best, average, and worst case time complexities of the Merge Sort algorithm, one per line.

* **8. Heap sort**
  * [104-heap_sort.c](./104-heap_sort.c): C function that sorts an array of integers in ascending order using the Heap Sort algorithm.
  * Implements the `sift-down` Heap Sort algorithm.
  * Prints the array after each swap.
  * [104-O](./104-O): Text file containing the best, average, and worst case time complexiites of the Heap Sort algorithm, one per line.

* **9. Radix sort**
  * [105-radix_sort.c](./105-radix_sort.c): C function that sorts an array of integers in ascending order using the Radix Sort algorithm.
  * Implements the Least-Significant-Digit (LSD) Radix Sort algorithm.
  * Assumes that the array will only contain numbers `>= 0`.
  * Prints the array for each significant digit increase.
  * [105-O](./105-O): Text file containing the best, average, and worst case time complexities of the Radix Sort algorithm, one per line.

* **10. Bitonic sort**
  * [106-bitonic_sort.c](./106-bitonic_sort.c): C function that sorts an array of integers in ascending order using the Bitonic Sort algorithm.
  * Assumes that `size` is a power of 2 (ie. `size` can be expressed as `2^k` where `k >= 0`).
  * Prints subarrays each time they are merged.
  * [106-O](./106-O): Text file containing the best, average, and worst case time complexities of the Bitonic Sort algorithm, one per line.

* **11. Quick Sort - Hoare Partition scheme**
  * [107-quick_sort_hoare.c](./107-quick_sort_hoare.c): C function that sorts an array of integers in ascending order using the Quick Sort algorithm.
  * Implements the Hoare partition scheme.
  * Always uses the last elemement of the partition being sorted as the pivot.
  * Prints the array after each swap.
  * [107-O](./107-O): Text file containing the best, average, and worst case time complexities of the Quick Sort Hoare Partition cheme algorithm, one per line.

* **12. Dealer**
  * [1000-sort_deck.c](./1000-sort_deck.c): C function that sorts a `deck_node_t` doubly-linked list deck of cards.
  * Assumes that there are exactly `52` elements in the doubly-linked list.
  * Orders the deck from spades to diamonds and from aces to kings.

## Learning Objectives 📚
Upon completing this project,the goal is to be capable of elucidating the below concepts to anyone, independently and without reliance on external resources:  
* Understand and explain at least four different sorting algorithms.
* Grasp the concept of Big O notation and be able to evaluate the time complexity of an algorithm.
* Learn how to select the best sorting algorithm for a given input.
* Comprehend the concept of a stable sorting algorithm.
## Big O Notation ⏱
Big O notation is a way to describe the upper bound of an algorithm's time complexity in relation to the size of its input. It helps us analyze and compare algorithms in terms of their efficiency and scalability. Common Big O complexities include `O(1)`, `O(log n)`, `O(n)`, `O(n log n)`, `O(n^2)`, and more.   
## At least 4 different sorting algorithms  
__1. Bubble Sort__  
Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. It has a worst-case time complexity of `O(n^2)`.  
__2. Insertion Sort__  
Insertion Sort builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as Quick Sort or Merge Sort. Its worst-case time complexity is `O(n^2)`.  
__3. Merge Sort__  
Merge Sort is an efficient, stable, and comparison-based sorting algorithm. It divides the unsorted list into n sublists, each containing one element, and then repeatedly merges sublists to produce new sorted sublists until there is only one sublist remaining. It has a worst-case time complexity of `O(n log n)`.  
__4. Quick Sort__  
Quick Sort is a fast and efficient sorting algorithm that uses a divide-and-conquer approach. It selects a 'pivot' element and partitions the array into two sub-arrays - elements less than the pivot and elements greater than the pivot. It then recursively sorts the sub-arrays. On average, it has a time complexity of O(n log n), but its worst-case time complexity is `O(n^2)`.  
## Resources   
[Sorting Algorithms](https://www.youtube.com/playlist?list=PLzZR2BJ8ICYu_832OWSsKtt76PCuxLNZ8) - Youtube Playlist  
[Sorting Algos](https://www.youtube.com/playlist?list=PLuZ_bd9XlByzTIP5j1aWXo7smCIxvzd2D) - Jenny's Lectures  
[CS50 Algorithm explanation](https://intranet.alxswe.com/rltoken/Ea93HeEYuNkOL7sGb6zzGg) - David Malan
