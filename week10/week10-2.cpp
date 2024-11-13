///week10-2.cpp 練習 class

#include <iostream>
using namespace std;
///你輸入 class cat在加大括號 codeblocks 他幫你加好下括號
class Mouse{
public:
    void print(){
            cout<<"I am a mouse, mou mou\n";
    }
};
class Cat{
public:
    void print(){
        cout<<"I am a cat, meow meow\n";
    }
};
int main()
{
    Mouse mouse1, mouse2;
    Cat cat1, cat2;
    mouse1.print();
    mouse2.print();
    cat1.print();
    cat2.print();
}
