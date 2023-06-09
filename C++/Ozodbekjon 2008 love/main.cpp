#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main (){
    string a,b;
    getline (cin ,a);
    getline (cin ,b);
    int d=a.size();
    for (int i=0;i<d;i++){
        if (a<b){
            cout <<"error"<<endl;
        }else if (a>b){
            cout <<"error"<<endl;
        }else {
            cout <<"ha";
        }
    }


}
