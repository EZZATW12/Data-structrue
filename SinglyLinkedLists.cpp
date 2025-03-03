//
// Created by ezzat on 3/3/2025.
//
#include <iostream>

using namespace std;

template<typename T>
class Node {
    T elm;
    Node<T> *Next;

};

template<typename T>
class SinglyLinkedLists {
private:
    Node<T> *Head;
public:
    SinglyLinkedLists() {
        Head = NULL;
    }

    bool Empty() {
        return Head == NULL;
    }

    T Get_Front() {
        return Head->elm;
    }

    void Add_Front(T val) {
        Node<T> New = new Node<T>();
        New.elm = val;
        New.Next = Head;
        Head = New;
    }

    void Remove_Front() {
        Node<T> Old = new Node<T>();
        Old = Head;
        Head = Head->Next;
        delete Old;
    }

    ~SinglyLinkedLists() {
        while (Head != NULL)Remove_Front();
    }
};