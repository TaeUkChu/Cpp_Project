#include <iostream>
using namespace std;

int RefRetFuncTwo(int &ref) //int로 바뀜.
{
    ref++;
    return ref;
}

int main(void)
{
    int num1=1;
    int num2 = RefRetFuncTwo(num1);
    // int &num2 = RefRetFuncTwo(num1); (x)
    //반환 자료형이 int형이라 안됨.

    num1+=1;
    num2+=100;
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
    return 0;
}