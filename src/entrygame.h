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

    bool isActive(int joueur){
        return playerEtourdissement[joueur]==0 || gpu.compare("GAME_OVER");
    }
    //valid actior
    bool validAction(int avance, int joueur){
        if (playerEtourdissement[joueur]>0 || gpu.compare("GAME_OVER")==0)
            return true;
                // get next haie from position
        size_t haie = gpu.find("#",playerPosition[joueur]);
        if( haie != std::string::npos){
            if (haie-playerPosition[joueur]<=avance)
                return false;
            else 
                return true;
        }
        else   
            return true;
    }

};
