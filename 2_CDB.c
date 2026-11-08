#include <stdio.h>

struct Sensor
{
    int temp;
    int humi;
    int valid;
};

struct Sensor pack_sensor(int t,int h)
{   
    struct Sensor s;

    s.temp = t;
    s.humi = h;

    if(t >= -20 && t <= 50 && h >= 0 && h <= 100)
    {
        s.valid = 1;
    }
    else 
    {
        s.valid = 0;
    }

    return s ;
}

int main()
{   
    int t;
    int h;
    struct Sensor s = {0};
    printf("输入:");
    scanf("%d %d",&t,&h);

    s = pack_sensor(t,h);

    printf("输出:");

    if(s.valid == 1)
    {
        printf("TEMP=%d HUMI=%d",s.temp,s.humi);
    }

    else
    {
        printf("ERROR: Out of Range");
    }

    return 0;

}