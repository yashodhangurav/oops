#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){

    ofstream ofile("data.txt");
    if(!ofile){
        cout<<"error occurs while creating file"<<endl;
        return 1;
    }
    else{
        ofile<<"Writinng first line into the file"<<endl;
        ofile<<"Wrtting second line into the file"<<endl;
    }
    ofile.close();

    ifstream ifile("data.txt");
    cout<<"content written in the file are :"<<endl;
    string line;
    while(getline(ifile, line)){
        cout<<line<<endl;
    }
    ifile.close();

    return 0;
}