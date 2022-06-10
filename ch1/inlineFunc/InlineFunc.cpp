#include <iostream>
//inline 함수는 컴파일러에 의해서 처리됨. 매크로 함수(#define)은 
inline int SQUARE(int x)
{
    return x*x;
}

int main(void)
{
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;
    return 0;
}