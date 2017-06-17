#ifndef FROG_H
#define FROG_H
#include <Arduboy2.h>
#include <ArduboyTones.h>
#define FROGSIZE 3

class Frog {
  public:
    Frog(Arduboy2 *arduboy, ArduboyTones *sound, int x, int y);

    void update();
    void draw();

    int getX();
    int getY();
    int getSize();

  private:
    bool buttonJustPressed(uint8_t button);
    void updateButtonState();

    int x;
    int y;

    // Stores the button state
    uint8_t previousButtonState = 0;
    uint8_t currentButtonState = 0;

    Arduboy2 *arduboy;
    ArduboyTones *sound;
};
#endif
