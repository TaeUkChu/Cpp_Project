#include <iostream>
using namespace std;

namespace CAR_CONST
{
    enum{
        ID_LEN      =20,
        MAX_SPD     =200,
        FUEL_STEP   =2,
        ACC_STEP    =10,
        BRK_STEP    =10
    };
}

struct Car
{
    char gamerID[CAR_CONST::ID_LEN]; 
    int fuelGauge;
    int curSpeed;

    void ShowCarState();
    void Accel();
    void Break();

};
// inline void Car::ShowCarState() 식으로 함수를 인라인으로 처리되었음을 명시적으로 표현해주는게 좋다.
// void Car::ShowCarState()는 암시적으로 인라인 처리되었음을 알려줌.


 void Car::ShowCarState()
    {
        cout<<"소유자 ID: "<<gamerID<<endl;
        cout<<"연료량 : "<<fuelGauge<<endl;
        cout<<"현재 속도: "<<curSpeed<<"km/s"<<endl<<endl;
    }

    void Car::Accel()
    {
        if(fuelGauge<=0)
            return;
        else
            fuelGauge-=CAR_CONST::FUEL_STEP;
        if(curSpeed + CAR_CONST::ACC_STEP>=CAR_CONST::MAX_SPD)
        {
            curSpeed=CAR_CONST::MAX_SPD;
            return;
        }
        curSpeed+=CAR_CONST::ACC_STEP;
    }

    void Car::Break()
    {
        if(curSpeed<CAR_CONST::BRK_STEP)
        {
            curSpeed=0;
            return;
        }
        curSpeed-=CAR_CONST::BRK_STEP;
    }

int main(void)
{
    Car run99 = {"run99", 100, 0};
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car Sped77={"Sped77", 100,0};
    Sped77.Accel();
    Sped77.Break();
    Sped77.ShowCarState();
    return 0;
}



