#include<iostream>
using namespace std;

bool IsPositive(int num)
{
    if(num<0)
        return false;
    else
        return  true;
}

int main(void)
{
    bool ispos;
    int num;
    cout<<"input number: ";
    cin>>num;

    ispos=IsPositive(num);
    if(ispos)
        cout<<"Positive"<<endl;
    else
        cout<<"Negative"<<endl;

    return 0;
}