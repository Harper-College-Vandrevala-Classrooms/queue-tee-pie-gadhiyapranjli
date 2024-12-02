
#ifndef QUEUETEES_HPP
#define QUEUETEES_HPP

#include "Cutie.hpp"

class QueueTees {
private:
    Cutie* queue[5];    
    int front;         
    int back;           
    int currentSize;    

public:
    QueueTees();
    void enqueue(Cutie& cutie);
    Cutie* dequeue();
    int size() const;
};

#endif