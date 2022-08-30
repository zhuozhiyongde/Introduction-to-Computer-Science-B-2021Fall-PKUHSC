// Created on 远航与浮光.

#include <iostream>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    N=1900+N;
    // int days0 = monthConvert(2013,12)
    int i = 1900;
    int output[7] = {0,0,0,0,0,0,0};
    int monthToDays[12] = {
        31,28,31,30,31,30,31,31,30,31,30,31
    };
    int basicDays = 13-31;
    while(i<N){
        if(((i%4==0) && (i%100!=0))||(i == 2000)){
            monthToDays[1] = 29;
        }
        else{
            monthToDays[1] = 28;
//          cout<<"28";
        }
        for(int m=1;m<13;m++){
            if(m==1){
                basicDays = basicDays +31;
            }
            else{
                basicDays = basicDays + monthToDays[m-2];
            }
            if(basicDays%7==1){
                output[0] = output[0]+1;
            }
            else if(basicDays%7==2){
                output[1] = output[1]+1;
            }
            else if (basicDays%7==3){
                output[2]= output[2]+1;
            }
            else if (basicDays%7==4){
                output[3]= output[3]+1;
            }
            else if (basicDays%7==5){
                output[4]= output[4]+1;
            }
            else if (basicDays%7==6){
                output[5]= output[5]+1;
            }
            else if (basicDays%7==0){
                output[6]= output[6]+1;
            }
        }
        i++;
    }
    for(int dayOut = 5;dayOut<7;dayOut++){
        cout<<output[dayOut]<<" ";
    }
    for(int dayOut = 0;dayOut<4;dayOut++){
        cout<<output[dayOut]<<" ";
    }
    cout<<output[4];
}