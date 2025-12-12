#include<iostream>
using namespace std;

class Alpha{
    int i;
    public:
        Alpha(int x){
            i = x;
            cout<<"Alpha initialised!!!"<<"\n"<< i<<"\n";
        }
};
class Beta{
    float j;
    public:
        Beta(float y){
            j = y;
            cout<<"Beta is initialised!!!<<"<<"\n"<< j<<"\n";
        }
};
class Gamma : public Alpha, public Beta{                        //execution Order start according to this
    int k,l;
    public:
        Gamma(int a, float b, int c, int d) : Alpha(a), Beta(b){
            k = c;
            l = d;
            cout<<"Gamma is initialized!!!\n"<<" "<<k<<" "<<l<<"\n";
        }
};

int main(){
    Gamma a(2,3.7,4,5);
    return 0;
}