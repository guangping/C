#include <iostream>
#include "LinkStack.h"
using namespace std;

int main() {
   /* cout << "Hello, World!" << endl;*/
    int items[10]={1,2,5,9,30,40,65,23,45,33};
    LinkStack linkStack;
    for(int i=0;i<5;i++){
        linkStack.push(items[i]);
    }
    int size=linkStack.size();
    cout<<"size:"<<size<<endl;
    linkStack.display();
    linkStack.clean();

    system("pause");
    return 0;
}