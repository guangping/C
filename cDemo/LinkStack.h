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

    //反转
    void reverse();

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

}

void LinkStack::display() {
    StackNode *p = top;
    while (p != NULL) {
        cout << p->data << ",";
        p = p->link;
    }
    cout << endl;
}

void LinkStack::reverse() {

}

void LinkStack::clean() {
    if (top == NULL) {
        return;
    }
    int count = size();
    cout << "clean before:" << count;
    StackNode *p;
    while (top != NULL) {
        p = top;
        top = top->link;
        delete p;
    }
    cout << "clean back:" << count<<endl;
}


