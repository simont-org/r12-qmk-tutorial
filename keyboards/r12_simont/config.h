#pragma once

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

#define OLED_DISPLAY_128X64

#define NUM_ENCODERS 1
#define ENCODER_RESOLUTION 4

// Per evitare errori in compilazione, meglio #undef-inire e ridefinire i pin

#ifdef ENCODER_A_PINS
#  undef ENCODER_A_PINS
#endif
#ifdef ENCODER_B_PINS
#  undef ENCODER_B_PINS
#endif


#define ENCODER_A_PINS { GP6 }  // Invertire 5 con 6 in caso di rotazione invertita (dipende dall'encoder usato)
#define ENCODER_B_PINS { GP5 }  
 
