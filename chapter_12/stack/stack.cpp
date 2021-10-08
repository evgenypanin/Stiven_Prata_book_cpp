#include "stack.h"

Stack::Stack(int n)
{
    pitems = new Item[n];
    top = 0;
    size = 0;
}

Stack::Stack(const Stack & st)
{
    pitems = new Item[st.size];
    top = st.top;
    size = st.size;
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        pitems[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = pitems[top--];
        return true;
    }
    else
        return false;
}

Stack & Stack::operator=(const Stack & st)
{
    delete [] pitems;
    pitems = new Item[st.size];
    pitems = st.pitems;
    size = st.size;
    top = st.top;
    return *this;
}
