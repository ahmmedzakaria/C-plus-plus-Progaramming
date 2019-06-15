#include <iostream>
using namespace std;

class rectangle{
    int height;
    int width;
public:
    int area();
    void set(int height, int width);
    void printRact();
    rectangle scanRact();
    int getHeight();
    int getWidth();

};

int rectangle::area(){
    return this->width*this->height;
}
void rectangle::set(int height, int width){
    this->height=height;
    this->width=width;
}
rectangle rectangle::scanRact(){
    cout << "Please give Rectangle Height and Width..."<<endl;
    int height,width;
    cin >>height>>width;

    rectangle obj;
    obj.set(height,width);
    return obj;
}
void rectangle::printRact(){
    cout <<endl <<"Width:"<<this->width<<" Height:"<<this->height  << " Area= "<< this->area() <<endl;
}
int rectangle::getHeight(){
    return this->height;
}
int rectangle::getWidth(){
    return this->width;
}


int main(){
  rectangle obj;
  obj=obj.scanRact();
  obj.printRact();
}



