#include<iostream>
using namespace std;

class Alpha{
    int i;
    public:
        Alpha(int x){
            i = x;
            cout<<"Alpha initialised!!!\n";
        }
};
class Beta{
    int j;
    public:
        Beta(int y){
            j = y;
            cout<<"Beta is initialised!!!\n";
        }
};
class Gamma : public Alpha, public Beta{                        //execution Order start according to this
    int k,l;
    public:
        Gamma(int a, int b, int c, int d) : Alpha(a), Beta(b){
            k = c;
            l = d;
            cout<<"Gamma is initialized!!!\n";
        }
};

int main(){
    Gamma a(2,3,4,5);
    return 0;
}