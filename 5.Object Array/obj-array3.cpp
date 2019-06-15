#include <iostream>
using namespace std;

class ractangle{
    int height;
    int width;
public:
    int area();
    ractangle(int h, int w);
    int getHeight();
    int getWidth();

};

int ractangle::area(){
    return width*height;
}
    ractangle::ractangle(int h, int w){
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
   ractangle recArray[5]={ractangle(1,4),ractangle(2,4),ractangle(3,4),ractangle(4,4),ractangle(5,4)};

   for (int i=0; i<5; i++){
    cout <<endl <<"Width:"<<recArray[i].getWidth()<<" Height:"<<recArray[i].getHeight()  << " Area= "<< recArray[i].area() <<endl;
   }

}

