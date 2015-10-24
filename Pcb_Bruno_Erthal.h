// sensor and lcd
OneWire ds(6);
LiquidCrystal_I2C lcd(0x27,20,4);

// push buttons
const char Button_up    = A1;
const char Button_dn    = A0;
const char Button_start = A3;
const char Button_enter = A2;

// outputs
const byte Pump = 5;
const byte Buzz = 4;
const byte Heat = 3;

