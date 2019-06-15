#include <iostream>
using namespace std;

class ractangle{
    int height;
    int width;
public:
    int area();
    ractangle(int h, int w);
    ~ractangle();
};
ractangle::ractangle(int h, int w){
        height=h;
        width=w;
        cout << "Constructor"<<endl;
    }
int ractangle::area(){
    return width*height;
}
ractangle::~ractangle(){
        cout << "Destructor"<<endl;
    }

int main(){
   ractangle obj(3,2);

   cout << "Area= " << obj.area() <<endl;
}
