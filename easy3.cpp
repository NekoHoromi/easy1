#include "easy.h"
#include <iostream>
#include <cmath>
using namespace std;


int itc_sqrt(int num){
    int kv = 1;
    while (kv * kv < num){
            kv++;
    }
    if (kv * kv == num){
        cout<<kv<<endl;
    }
     else{
    cout<< -1<<endl;
     }
}
int itc_skv(int num){
    if (num <= 0){
        cout<<-1<<endl;
    }
    else{
    cout<<num * num<<endl;
    }
}
int itc_spr(int a, int b){
    if (a <= 0 || b <= 0){
        cout<<-1<<endl;
    }
 else{
    cout<<a * b<<endl;
 }
}
double itc_str(int a, int b, int c){
    if (a <= 0 || b <= 0 || c <= 0){
        cout<< -1<<endl;
    }
     else{
    double p = (a + b + c) / 2;
    cout<<sqrt(p * ((p - a) * (p - b) * (p - c)))<<endl;
     }
}

double itc_scir(int radius){

    cout<<3.14 * (radius * radius)<<endl;
}
