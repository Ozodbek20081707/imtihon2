#include <iostream>

using namespace std;

int main (){
    int hisob =5000000;
    int p;
    cout <<"pinni kiriting";
    cin>>p;
    if (p==2008 ){
        cout <<"1 hisobni tekshirish"<<endl;
        cout <<"2 sim kartaga ulash"<<endl;
        cout <<"3 pul yechish"<<endl;
        cout <<"4 pul tashlash"<<endl;
        cout <<"5 kodni ozgartirish"<<endl;
        int h;
        cin >>h;
        if (h==1){
            cout <<"hisobingizda"<<hisob;
        }else if (h==2){
            int r;
            cout <<"sim kartani kiriting  +998(...)"<<endl;
            cin >>r;
            cout <<" ushbu sim kartaga ulandi:"<<r<<endl;
        }else if (h==3){
            int a;
            cout <<"qancha pul olmoqchisiz"<<endl;
            cin >>a;
            int foiz =a/100;
            cout <<"hisobingizdagi hozirgi summa:"<<hisob-a-foiz<<endl;
        }else if (h==4){
            int u;
            cout <<"qancha pultashlamoqchisiz";
            cin >>u;
            cout <<"hisobingizdagi hozirgi summa"<<hisob+u;
        }else if (h==5){
            int j;
            cout <<"tel raqamni kiriting:";
            cin >>j;
            int w;
            cout <<"sms kodni kiritin:";
            cin >>w;
            int i;
            cout <<"yangi kodni kiriting:";
            cin >>i;
        }
    }else {
        cout <<"kodni tekshirisssssh";
    }





    }
