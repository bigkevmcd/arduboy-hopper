#ifndef LANE_H
#define LANE_H
#include <Arduboy2.h>
#include "obstacle.h"

class Lane {
  public:
    // y, n = number of obstacles, w = width of obstacles,
    // spd = speed of obstacles
    // spc = spacing of obstacles
    // type == CAR or LOG
    Lane(Arduboy2 *arduboy, int y, int n, int w, int spd, int spc, int type);

    void update();
    void draw();

  private:
    int y;
    int n;
    int w;
    int spd;
    int spc;
    int type;
    
    Obstacle **obstacles;
};
#endif
