#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{
    stackSize = 0;
    stackObj = new StackItem[MAX_ITEM_COUNT];
}

Stack::~Stack()
{
    delete[] stackObj;
}

bool Stack::isFull()
{
    return stackSize == MAX_ITEM_COUNT;
}

bool Stack::isEmpty()
{
    return stackSize == 0;
}

void Stack::push(StackItem value)
{
    if (isFull())
    {
        cout << "Stack is full, can't push";
        return;
    }

    stackObj[MAX_ITEM_COUNT] = value;
    stackSize++;
}

StackItem Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty, can't pop";
        return 0;
    }

    return stackObj[--stackSize];
}

void Stack::print()
{
    cout << "Stack: [";
    // TODO: Redo this method to avoid using for loop
    for (int i = 0; i < stackSize; i++)
    {
        cout << stackObj[i] << " ";
    }
    cout << "]\n";
}

int Stack::getLength()
{
    return stackSize;
}
