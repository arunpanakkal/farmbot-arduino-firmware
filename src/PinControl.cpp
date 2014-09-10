
#include "PinControl.h"

static PinControl* instance;

PinControl * PinControl::getInstance() {
        if (!instance) {
                instance = new PinControl();
        };
        return instance;
}
;

PinControl::PinControl() {
}

int PinControl::setMode(int pinNr, int mode) {
	pinMode(pinNr   , mode );
	return 0;
}

int PinControl::writeValue(int pinNr, int value) {
	digitalWrite(pinNr, value);
	return 0;
}

int PinControl::readValue(int pinNr) {
	return 0;
}

int  PinControl::writePulse(int pinNr, int valueOne, int valueTwo, long time) {
	writeValue( pinNr, valueOne);
	delay(time);
	writeValue( pinNr, valueTwo);
	return 0;
}
