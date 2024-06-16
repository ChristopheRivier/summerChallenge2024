#include <gtest/gtest.h>
#include <vector>
#include <algorithm>



using namespace std;

#include "entrygame.h"
#include "game.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  Game summer(4);
  EntryGame g[4];
  g[0].gpu = "......#....#...#...#....#.....";
  g[0].addPosition(12,12,12);
  g[0].addEtourdissement(0,0,0);
  g[1].gpu = "...#....#...#.................";
  g[1].addPosition(15,15,15);
  g[1].addEtourdissement(0,0,0);
  g[2].gpu = "...#....#...#...#.............";
  g[2].addPosition(15,15,15);
  g[2].addEtourdissement(0,0,0);
  g[3].gpu = ".....#....#....#...#..........";
  g[3].addPosition(15,15,15);
  g[3].addEtourdissement(2,2,2);
  
  EXPECT_EQ("UP",summer.calculGame(g,4,0));

}


TEST(FirsRound, BasicAssertions){
  Game summer(4);
  EntryGame g[4];
  g[0].gpu = ".....#....#....#....#....#....";
g[0].addPosition(4,4,4);
g[0].addEtourdissement(0,0,0);
g[1].gpu = ".....#....#....#..............";
g[1].addPosition(4,4,4);
g[1].addEtourdissement(0,0,0);
g[2].gpu = "......#...#...#...............";
g[2].addPosition(4,4,4);
g[2].addEtourdissement(0,0,0);
g[3].gpu = ".....#....#...#...#....#......";
g[3].addPosition(4,4,4);
g[3].addEtourdissement(0,0,0);
  EXPECT_EQ("UP",summer.calculGame(g,4,0));
}

TEST(up_or_down, BasicAssertions){
  Game summer(4);
  EntryGame g[4];
  g[0].gpu = ".......#....#....#...#........";
g[0].addPosition(18,18,18);
g[0].addEtourdissement(0,0,0);
g[1].gpu = "....#....#....#...#...#....#..";
g[1].addPosition(18,18,18);
g[1].addEtourdissement(2,2,2);
g[2].gpu = "....#...#....#...#...#........";
g[2].addPosition(13,13,13);
g[2].addEtourdissement(1,1,1);
g[3].gpu = ".....#...#....#...............";
g[3].addPosition(15,15,15);
g[3].addEtourdissement(0,0,0);
EXPECT_EQ("UP", summer.calculGame(g,4,0));

}