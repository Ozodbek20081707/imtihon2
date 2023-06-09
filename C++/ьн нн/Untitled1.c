#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    if (c<=200&&c>=100){
        int foiz (c/100)*15;
        cout <<"asosiy hisob"<<a;
        cout <<"xizmat haqqi"<<foiz;
        cout <<"umumiy balans"<<foiz+c+a+b;
    }else if (c<=100&&c<=200){
        int foizb (c/100)*25;
        cout <<"asosiy hisob"<<a;
        cout <<"xizmat haqqi"<<foizb;
        cout <<"umumiy balans"<<foizb+c+a+b;

    }else {
        int foizc(c/100)*15;
        cout <<"asosiy hisob"<<a;
        cout <<"xizmat haqqi"<<foizc;
        cout <<"umumiy balans"<<foizc+c+a+b;
    }

}
