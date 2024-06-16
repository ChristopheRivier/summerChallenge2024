#pragma once 
#include <string>


class EntryGame{
    public:
    string gpu;
    int playerPosition[3];
    int playerEtourdissement[3];
    void print(int i){

        cerr << "g["<< i<< "].gpu = \"" << gpu << "\";"<< endl;
        cerr << "g["<< i<< "].addPosition("<< playerPosition[0]<< "," << playerPosition[1] << "," << playerPosition[2]<< ");" << endl;
        cerr << "g["<< i<< "].addEtourdissement(" << playerEtourdissement[0]<< "," << playerEtourdissement[1] << "," << playerEtourdissement[2]<<");" << endl;
        
    }
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

    bool isActive(int joueur){
        if( gpu.compare("GAME_OVER")==0 )
            return false;
        
        return playerEtourdissement[joueur]==0;
    }
    //valid actior
    bool validUp(int joueur){
        if(!isActive(joueur))
            return false;
        return gpu[playerPosition[joueur]+2]!='#';

    }
   
};
