//
// Created by ezzat on 3/3/2025.
//
#include <iostream>

using namespace std;

template<typename T>
class Node {
    Node<T> *Next;
    Node<T> *Prev;
    T Data;
};

template<typename T>
class DoublyLinkedList {
private:
    Node<T> *Head;
    Node<T> *Tail;
    int length;
public:
    DoublyLinkedList() {
        Head = new Node<T>();
        Tail = new Node<T>();
        Head->Next = Tail;
        Tail->Prev = Head;
        length = 1;
    }

    bool Empty() {
        return Head->Next == Tail;
    }

    Node<T> GetFront() {
        return Head->Next->Data;
    }

    Node<T> GetBack() {
        return Tail->Prev->Data;
    }

    void Add(Node<T> *v, T elm) {
        Node<T> *New = new Node<T>();
        New->Data = elm;
        New->Next = v;
        New->Prev = v->Prev;
        v->Prev->Next = v->Prev = New;
        length++;
    }

    void Remove(Node<T> *elm) {
        Node<T> *Nxt = elm->Next;
        Node<T> *prv = elm->Prev;
        prv->Next = Nxt;
        Nxt->Prev = prv;
        delete elm;
        length--;
    }

    void AddFront(T val) {
        Add(Head->Next, val);
    }

    void AddBack(T val) {
        Add(Tail, val);
    }

    void RemoveFront(T val) {
        Add(Head->Next, val);
    }

    void RemoveBack(T val) {
        Remove(Tail->Prev, val);
    }

    void insertAt(int idx, T val) {
        if (idx < 1 or idx > length) {
            cout << "Invalid position!" << endl;
            return;
        }
        Node<T> *cur = Head;
        for (int i = 0; i < idx; ++i)
            cur = cur->Next;
        Add(cur, val);
    }

    void RemoveAt(int idx) {
        if (idx < 1 or idx > length) {
            cout << "Invalid position!" << endl;
            return;
        }
        Node<T> *cur = Head;
        for (int i = 0; i < idx; ++i)
            cur = cur->Next;
        Remove(cur);
    }
    void clear() {
        while (!Empty()) RemoveFront();
    }
};