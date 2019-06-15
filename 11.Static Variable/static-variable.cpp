
#include <iostream>
using namespace std;
class staticMember{
public:
    static int a;
    int b;
    void print(){
        cout <<"Static a = "<<++a <<" member b = "<<++b<<endl;
    }
    staticMember(){
        b=0;
        //a=0;
    }
};
int staticMember::a;
int main(){
    staticMember obj1,obj2,obj3;
    obj1.print();
    obj2.print();
    obj3.print();

    return 0;
}
