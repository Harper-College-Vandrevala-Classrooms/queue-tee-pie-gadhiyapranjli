// QueueTees.cpp
#include "QueueTees.hpp"
#include <iostream>

QueueTees::QueueTees() : front(0), back(0), currentSize(0) {
    for (int i = 0; i < 5; ++i) {
        queue[i] = nullptr;
    }
}

void QueueTees::enqueue(Cutie& cutie) {
    if (currentSize < 5) { 
        queue[back] = &cutie;
        back = (back + 1) % 5; 
        ++currentSize;
    } else {
        cout << "Queue is full! Cannot enqueue." << endl;
    }
}

Cutie* QueueTees::dequeue() {
    if (currentSize > 0) {
        Cutie* frontCutie = queue[front];
        queue[front] = nullptr;  
        front = (front + 1) % 5; 
        --currentSize;
        return frontCutie;
    } else {
        cout << "Queue is empty! Cannot dequeue." << endl;
        return nullptr;
    }
}

int QueueTees::size() const {
    return currentSize;
}
