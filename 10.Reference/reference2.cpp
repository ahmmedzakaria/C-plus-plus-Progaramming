#include <iostream>
using namespace std;
int fun(int &a){
    return a;
}
int main(){
    int x=9;
    cout << fun(x) <<endl; //Mast pass a variable
    //cout << fun(9) <<endl; //Invalid because we pass a constant

    return 0;
}
