# Data Structures Implementation in C++

## Overview
This repository contains implementations of fundamental data structures in C++. Each data structure is implemented as a class template to support generic data types. The repository includes:
- **Dynamic Array**
- **Singly Linked List**
- **Doubly Linked List**
- **Circularly Linked List**

## Features
### 1. Dynamic Array (`Array.cpp`)
- Template-based implementation
- Provides operations such as:
  - `push_back(value)`: Add an element to the end
  - `pop_back()`: Remove the last element
  - `size()`: Get the number of elements
- Overloaded operators for deep copying (`=`, `==`)
- Exception handling for boundary conditions

### 2. Singly Linked List (`SinglyLinkedLists.cpp`)
- Provides operations such as:
  - `addFront(value)`: Insert a node at the front
  - `removeFront()`: Delete a node from the front
  - `getFront()`: Retrieve the first element
- Automatic memory cleanup in the destructor

### 3. Doubly Linked List (`DoublyLinkedList.cpp`)
- Provides operations such as:
  - `addFront(value)`, `addBack(value)`: Insert nodes
  - `removeFront()`, `removeBack()`: Delete nodes
  - `insertAt(index, value)`: Insert at a specific position
  - `removeAt(index)`: Remove at a specific position
  - `clear()`: Remove all elements
- Uses head and tail dummy nodes for efficient operations

### 4. Circularly Linked List (`CircularlyLinkedLists.cpp`)
- Provides operations such as:
  - `front()`: Retrieve the first element
  - `back()`: Retrieve the last element
  - `advance()`: Move the cursor to the next element
  - `add(value)`: Insert a node after the cursor
  - `remove(value)`: Remove a node
- Uses a `cursor` pointer to efficiently manage the circular structure

## Compilation & Execution
To compile and run any file, use the following command:
```bash
 g++ -o main Array.cpp
 ./main
```
Similarly, replace `Array.cpp` with `SinglyLinkedLists.cpp`, `DoublyLinkedList.cpp`, or `CircularlyLinkedLists.cpp` to test other implementations:
```bash
 g++ -o main SinglyLinkedLists.cpp
 ./main
```
```bash
 g++ -o main DoublyLinkedList.cpp
 ./main
```
```bash
 g++ -o main CircularlyLinkedLists.cpp
 ./main
```
Ensure that you have `g++` installed. Alternatively, you can use `clang++`.

## Cloning the Repository
To clone this repository, use the following command:
```bash
git clone https://github.com/EZZATW12/Data-structures.git
```

## Contributions
Feel free to fork the repository and submit pull requests for improvements or additional features.

## License
This project is open-source and free to use under the MIT License.

