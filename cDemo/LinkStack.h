//
// Created by lance on 2015/11/1.
//
#include <iostream>
using namespace std;



class  LinkStack;

class  StackNode{
private:
    int data;
    StackNode *link;
public:
    StackNode(int d,StackNode *node){
        data=d;
        link=node;
    }
};

class LinkStack{
private:
    StackNode *top;
public:
    bool isEmpty(){top==NULL? true: false;};//是否为空
    int size();//大小
    void push(int arg);//添加值
    int pop();//取值
    void display();//显示
    void reverse();//反转
};
int LinkStack::size() {
    return 0;
}

void LinkStack::push(int arg) {

}

int LinkStack::pop() {

}

void LinkStack::display() {


}

void LinkStack::reverse() {

}


