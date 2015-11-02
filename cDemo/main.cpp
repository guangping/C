#include <iostream>
#include "LinkStack.h"

using namespace std;

int main() {
    /* cout << "Hello, World!" << endl;*/
    int items[10] = {1, 2, 5, 9, 30, 40, 65, 23, 45, 33};
    LinkStack linkStack;
    for (int i = 0; i < 5; i++) {
        linkStack.push(items[i]);
    }
/*    int size=linkStack.size();
    cout<<"size:"<<size<<endl;
    linkStack.display();
    linkStack.clean();*/

    /* int size = linkStack.size();
     cout << "size:" << size << endl;
     int data = linkStack.pop();
     cout << "data is:" << data << endl;*/
 /*   int size = linkStack.size();
    cout << "size:" << size << endl;
    linkStack.display();*/

/*    int data = linkStack.pop();
    int size = linkStack.size();
    cout << "size:" << size<<",data is:"<<data << endl;*/

/*    int size = linkStack.size();
    cout << "size:" << size<<endl;
    linkStack.clean();
    size = linkStack.size();
    cout << "size:" << size<<endl;*/

  /*  linkStack.display();
    cout<<"reverse"<<endl;*/

 /*   StackNode *head=linkStack.getFirst();
    linkStack.reverse(head);*/

    linkStack.display();
   // StackNode *head=linkStack.getFirst();
    StackNode *stackNode=linkStack.reverseNew();
    linkStack.display(stackNode);

   // linkStack.display();

    system("pause");
    return 0;
}