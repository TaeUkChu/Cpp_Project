//구조체 함수와 연관됨 함수들이지만 구조체 바깥에 있어서 좋지 않은 코딩이다.

#include <iostream>
using namespace std;

#define ID_LEN      20
#define MAX_SPD     200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

struct Car
{
    char gamerID[ID_LEN]; 
    int fuelGauge;
    int curSpeed;
    /*
    shift + alt + a
    */
};

void ShowCarState(const Car &car) // const 쓰는 이유? -> 출력만을 의미하기에
    {
        cout<<"소유자 ID: "<<car.gamerID<<endl;
        cout<<"연료량 : "<<car.fuelGauge<<endl;
        cout<<"현재 속도: "<<car.curSpeed<<"km/s"<<endl<<endl;
    }

    void Accel(Car &car) // const 없는 이유?
    {
        if(car.fuelGauge<=0)
            return;
        else
            car.fuelGauge-=FUEL_STEP;
        if(car.curSpeed + ACC_STEP>=MAX_SPD)
        {
            car.curSpeed=MAX_SPD;
            return;
        }
        car.curSpeed+=ACC_STEP;
    }

    void Break(Car &car)
    {
        if(car.curSpeed<BRK_STEP)
        {
            car.curSpeed=0;
            return;
        }
        car.curSpeed-=BRK_STEP;
    }

int main(void)
{
    Car run99 = {"run99", 100, 0};
    Accel(run99);
    Accel(run99);
    ShowCarState(run99);
    Break(run99);
    ShowCarState(run99);

    Car Sped77={"Sped77", 100,0};
    Accel(Sped77);
    Break(Sped77);
    ShowCarState(Sped77);
    return 0;
}



