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
    int size() const ;

    //���ֵ
    void push(int arg);

    //ȡֵ
    int pop();

    //��ʾ
    void display();

    //��ת
    void reverse();
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

}

void LinkStack::display() {

}

void LinkStack::reverse() {

}


