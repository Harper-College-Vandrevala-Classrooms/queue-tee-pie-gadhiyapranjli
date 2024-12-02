
#include <iostream>
#include "QueueTees.hpp"
#include "Puppy.hpp"
#include "Kitty.hpp"
#include "PygmyMarmoset.hpp"

using namespace std;

int main() {
    Puppy puppy;
    Kitty kitty;
    PygmyMarmoset marmoset;

    QueueTees queue;

    cout << "Queue size: " << queue.size() << endl;

    queue.enqueue(puppy);
    queue.enqueue(kitty);
    queue.enqueue(marmoset);

    cout << "Queue size after enqueuing 3 cuties: " << queue.size() << endl;

    Cutie* cutie = queue.dequeue();
    if (cutie != nullptr) {
        cout << "Dequeued: " << cutie->description() << " (Cuteness: " << cutie->cuteness_rating() << "/10)" << endl;
    }

    cutie = queue.dequeue();
    if (cutie != nullptr) {
        cout << "Dequeued: " << cutie->description() << " (Cuteness: " << cutie->cuteness_rating() << "/10)" << endl;
    }

    cutie = queue.dequeue();
    if (cutie != nullptr) {
        cout << "Dequeued: " << cutie->description() << " (Cuteness: " << cutie->cuteness_rating() << "/10)" << endl;
    }

    return 0;
}
