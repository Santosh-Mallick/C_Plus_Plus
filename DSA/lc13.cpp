#include <iostream>
#include <limits.h>  // For INT_MIN

using namespace std;

// Class definition for a queue
class Queue {
public:
    int front, rear, size;
    unsigned capacity;
    int* arr;

    // Constructor to create a queue with a given capacity
    Queue(unsigned capacity) {
        this->capacity = capacity;
        front = size = 0;
        rear = capacity - 1;
        arr = new int[capacity];
    }

    // Function to check if the queue is empty
    bool isempty() {
        return (size == 0);
    }

    // Function to check if the queue is full
    bool isfull() {
        return (size == capacity);
    }

    // Function to add an item to the queue (enqueue)
    void enqueue(int item) {
        if (isfull())
            return;
        rear = (rear + 1) % capacity;
        arr[rear] = item;
        size++;
        cout << item << " enqueued to the queue\n";
    }

    // Function to get the front of the queue
    int getFront() {
        if (isempty())
            return INT_MIN;  // Queue is empty, returning INT_MIN
        return arr[front];  // Return front element
    }
};

int main() {
    Queue queue(10);  // Create a queue with capacity 10

    // Example usage
    cout << "Front of queue: " << queue.getFront() << endl;  // Should return INT_MIN since queue is empty

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);

    cout << "Front of queue: " << queue.getFront() << endl;  // Should return 10

    return 0;
}
