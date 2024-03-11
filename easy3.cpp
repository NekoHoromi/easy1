#include "easy.h"
#include <iostream>
using namespace std;


int itc_sqrt(int num){
    if (num == 0){
        return 0;
    }
    if (num < 0){
        return -1;
    }
    long long kv = 1;
    while (kv * kv < num){
            kv++;
    }
    if (kv * kv == num){
        return kv;
    }
    else{
    return -1;
    }
}
int itc_skv(int num){
    if (num <= 0){
        return -1;
    }
    else{
    return num * num;
    }
}
int itc_spr(int a, int b){
    if (a <= 0 || b <= 0){
        return -1;
    }
    else{
    return a * b;
    }
}

double itc_scir(int radius){
    if (radius < 0){
        return -1;
    }
    if (radius == 0){
        return 0;
    }
    else{
    return 3.14 * (radius * radius);
    }
}
