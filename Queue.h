#ifndef QUEUE_H
#define QUEUE_H

#include <stdexcept>
#include "C:/Users/Admin/VSCODE/Array/Array/Array.h"

template<typename T>
class Queue {
private:
    Array<T> data;

public:
    Queue() : data() {}

    void clear() {
        data.clear();
    }

    T pop() {
        if (data.getSize() == 0) {
            throw std::out_of_range("Queue is empty");
        }
        T frontElement = data[0];
        data.erase(0);
        return frontElement;
    }

    T top() const {
        if (data.getSize() == 0) {
            throw std::out_of_range("Queue is empty");
        }
        return data[0];
    }

    void push(const T& value) {
        data.append(value);
    }

    bool isEmpty() const {
        return data.getSize() == 0;
    }

    size_t size() const {
        return data.getSize();
    }
};

#endif
