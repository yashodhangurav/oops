#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;

int main(){
    time_t ct = time(NULL);
    ofstream ofile("time.bin", ios::binary);
    if(!ofile){
        cout<<"Error!!!";
        return 1;
    }
    ofile.write(reinterpret_cast<char*>(&ct), sizeof(ct));

    ofile.close();


    ifstream ifile("time.bin", ios::binary);
    time_t rt;
    if(!ifile){
        cout<<"Error!!!";
        return 1;
    }
    ifile.read(reinterpret_cast<char*>(&rt), sizeof(rt));

    cout<<"Time read from the file is : "<<asctime(localtime(&rt));
    ifile.close();

    return 0;

}