# Experiment 7: To Study and Implement C++ Arrays and Strings
## Aim:
To study the concepts of arrays and strings in C++ and implement basic operations.

## Objectives:
To understand the declaration, initialization, and traversal of arrays and strings in C++.

To perform common operations like:

Searching in an array

Calculating sum and average

Finding maximum and minimum elements

To understand different ways to declare and initialize strings.

To implement string-based operations like:

Concatenation

Reversal

Palindrome checking

To enhance basic problem-solving skills using arrays and strings.

## Theory:
### Arrays in C++
An array is a linear data structure that stores multiple elements of the same data type in contiguous memory locations. Each element is accessed using an index, which starts from 0.

#### Types of Arrays:
One-Dimensional Array – Used for storing a list of values.
```
int arr[5] = {1, 2, 3, 4, 5};
```
Two-Dimensional Array – Used for matrices or tabular data.
```t
int matrix[2][3] = {{1,2,3}, {4,5,6}};
```

#### Operations on Arrays:
Traversal – Visiting each element using loops

Searching – Finding whether an element exists (Linear/Binary Search)

Insertion/Deletion – Adding/removing elements (in advanced dynamic arrays)

Aggregation – Finding sum, average, max, min

#### Advantages:
Efficient data access using indexing.

Simple declaration and use.

#### Limitations:
Fixed size (static memory allocation).

Insertion/deletion operations are costly.

### Strings in C++
A string is a sequence of characters used to represent text. In C++, strings can be handled in two ways:

#### 1. C-style Strings:
Stored as an array of characters ending with a null character '\0'.
```
char name[] = "Mishree";
```
#### 2. C++ Strings (STL String Class):
Introduced in <string> header.

More powerful and flexible.
```
string name = "Mishree";
```
#### Common String Functions:
| Function         | Syntax                     | Description                                              | Example                                  |
|------------------|-----------------------------|----------------------------------------------------------|------------------------------------------|
| `length()`       | `str.length()`              | Returns the number of characters in the string           | `"Hello".length()` → `5`                 |
| `size()`         | `str.size()`                | Same as `length()`                                       | `"World".size()` → `5`                   |
| `append()`       | `str1.append(str2)`         | Appends `str2` to the end of `str1`                      | `"Hi".append("There")` → `"HiThere"`     |
| `+` operator     | `str1 + str2`               | Concatenates two strings                                 | `"Hi" + "There"` → `"HiThere"`           |
| `at(index)`      | `str.at(2)`                 | Returns character at specific index with bounds checking | `"Hello".at(1)` → `'e'`                  |
| `[]` operator    | `str[2]`                    | Accesses character at index (no bounds check)            | `"Hello"[1]` → `'e'`                     |
| `substr()`       | `str.substr(start, len)`    | Returns substring starting at index `start`              | `"Hello".substr(1,3)` → `"ell"`          |
| `find()`         | `str.find("sub")`           | Finds index of substring or char                         | `"hello".find("e")` → `1`                |
| `compare()`      | `str1.compare(str2)`        | Returns 0 if equal, >0 if str1 > str2                    | `"abc".compare("abc")` → `0`             |
| `empty()`        | `str.empty()`               | Returns true if string is empty                          | `""` → `true`                            |
| `clear()`        | `str.clear()`               | Erases all characters from string                        | `"test".clear()` → `""`                  |
| `c_str()`        | `str.c_str()`               | Converts C++ string to C-style string (`const char*`)    | Useful for legacy functions              |
| `reverse()`      | `reverse(str.begin(), str.end())` | Reverses string using `<algorithm>` header          | `"abc"` → `"cba"`                        |


### String Operations Performed:
Concatenation – Merging two strings using + operator or .append().

Reversing a String – Looping from end to start, or using reverse() function.

Palindrome Check – Comparing original and reversed strings or checking symmetry.

Character-wise Access – Looping through string using str[i].

### Comparison: Arrays vs. Strings
| Feature              | C-style String (`char[]`)                  | C++ String Class (`std::string`)              |
|----------------------|--------------------------------------------|-----------------------------------------------|
| Header File          | None (`<cstring>` for functions)           | `<string>`                                    |
| Null-Terminated?     | Yes, ends with `'\0'`                      | No, managed internally                         |
| Declaration          | `char str[10] = "Hi";`                     | `string str = "Hi";`                          |
| Length Calculation   | Use `strlen(str)`                          | Use `str.length()` or `str.size()`            |
| Concatenation        | Use `strcat()`                             | Use `+` or `append()`                         |
| Comparison           | Use `strcmp()`                             | Use `==`, `compare()`                         |
| Modification         | Manual (loop over characters)              | Direct manipulation using methods             |
| Safer to Use         | ❌ No bounds checking                       | ✅ Has bounds checking via `.at()`             |
| Memory Management    | Must manage manually                       | Automatically handled                         |
| Object-Oriented?     | ❌ No                                        | ✅ Yes                                         |


### Why Arrays and Strings are Important
Arrays allow storage of structured data like marks, sensor readings, etc.

Strings are essential in real-world apps like chatbots, file names, usernames, etc.

Both are fundamental to data structures, and mastering them is essential for learning:

Linked Lists

Stacks & Queues

Trees

Dynamic Memory Management

Algorithms (Sorting, Searching)

## Program Description:
We performed 8 programs in this experiment:

1) Printing Array Elements
Input an array from the user and print all elements using a loop.

2) Find a Number in an Array
Search a specific number in an array using a for loop and flag mechanism.

3) Sum and Average of Array Elements
Traverse the array, calculate the sum and then divide by the number of elements for average.

4) Find Maximum and Minimum in an Array
Use conditional statements to compare elements and determine the max and min values.

5) Different Ways to Declare and Initialize a String
   Using character arrays: char str[] = "Hello";

   Using string class: string str = "World";

6) Concatenation of Strings
Using + operator or append() method in string class to combine two strings.

7) Printing String in Reverse
Using a loop from end to start or using built-in functions like reverse().

8) Palindrome Checking
Check whether the string reads the same forward and backward.

Compare characters from start and end using a loop.

## Concepts Used:
Array Traversal & Manipulation

String Handling (C-style and C++ style)

Loops (for, while)

Conditional Statements (if-else)

Functions from <string> header like length(), etc.,.

## Sample Output
### 1. Printing Array
```
47	160	89	3782	715
```

### 2. Searching number in Array
```
Enter element-1: 72
Enter element-2: 900
Enter element-3: 71891
Enter element-4: 730
Enter element-5: 8
Enter element to be searched: 900
Position of 900: 2
```

### 3. Finding Largest and Smallest number in Array
```
11	42	50	90	7	
Largest Number of Array: 90
Smallest Number of Array: 7
```

### 4. Sum and Average of Array
```
52	81	50	37	89	
Sum of Array Elements: 309
Average of Array Elements: 61
```

### 5. Printing String
```
C++
C++
C++
C++
```

### 6. Displaying String
```
Enter string: mishree
Given string: mishree
```

### 7. Concatenation of String
```
Enter Firstname: Mishree
Enter Lastname: Kalaria
Mishree Kalaria
```

### 8. Reversing the String
```
Enter string: Mishree
eerhsiM
```

### 9. Palindrome Check
```
Enter a string: madam
madam is palindrome
```
```
Enter a string: class
class is not a palindrome
```
