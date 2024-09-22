
---

# Selection Sort Algorithm

This project demonstrates the **Selection Sort Algorithm** implemented in C++. The program sorts an array of integers in ascending order by repeatedly selecting the smallest element from the unsorted portion of the array and swapping it with the first unsorted element.

## Files

### 1. `selection.cpp`
This source file contains the implementation of the selection sort algorithm. It performs the following tasks:
- Takes an unsorted array of integers as input.
- Sorts the array using the selection sort method.
- Outputs the sorted array.

## How to Compile

To compile the project, use the following command in your terminal:

```bash
g++ -o selection_sort selection.cpp
```

This will create an executable file named `selection_sort`.

## How to Run

After compiling, run the program with:

```bash
./selection_sort
```

The program will:
1. Prompt the user to enter the size of the array and the array elements.
2. Sort the array using selection sort.
3. Output the sorted array.

### Example Output:

```
Enter the number of elements: 5
Enter 5 elements: 29 10 14 37 13
Sorted array: 10 13 14 29 37
```

## Dependencies

- A C++ compiler (e.g., `g++`).

---
