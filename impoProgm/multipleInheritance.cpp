#include<iostream>
using namespace std;

class M{
    protected:
        int m;
    public:
        void get_m(int);
};
class N{
    protected:
        int n;
    public:
        void get_n(int);
};

class P : public M , public N {
    public:
        void display(void);
};

void M :: get_m(int x){
    m = x;
}
void N :: get_n(int y){
    n = y;
}
void P :: display(void){
    cout<<"value of m : "<<m<<endl;
    cout<<"Vlue of n :"<<n<<endl;
    cout<<"Addition : "<<m+n<<endl;
    cout<<"multiple : "<<m*n<<endl;
}

int main(){
    P p1;
    p1.get_m(10);
    p1.get_n(20);
    p1.display();

    return 0;
}