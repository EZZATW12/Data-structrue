# Data Structures Implementation in C++

## Overview
This repository contains implementations of fundamental data structures in C++. Each data structure is implemented as a class template to support generic data types. The repository includes:
- **Dynamic Array**
- **Singly Linked List**
- **Doubly Linked List**

## Features
### 1. Dynamic Array (`Array.cpp`)
- Template-based implementation
- Supports `push_back`, `pop_back`, and `size()`
- Overloaded operators for deep copying (`=`, `==`)
- Exception handling for boundary conditions

### 2. Singly Linked List (`SinglyLinkedLists.cpp`)
- Supports basic operations:
  - `Add_Front(value)`: Insert a node at the front
  - `Remove_Front()`: Delete a node from the front
  - `Get_Front()`: Retrieve the first element
- Automatic memory cleanup in the destructor

### 3. Doubly Linked List (`DoublyLinkedList.cpp`)
- Supports:
  - `AddFront(value)`, `AddBack(value)`: Insert nodes
  - `RemoveFront()`, `RemoveBack()`: Delete nodes
  - `insertAt(index, value)`: Insert at a specific position
  - `RemoveAt(index)`: Remove at a specific position
  - `clear()`: Remove all elements
- Uses head and tail dummy nodes for efficient operations

## Compilation & Execution
To compile any file, use g++:
```bash
 g++ -o main Array.cpp
 ./main
```
Similarly, replace `Array.cpp` with `SinglyLinkedLists.cpp` or `DoublyLinkedList.cpp` to test other implementations.

## Cloning the Repository
To clone this repository, use the following command:
```bash
git clone https://github.com/EZZATW12/Data-structrue.git
```

## Contributions
Feel free to fork the repository and submit pull requests for improvements or additional features.

## License
This project is open-source and free to use under the MIT License.

