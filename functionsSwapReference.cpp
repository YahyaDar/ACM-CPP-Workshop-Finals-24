#include <iostream>
using namespace std;

//make a function named swap to swap two variables
void swap(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
}
int main(){
    int a=5,b=10;
    swap(a, b);
    cout<<a<<" "<<b;
    return 0;
}
