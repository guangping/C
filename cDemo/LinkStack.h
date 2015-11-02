#include <iostream>

using namespace std;

class LinkStack;

class StackNode {
    friend class LinkStack;

private:
    int data;
    //结点数据
    StackNode *link;//结点链表指针
public:
    StackNode(int d = 0, StackNode *next = NULL) {
        data = d;
        link = next;
    }
};

class LinkStack {
private:
    StackNode *top;//栈顶指针
public:
    //是否为空
    bool isEmpty() { top == NULL ? true : false; };

    //大小
    int size() const;

    //添加值
    void push(int arg);

    //取值
    int pop();

    //显示
    void display();

    void display(StackNode *head);

    StackNode *getFirst();

    //反转
    void reverse(StackNode *head);//仅输出反转

    StackNode *reverseNew();

    //清除
    void clean();
};

int LinkStack::size() const {
    int size = 0;
    StackNode *p = top;
    while (p != NULL) {
        p = p->link;
        size++;
    }
    return size;
}

void LinkStack::push(int arg) {
    top = new StackNode(arg, top);
}

int LinkStack::pop() {
    StackNode *p = top;
    int data = p->data;
    top = top->link;
    delete p;
    return data;
}

void LinkStack::display() {
    StackNode *p = top;
    while (p != NULL) {
        cout << p->data << ",";
        p = p->link;
    }
    cout << endl;
}

void LinkStack::display(StackNode *head) {
    StackNode *p = head;
    while (p != NULL) {
        cout << p->data << ",";
        p = p->link;
    }
    cout << endl;
}

void LinkStack::reverse(StackNode *head) {
    if (!head) {
        return;
    } else {
        reverse(head->link);
        cout << head->data << ",";
    }
    cout << endl;
}

StackNode * LinkStack::reverseNew() {
    StackNode *prev, *curr;
    prev = NULL;
    curr = top;
    while (curr != NULL) {
        StackNode  *next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void LinkStack::clean() {
    if (top == NULL) {
        return;
    }
    StackNode *p;
    while (top != NULL) {
        p = top;
        top = top->link;
        delete p;
    }
}


StackNode *LinkStack::getFirst() {
    return top;
}



