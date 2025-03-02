#include <iostream>

using namespace std;

template<typename T>
class Array {
private:
    T *arr;
    int idx;
    int Maxsize;
public:
    Array(int n) { // Constructor
        Maxsize = n;
        idx = 0;
        arr = new T[Maxsize];
    }

    Array(Array &other) { // copy Constructor (Deep Copy)
        Maxsize = other.Maxsize;
        idx = other.idx;
        arr = new T[Maxsize];
        for (int i = 0; i < idx; ++i) {
            arr[i] = other.arr[i];
        }
    }

    ~Array() {
        delete[] arr;
    }

    void push_back(T val) {
        if (idx == Maxsize)
            throw ("Array is Full");
        arr[idx++] = val;
    }

    void pop_back() {
        if (idx == 0)
            throw ("Array is Empty");
        idx--;
    }

    int size() {
        return idx;
    }

    void Display() {
        for (int i = 0; i < idx; ++i) {
            cout << arr[i] << ' ';
        }
    }

    T operator[](int i) {
        if (i < 0 or i >= idx)
            throw out_of_range("Index out of bounds");
        return arr[i];
    }

    Array &operator=(const Array &other) {
        if (this == &other)return *this;
        delete[] arr;
        Maxsize = other.Maxsize;
        idx = other.idx;
        arr = new T[Maxsize];
        for (int i = 0; i < idx; ++i) {
            arr[i] = other.arr[i];
        }
        return *this;
    }

    bool operator==(const Array &other) {
        if (idx != other.idx)return false;
        for (int i = 0; i < idx; ++i) {
            if(arr[i]!=other.arr[i])return false;
        }
        return true;
    }
};