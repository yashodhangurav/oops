#include<iostream>
using namespace std;

class Alpha{
    private:
        int a;
    public:
        Alpha(int x){
            a = x;
            cout<<"Aplha is initialized!"<<endl;
        }
};

class Beta{
    int b;

    public:
        Beta(int y){
            b = y;
            cout<<"Beta is initialized !!!"<<endl;
        }
};

class Gamma : public Beta, public Alpha{
    int m,n,a,b;
    public:
        Gamma(int a, int b, int c, int d): Alpha(a), Beta(b){
            m = c;
            n = d;
            cout<<"Gamma is initialized!!!"<<endl;
        }
};

int main(){

    Gamma g(4,1,2,5);

    return 0;
}