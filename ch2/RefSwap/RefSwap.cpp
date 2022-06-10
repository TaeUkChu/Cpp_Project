#include <iostream>
using namespace std;

void SwapByRef1(int *ptr1, int *ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void SwapByRef2(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1=ref2;
    ref2=temp;
}

int main(void)
{
    int val1=10;
    int val2=20;

    SwapByRef1(&val1,&val2);
    cout<<"val1: "<<val1<<endl;
    cout<<"val2: "<<val2<<endl;
    SwapByRef2(val1,val2);
    cout<<"val1: "<<val1<<endl;
    cout<<"val2: "<<val2<<endl;
    return 0;

}