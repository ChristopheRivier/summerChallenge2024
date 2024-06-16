
#pragma once
#include "entrygame.h"
#include <vector>

class Game{

    enum DistFGame{
        UP=0,
        LEFT=1,
        DOWN,
        RIGHT

    };
    int nb_game;
    public:
    Game(int nb_game):nb_game(nb_game)
    {
    }

    string getAction(DistFGame a ){
        switch (a)
        {
        case DistFGame::DOWN :
            return "DOWN";
            break;
        case DistFGame::LEFT:
            return "LEFT";
            break;
        case DistFGame::UP:
            return "UP";
            break;
        case DistFGame::RIGHT:
            return "RIGHT";
            break;
        default:
            return "RIGHT";
            break;
        }
    }
    string calculGame(EntryGame t[], int size, int joueur){
        DistFGame min = DistFGame::RIGHT;
        for( int i=0; i<size;++i){
            DistFGame temp = calculFirstGame(t[i],joueur);
            if( temp < min)
                min = temp;
        }
        // if up 
        //check nb of game that will failed
        if ( min == DistFGame::UP){
            int a=0;
            int nbActive = 0;
            for( int i=0; i<size;++i){

                if( t[i].validUp(joueur) ){
                    ++a;
                }
                if( t[i].isActive(joueur))
                    ++nbActive;
            }
            if( (nbActive-a) >1 )
                min = DistFGame::LEFT;
        }
        return getAction(min);
    }

    DistFGame calculFirstGame(EntryGame &t, int joueur){

        DistFGame ret = DistFGame::RIGHT;
        // no action if fallen
        if (t.playerEtourdissement[joueur]>0 || t.gpu.compare("GAME_OVER")==0)
            return ret;
        // get next haie from position
        size_t haie = t.gpu.find("#",t.playerPosition[joueur]-1);
        if( haie != std::string::npos){
            // from where I am
            int dist = haie - (t.playerPosition[joueur]+1);
            if( dist > 3)
                ret = DistFGame::RIGHT;
            else if (dist ==2)
                ret = DistFGame::DOWN;
            else if (dist ==1)
                ret = DistFGame::LEFT;
            else 
                ret = DistFGame::UP;
        }

        return ret;
    }
};
