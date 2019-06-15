#include <iostream>
using namespace std;

class ractangle{
    int height;
    int width;
public:
    ractangle();
    ~ractangle();
};
ractangle::ractangle(){cout << "Constructor"<<endl;}
ractangle::~ractangle(){cout << "Destructor"<<endl;}

int main(){
   ractangle obj;
}


