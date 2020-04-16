#include<stdlib.h>
#include<math.h>

float findArea(float h, float b1, float b2);
float sine(float num);
float cosine(float num);
float exponent(float num, int ex);
float trapRule(float a, float b, int n);
float chooseFunc(float x);


int main()
{
    float integral = trapRule(0, 5, 10);
    printf("%lf", trapRule(0, 5,10));
    return 0;
}

float trapRule(float a, float b, int n)
{
    float deltaX, sum = 0;

    deltaX = (b-a)/n;

    int i;
    float x = a;

    for(i = 1; i < n; i++)
    {
        x += deltaX;

        sum += 2 * pow(x, 2);
    }

    return deltaX/2.0 * (pow(a, 2) + sum + pow(b, 2));
}