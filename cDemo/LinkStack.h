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
    bool isEmpty(){top==NULL? true: false;};//�Ƿ�Ϊ��
    int size();//��С
    void push(int arg);//���ֵ
    int pop();//ȡֵ
    void display();//��ʾ
    void reverse();//��ת
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


