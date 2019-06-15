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
   ractangle recArray[5];
   recArray[0].set(2,4);
   recArray[1].set(5,7);
   recArray[2].set(50,3);
   recArray[3].set(8,4);
   recArray[4].set(2,9);

   for (int i=0; i<5; i++){
    cout <<endl <<"Width:"<<recArray[i].getWidth()<<" Height:"<<recArray[i].getHeight()  << " Area= "<< recArray[i].area() <<endl;
   }



}

