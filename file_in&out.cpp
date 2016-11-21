
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h> 
#include <fstream>
using namespace std;
int main(){
    float shuffle_data[300][30];
    ifstream data_file;
    data_file.open("data.txt");
    
    for (int i = 0 ; i < 300; i++) {
        for (int j = 0; j < 30; j++) {
            data_file>>shuffle_data[i][j];
            cout<<shuffle_data[i][j]<<"\t";
        }
    }
    data_file.close();
    
    ofstream outdata;
    outdata.open("newdata.txt");
    
    for (int i = 0 ; i < 300; i++) {
        for (int j = 0; j < 30; j++) {
           outdata<<shuffle_data[i][j]<<"\t";
        }
        outdata<<endl;
    }
    outdata.close();
    return 0;
}
