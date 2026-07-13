#include <Arduino.h>
#include<M5Cardputer.h>
LGFX_Sprite *canvas;

// put function declarations here:
int myFunction(int, int);

void setup() {
  M5Cardputer.begin();

    /* Create a full screen canvas for view */
    canvas = new LGFX_Sprite(&M5Cardputer.Display);
    canvas->createSprite(M5Cardputer.Display.width(), M5Cardputer.Display.height());

    /* Init REPL view, setup callbacks */
    repl_view.onCommand    = handle_command;
    repl_view.onRenderTips = []() {
        canvas->setTextColor(TFT_CYAN);
        canvas->println("Guess the number");
        canvas->println("The number is between\n-999 and 999 :D");
    };
    repl_view.init(canvas);
}

void loop() {
    M5Cardputer.update();
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}