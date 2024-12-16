#include <iostream>
#include <climits>
using namespace std;
class Stack
{
    int top;
    int cap;
    // int arr[10000];
    int *arr;

public:
    Stack(int n)
    {
        top = -1;
        cap = n;
        arr = new int[cap];
    }
    void push(int val)
    {
        if (top < cap - 1)
        {
            top++;
            arr[top] = val;
        }
    }
    void pop()
    {
        if (top != -1)
        {
            top--;
        }
    }
    int peek()
    {
        if (top != -1)
        {
            return arr[top];
        }
        return -1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == cap - 1;
    }
};
int main()
{
    Stack st(2);
    st.push(1);
    st.push(11);
    st.push(8);
    st.push(24);
    cout << st.peek() << endl;
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // cout<<st.peek()<<endl;
    // cout<<st.isEmpty()<<endl;

    return 0;
}

// Stacks :

// 1. Implement using Arrays
// 2. Implement Using Linked List

#include <iostream>
#include <climits>
using namespace std;
class ListNode{
public:
int val;
ListNode*next;
ListNode(int val)
{
this->val = val;
next =nullptr;
}
};
class Stack {
int top;
ListNode*head;
public:
Stack()
{
head=nullptr;
}
bool isEmpty()
{
return head==nullptr;
}
int peek(){
if(head!=nullptr)
{
return head->val;
}
return -1;
}
void push(int val)
{
// Insert at head
ListNode*temp = new ListNode(val);
if(head==nullptr)
{
head = temp;
}
else
{
temp->next = head;
head = temp;
}
}
void pop()
{
if(head!=nullptr)
{
ListNode*start = head;
head = head->next;
start->next=nullptr;

}
}
};
int main()
{
Stack st;
st.push(1);
st.push(11);
st.push(8);
st.push(24);
cout<<st.peek()<<endl;
st.pop();
st.pop();
cout<<st.isEmpty()<<endl;
st.pop();
st.pop();
cout<<st.peek()<<endl;
cout<<st.isEmpty()<<endl;



return 0;
}

// Stacks :

// 1. Implement using Arrays
// 2. Implement Using Linked List