class myQueue {

  public:
    vector<int> queue;
    int index = 0;
    int size;
    
    myQueue(int n) {
        size = n;
        queue.resize(n);
    }

    bool isEmpty() {
        return index == 0;
    }

    bool isFull() {
        return index == size;
    }

    void enqueue(int x) {
        if(!isFull()){
            queue[index] = x;
            index++;
        }
    }

    void dequeue() {
        if(!isEmpty()){
            for(int i = 1; i <= index; i++){
                queue[i-1] = queue[i];
            }
            index--;
        }
    }

    int getFront() {
        if(isEmpty()) return -1;
        return queue[0];
    }

    int getRear() {
        if(isEmpty()) return -1;
        return queue[index-1];
    }
};