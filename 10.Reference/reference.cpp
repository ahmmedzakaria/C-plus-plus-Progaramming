#include <iostream>
using namespace std;
int main(){
    int i;
    i=5;
    cout <<"i= "<<i<<endl;

    int *p;
    p=&i;
    cout <<"*p= "<<*p<<endl;

    int& r=i;
    cout <<"r= "<<r<<endl;

    return 0;
}
