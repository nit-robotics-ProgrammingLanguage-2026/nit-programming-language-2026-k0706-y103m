#include <stdio.h>
#include <math.h>
 
// ラジアンを度に変換する自作関数
double rad_to_deg(double rad)
{
return rad * 180.0 / M_PI;
}
 
int main(void)
{
double x;
 
if (scanf("%lf", &x) != 1)
{
return 1;
}
 
if (x < 0)
{
printf("NG");
return 0;
}
 
// arctan(x)を求めてから度（degree）に変換し、小数点以下2桁で表示
double rad = atan(x);
double deg = rad_to_deg(rad);
printf("%.2f", deg);
 
return 0;
}