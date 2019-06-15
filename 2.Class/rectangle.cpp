#include <iostream>
using namespace std;

class Ractangle{
public:
    int height;
    int width;
    int area(){
        return height*width;
    }
};

int main(){
    Ractangle obj;
    obj.height=5;
    obj.width=6;

    cout << "Area = "<<obj.area()<<endl;
}
