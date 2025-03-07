//
// Created by ezzat on 3/7/2025.
//
template<typename T>
struct Node {
    T elm;
    Node<T> *nxt;
};

template<typename T>
struct CircularlyLinkedLists {
    Node<T> *cursor;

    CircularlyLinkedLists() {
        cursor = nullptr;
    }

    bool empty() {
        return cursor == nullptr;
    }

    T front() {
        return cursor->nxt->elm;
    }

    T back() {
        return cursor->elm;
    }

    void advance() {
        cursor = cursor->nxt;
    }

    void add(T val) {
        Node<T> *curr = new Node<T>();
        curr->elm = val;
        if (empty()) {
            curr->nxt = curr;
            return;
        }
        curr->nxt = curr->nxt;
        cursor->nxt = curr;
    }

    void remove(T val) {
        Node<T> *curr = cursor->nxt;
        if (curr == cursor) {
            cursor= nullptr;
            return;
        }
        cursor->nxt = curr->nxt;
        delete curr;
    }
};