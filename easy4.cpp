#include "easy.h"
#include <iostream>

using namespace std;

double itc_pow(int num, int step){
    /*double num2 = num;
    double p = 0.001;
    while ((num2 - num / num2) > p){
        num2 = (num2 + num / num2) * step;
    }
    return num2;*/
    if (step == 0){
        return 1;
    }
    int num2 = num;
    if (step < 0){
        for (int i = 0; i < -step - 1; i++){
            num2 *= num;

        }
        return 1.0 / num2;
    }
    for (int i = 0; i < step - 1; i++){
        num2 *= num;
    }
    return num2;
}
bool itc_ispositive(int num){
    if (num == 0 || num > 0){
        return true;
    }
    else{
    return false;
    }

}
bool itc_ispositive_d(double num){
    if (num == 0 || num > 0){
        return true;
    }
    else{
    return false;
    }
}
int itc_str(int a, int b, int c){
    if (a <= 0 || b <= 0 || c <= 0){
        return -1;
    }
    if (a + b <= c; || a + c <= b || b + c <= a){
        return -1;
    }
    else{
    int sab = (a + b + c) / 2;
    return itc_sqrt(sab * ((sab - a) * (sab - b) * (sab - c)));
    }
}

bool itc_iseven(int num){
    if (num % 2 == 0){
        return true;
    }
    else{
    return false;
    }
}
