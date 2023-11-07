#include <iostream>
using namespace std;

int main(){
    int numbers[] ={10,20,30};
    int* ptr = numbers;
    cout<<*(ptr + (size(numbers)-1))<<endl;
    cout<<endl;
    cout<<endl;
    int i=size(numbers)-1;
    while(i>=0){
    cout<<*(ptr+i)<<endl;
    i--;
    };
    return 0;
}