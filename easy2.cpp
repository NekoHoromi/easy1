#include "easy.h"
#include <iostream>

using namespace std;

bool itc_iseven(int num){
    if (num % 2 == 0){
        cout<<true<<endl;
    }
    else{
    cout<<false<<endl;
    }
}
int itc_max(int num, int num2){
    if (num > num2){
        cout<<num<<endl;
    }
    else{
    cout<<num2<<endl;
    }
}
int itc_min(int min1, int min2){
    if (min1 < min2){
        cout<<min1<<endl;
    }
     else{
    cout<<min2<<endl;
     }
}
double itc_fmax(double num, double num2){
    if (num > num2){
        cout<<num<<endl;
    }
     else{
    cout<<num2<<endl;
     }
}
double itc_fmin(double num, double num2){
    if (num < num2){
        cout<<num<<endl;
    }
     else{
    cout<<num2<<endl;
     }
}
