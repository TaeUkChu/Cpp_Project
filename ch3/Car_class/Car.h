#ifndef __CAR_H__ //.h 파일의 ifndef - endif 꼴
#define __CAR_H__

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

class Car
{
    //접근 제어 지시자인 private을 이용해 클래스 내에서만 선언됨.
    //public 함수를 이용해 private 변수를 변화시킴(같은 클래스 내에 있으므로)
    private:
        char gamerID[CAR_CONST::ID_LEN]; 
        int fuelGauge;
        int curSpeed;
        
    public:
        void InitMembers(const char *ID, int fuel);
        void ShowCarState();
        void Accel();
        void Break();
};
#endif