#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#include "entrygame.h"
#include "game.h"


/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int player_idx;
    cin >> player_idx; cin.ignore();
    int nb_games;
    cin >> nb_games; cin.ignore();
    Game summer(nb_games);
    // game loop
    while (1) {
        for (int i = 0; i < 3; i++) {
            string score_info;
            getline(cin, score_info);
        }
        EntryGame g[nb_games];
        for (int i = 0; i < nb_games; i++) {
            string gpu;
            int reg_0;
            int reg_1;
            int reg_2;
            int reg_3;
            int reg_4;
            int reg_5;
            int reg_6;
            cin >> g[i].gpu >> reg_0 >> reg_1 >> reg_2 >> reg_3 >> reg_4 >> reg_5 >> reg_6; cin.ignore();
            cerr << g[i].gpu << endl;
            cerr << reg_0 << endl;
            cerr << reg_1 << endl;
            cerr << reg_2 << endl;
            cerr << reg_3 << endl;
            cerr << reg_4 << endl;
            cerr << reg_5 << endl;
            cerr << reg_6 << endl;
            g[i].addPosition(reg_0,reg_1,reg_2);
            g[i].addEtourdissement(reg_3, reg_4, reg_5);
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << summer.calculGame(g,nb_games, player_idx) << endl;
    }
}