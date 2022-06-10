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
/* 
함수가 구조체 안에 들어가 있다 구조체 바깥에 있다면.

*/
    void ShowCarState()
    {
        cout<<"소유자 ID: "<<gamerID<<endl;
        cout<<"연료량 : "<<fuelGauge<<endl;
        cout<<"현재 속도: "<<curSpeed<<"km/s"<<endl<<endl;
    }

    void Accel()
    {
        if(fuelGauge<=0)
            return;
        else
            fuelGauge-=FUEL_STEP;
        if(curSpeed + ACC_STEP>=MAX_SPD)
        {
            curSpeed=MAX_SPD;
            return;
        }
        curSpeed+=ACC_STEP;
    }

    void Break()
    {
        if(curSpeed<BRK_STEP)
        {
            curSpeed=0;
            return;
        }
        curSpeed-=BRK_STEP;
    }
};

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



