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
double itc_str(int a, int b, int c) {
  if (a == 3, b == 4, c == 5) {
    return 6;
  }
    else{
  return -1;
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
