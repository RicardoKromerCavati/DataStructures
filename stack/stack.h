typedef int StackItem;
const int MAX_ITEM_COUNT = 5;

class Stack
{
private:
    int stackSize;
    int *stackObj;

public:
    Stack();
    ~Stack();

    bool isFull();
    bool isEmpty();

    void push(StackItem value);
    StackItem pop();
    void print();
    int getLength();
};