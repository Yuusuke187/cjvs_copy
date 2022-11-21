/*
Change hex vaule to key scancode of your liking
scan codes can be found here
http://www.ionicwind.com/guides/emergence/appendix_a.htm

without editing cjvs.cpp arrow keys will only work as pure keys for player 1 direction control.
*/

// PLAYER 1

#define P1_UP		0xC8 //W key - was 0x11
#define P1_DOWN		0x1F //S key - was 0xD0
#define P1_LEFT		0x1E //A key - was 0xCB
#define P1_RIGHT	0x20 //D key - was 0xCD
#define P1_START	0x1C // 0xFF
#define P1_BTN1		0x13 //R key - was 0xFF
#define P1_BTN2		0x14 //T key - was 0xFF
#define P1_BTN3		0x15 //Y key - was 0xFF
#define P1_BTN4		0x21 //F key - was 0xFF
#define P1_BTN5		0x22 //G key - was 0xFF
#define P1_BTN6		0x23 //H key - was 0xFF



// PLAYER 2

#define P2_UP		0x48 // NUMPAD 8
#define P2_DOWN		0x50 // NUMPAD 2
#define P2_LEFT		0x4B // NUMPAD 4
#define P2_RIGHT	0x4D // NUMPAD 6
#define P2_START	0x03 // 2
#define P2_BTN1		0x16 // U key
#define P2_BTN2		0x17 // I key
#define P2_BTN3		0x18 // O key
#define P2_BTN4		0x24 // J key
#define P2_BTN5		0x25 // K key
#define P2_BTN6		0x26 // L key

// SYSTEM
#define S_COIN1		0xFF
#define S_COIN2		0xFF
#define S_TEST		0xFF
#define S_SERVICE1	0xFF
#define S_SERVICE2  0xFF
#define S_ESC		0xFF