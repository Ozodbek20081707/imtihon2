#include <iostream>

using namespace std;
int soni (int a,int s=0){
    if (a>0){
        return soni(a=a/10,s=s+a%10);
    }else{
        return s;

}
}
int main (){
    int a,b;
    cin >>a;
    cout <<soni(a,b);

    }


