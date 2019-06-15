#include <iostream>
using namespace std;

class ractangle{
    int height;
    int width;
public:
    int area();
    int getHeight();
    int getWidth();
    ractangle(int h, int w);
    ~ractangle();
};
ractangle::ractangle(int h, int w){
        height=h;
        width=w;
        cout << "Constructor| Width:"<<width<<" Height:"<<height <<endl;
    }
int ractangle::area(){
    return width*height;
}
int ractangle::getHeight(){
    return height;
}
int ractangle::getWidth(){
    return width;
}
ractangle::~ractangle(){
        cout << "Destructor| Width:"<<width<<" Height:"<<height <<endl;
    }

int main(){
   ractangle obj1(3,2), obj2(7,8);
    // Here object are stored in stack
   cout <<endl <<"Width:"<<obj1.getWidth()<<" Height:"<<obj1.getHeight()  << " Area= "<< obj1.area() <<endl;
   cout <<endl <<"Width:"<<obj2.getWidth()<<" Height:"<<obj2.getHeight()  << " Area= "<< obj2.area() <<endl;
   //cout << "Area= " << obj2.area() <<endl;
}
