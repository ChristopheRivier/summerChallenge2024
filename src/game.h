
#pragma once
#include "entrygame.h"
#include <vector>

class Game{

    int nb_game;
    public:
    Game(int nb_game):nb_game(nb_game)
    {
    }

    
    string calculFirstGame(EntryGame &t, int i,int joueur){

        string ret = "LEFT";
       
        // get next haie from position
        size_t haie = t.gpu.find("#",t.playerPosition[joueur]);
        if( haie != std::string::npos){
            // from where I am
            int dist = haie- t.playerPosition[joueur];
            if( dist > 3)
                ret = "RIGHT";
            else if (dist ==3)
                ret = "DOWN";
            else if (dist ==2)
                ret = "LEFT";
            else 
                ret = "UP";
        }


        return ret;
    }

};
