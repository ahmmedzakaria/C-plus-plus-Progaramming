#include <iostream>
using namespace std;

class ractangle{
    int height;
    int width;
public:
    int area();
    void set(int height, int width);
    int getHeight();
    int getWidth();

};

int ractangle::area(){
    return this->width*this->height;
}
void ractangle::set(int height, int width){
    this->height=height;
    this->width=width;
}
int ractangle::getHeight(){
    return this->height;
}
int ractangle::getWidth(){
    return this->width;
}


int main(){
  ractangle obj;
  obj.set(4,5);
  cout <<endl <<"Width:"<<obj.getWidth()<<" Height:"<<obj.getHeight()  << " Area= "<< obj.area() <<endl;

    ractangle *p;
    p=&obj;
    p->set(7,8);
  cout <<endl <<"Width:"<<p->getWidth()<<" Height:"<<p->getHeight()  << " Area= "<< p->area() <<endl;




}



