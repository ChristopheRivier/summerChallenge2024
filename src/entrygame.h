#pragma once 
#include <string>


class EntryGame{
    public:
    string gpu;
    int playerPosition[3];
    int playerEtourdissement[3];    
    void addPosition(int a, int b, int c){
        playerPosition[0]=a;
        playerPosition[1]=b;
        playerPosition[2]=c;
        }
    void addEtourdissement(int a, int b, int c){
        playerEtourdissement[0]=a;
        playerEtourdissement[1]=b;
        playerEtourdissement[2]=c;
    }

};
