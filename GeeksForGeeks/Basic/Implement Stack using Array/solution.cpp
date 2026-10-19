class myStack {
  public:
    int size;
    vector<int> stack;
    int index = 0;
    myStack(int n) {
        size = n;
        stack.resize(n);
    }

    bool isEmpty() {
        return index == 0;
    }

    bool isFull() {
        return index == size;
    }

    void push(int x) {
        if(index != size){
            stack[index] = x;
            index++;
        }
    }

    void pop() {
        if(index != 0) index--;
    }

    int peek() {
        if(index == 0) return -1;
        return stack[index-1];
    }
};