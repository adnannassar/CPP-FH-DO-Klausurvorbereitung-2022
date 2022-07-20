#include "stack.h"

template <typename T>
Stack<T>::Stack() : top(-1) {}

template <typename T>
void Stack<T>::push(T n)
{
    if (!isFull())
    {
        array[++top] = n;
    }
}

template <typename T>
T Stack<T>::pop()
{
    if (isEmpty())
    {
        return T();
    }
    else
    {
        return array[top--];
    }
}

template <class T>
bool Stack<T>::isFull()
{
    return top == 4;
}

template <class T>
bool Stack<T>::isEmpty()
{
    return top == -1;
}