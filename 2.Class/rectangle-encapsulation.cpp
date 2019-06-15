#include <iostream>
using namespace std;

class Ractangle{
    int height;
    int width;
public:
    void set(int h, int w);
    int area();
};
int Ractangle::area(){
        return height*width;
    }
void Ractangle::set(int h, int w){
        height=h;
        width=w;
    }

int main(){
    Ractangle obj;
    obj.set(5,6);

    cout << "Area = "<<obj.area()<<endl;
}

