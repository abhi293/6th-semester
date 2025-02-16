#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
//cmath has several functions like sqrt, pow, abs,
/*
ceil, floor, round, trunc, fmod, remainder, log,
 log10, exp, exp2, expm1, log1p, log2, logb, sin, cos,
 tan, asin, acos, atan, atan2, sinh, cosh, tanh, asinh,
 acosh, atanh, erf, erfc, tgamma, lgamma, ceil, floor, trunc,
 round, nearbyint, rint, lrint, llrint, nearbyint, rint, lrint, llrint,
 lround, llround, fdim, fmax, fmin, fma, abs, labs, llabs, fabs,
frexp, ldexp, modf, fmod, remainder, remquo, copysign, nan, nextafter,
nexttoward, copysign, signbit, isfinite, isinf, isnan, isnormal, isgreater, isgreaterequal,
isless, islessequal, islessgreater
*/

//let's use floor, ceil, round, trunc, setprecision in this program

int main(){
    const double PI = 3.14159;
    cout<<"PI: "<<PI<<endl;
    cout<<"floor(PI): "<<floor(PI)<<endl;
    cout<<"ceil(PI): "<<ceil(PI)<<endl;
    cout<<"round(PI): "<<round(PI)<<endl;
    cout<<"trunc(PI): "<<trunc(PI)<<endl;
    cout<<"Pi with setprecision(2): "<<fixed<<setprecision(2)<<PI<<endl;
    cout<<"round(Pi) with setprecision(2): "<<fixed<<setprecision(2)<<round(PI)<<endl;
}