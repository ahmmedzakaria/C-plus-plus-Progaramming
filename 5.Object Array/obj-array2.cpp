#include <iostream>
using namespace std;

class ractangle{
    int height;
    int width;
public:
    int area();
    ractangle(int h);
    int getHeight();
    int getWidth();

};

int ractangle::area(){
    return width*height;
}
    ractangle::ractangle(int h){
    height=h;
    width=2*h;
}
int ractangle::getHeight(){
    return height;
}
int ractangle::getWidth(){
    return width;
}


int main(){
   ractangle recArray[5]={1,2,3,4,5};

   for (int i=0; i<5; i++){
    cout <<endl <<"Width:"<<recArray[i].getWidth()<<" Height:"<<recArray[i].getHeight()  << " Area= "<< recArray[i].area() <<endl;
   }



}

