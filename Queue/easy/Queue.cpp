#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int front, rear, size;
    int capacity;
    int* array;
};


Queue* createQueue(int capacity){
    Queue* queue = new Queue();
    queue->capacity=capacity;
    queue->front = queue->size = 0;

    queue->rear =-1; //TODO: dont know why?
    queue->front =-1;
    queue->array = new int[queue->capacity];
    return queue;
}

int isFull(Queue* queue) {
    return queue->size == queue->capacity;
}

int isEmpty(Queue* queue) {
    if(queue->rear == queue->front) return 1;
    return 0;
}

void enQueue(Queue* queue, int val) {
    if(isFull(queue)) {
        cout<<"overflow"<<endl;
        return;
    }

    queue->rear++;
    queue->array[queue->rear] = val;
    printf("Enqued element: %d\n", val);
}

void deQueue(Queue* queue) {
    if(isEmpty(queue)) {
        cout<<"Underflow"<<endl;
        return;
    }
    queue->front++;

    int a = queue->array[queue->front];
    cout<<a<<endl;
}


int main() {

    Queue* queue = createQueue(10);

    enQueue(queue,1);
    enQueue(queue,2);
    enQueue(queue,3);
    enQueue(queue,4);
    deQueue(queue);
    deQueue(queue);
    deQueue(queue);
    deQueue(queue);
    deQueue(queue);

    return 0;
}