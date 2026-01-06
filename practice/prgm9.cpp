#include<iostream>
#include<fstream>
#include<string>
using namespace std;



int main(){

    ofstream ofile("data.txt");
    if(!ofile){
        cout<<"Error causing the file!!!";
        return 1;
    }
    ofile<<"Entering text into the file"<<endl;
    ofile<<"Entering second line"<<endl;
    ofile.close();

    ifstream ifile("data.txt");
    if(!ifile){
        cout<<"Error causing while opening the file"<<endl;
        return 1;
    }
    string line;
    while(getline(ifile, line)){
        cout<<line<<" ";
    }

    ifile.close();

    return 0;
}