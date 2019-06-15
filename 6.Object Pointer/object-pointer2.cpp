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
   ractangle racArray[5];
   racArray[0].set(2,4);
   racArray[1].set(5,7);
   racArray[2].set(50,3);
   racArray[3].set(8,4);
   racArray[4].set(2,9);
    ractangle *ptr;
    ptr=racArray;
   for (int i=0; i<5; i++){
    cout <<endl <<"Width:"<<(ptr+i)->getWidth()<<" Height:"<<(ptr+i)->getHeight()  << " Area= "<< (ptr+i)->area() <<endl;
   }



}

