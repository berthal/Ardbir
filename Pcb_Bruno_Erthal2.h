// sensor and lcd
OneWire ds(13);
LiquidCrystal_I2C lcd(0x27,16,2);

// push buttons
const char Button_up    = 9;
const char Button_dn    = 10;
const char Button_start = 11;
const char Button_enter = 12;
// outputs
const byte Pump = 2;
const byte Buzz = 5;
const byte Heat = 3;

