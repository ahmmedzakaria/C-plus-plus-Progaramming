#include <iostream>
using namespace std;

class ractangle{
    int height;
    int width;
public:
    int area();
    void set(int h, int w);
    int getHeight();
    int getWidth();

};

int ractangle::area(){
    return width*height;
}
void ractangle::set(int h, int w){
    height=h;
    width=w;
}
int ractangle::getHeight(){
    return height;
}
int ractangle::getWidth(){
    return width;
}


int main(){
  ractangle obj;
  ractangle *p;
  obj.set(4,5);
  cout <<endl <<"Width:"<<obj.getWidth()<<" Height:"<<obj.getHeight()  << " Area= "<< obj.area() <<endl;
    p=&obj;
    p->set(7,8);

  cout <<endl <<"Width:"<<p->getWidth()<<" Height:"<<p->getHeight()  << " Area= "<< p->area() <<endl;





}


