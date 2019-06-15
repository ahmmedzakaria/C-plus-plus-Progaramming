#include <iostream>
using namespace std;

main(){
    int *ptr;
    ptr =new int[6];
    ptr[0]=5;
    ptr[1]=90;
    cout <<*ptr<<endl;
    cout <<ptr[0]<<endl;
    cout <<*ptr+1<<endl;
    cout <<ptr[1]<<endl;
    delete(ptr);

    return 0;
}
