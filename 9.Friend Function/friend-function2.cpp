#include <iostream>
using namespace std;
class rectangle;
class cost{
    int costRate;
    public:
        void setValue(int costRate){this->costRate=costRate;}
        int totalCost(rectangle obj);
};

class rectangle{
    int height;
    int width;
public:
    int area();
    void set(int height, int width);
    void printRact();
    int getHeight();
    int getWidth();
    friend int cost::totalCost(rectangle obj);

};

int rectangle::area(){
    return this->width*this->height;
}
void rectangle::set(int height, int width){
    this->height=height;
    this->width=width;
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
int cost::totalCost(rectangle obj){
            return costRate*obj.height*obj.width;
        }


int main(){
  rectangle obj;
  obj.set(5,6);
  obj.printRact();
  cost c;
  c.setValue(100);
  cout << "Total Cost = "<<c.totalCost(obj)<<endl;
}
