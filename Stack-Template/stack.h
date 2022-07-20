template <typename T>
class Stack
{
private:
    T array[5];
    int top;

public:
    Stack();
    void push(T n);
    T pop();
    bool isFull();
    bool isEmpty();
};
