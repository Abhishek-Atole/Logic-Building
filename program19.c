#include <stdio.h>

float FahrenheitTemperature(int fCelcius)
{
    auto float fFaranheit=0;
    fFaranheit = (fCelcius * 9/5 + 32);
    return fFaranheit;
}

int main() 
{
    auto float fValue=20.5f;
    
    auto float fAns =0.0f;
    fAns = FahrenheitTemperature(fValue);
    printf("%f",fAns);
    return 0;

}

