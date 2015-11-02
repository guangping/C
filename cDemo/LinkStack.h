#include <iostream>

using namespace std;

class LinkStack;

class StackNode {
    friend class LinkStack;

private:
    int data;
    //�������
    StackNode *link;//�������ָ��
public:
    StackNode(int d = 0, StackNode *next = NULL) {
        data = d;
        link = next;
    }
};

class LinkStack {
private:
    StackNode *top;//ջ��ָ��
public:
    //�Ƿ�Ϊ��
    bool isEmpty() { top == NULL ? true : false; };

    //��С
    int size() const;

    //���ֵ
    void push(int arg);

    //ȡֵ
    int pop();

    //��ʾ
    void display();

    void display(StackNode *head);

    StackNode *getFirst();

    //��ת
    void reverse(StackNode *head);//�������ת

    StackNode *reverseNew();

    //���
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



