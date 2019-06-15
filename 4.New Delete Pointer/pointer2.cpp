#include <iostream>
using namespace std;

main(){
    int *ptr;
    ptr =new int(5);
    cout <<*ptr<<endl;
    delete(ptr);

    return 0;
}
