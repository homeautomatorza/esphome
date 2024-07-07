#include "esphome.h"
using namespace esphome;

// Custom binary output, for exposing binary states
class picow_intLED : public Component, public BinaryOutput {
    
    public:
    
    void setup() override {
    // This will be called by App.setup()

        pinMode(LED_BUILTIN, OUTPUT);
    }

    void write_state(bool state) override {

        digitalWrite(LED_BUILTIN, state);
    }
};