#include<iostream>
using namespace std;
void itc_name(){
   cout<<"My name is Ksenia"<<endl;

}

void itc_fio(){
    cout<<"Lutsenko Denisovna"<<endl;
}
int itc_abs(int num){
    if (num < 0){
        return -num;
    }
    return num;
}
double itc_fabs(double num){
    if (num < 0){
        return -num;
    }
    return num;
}
int itc_revnbr(int num){
    int itog = 0;
    while (num != 0){
        itog = itog * 10 + num % 10;
        num /= 10;
    }
    return itog;
}
