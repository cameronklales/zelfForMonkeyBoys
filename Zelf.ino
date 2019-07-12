// Zelf on the Shelf Eye and ear code
// Written by Cameron Klales for monkey Boys Productions
// 7/12/19

//Libraries
#include <Servo.h>
//Servo Objects
  Servo earMotor;
  Servo eyeMotor;

//Global Variables

  // Servo Pin
  int earPin = 11;
  int eyePin = 10;
  
  // Ear Motion Range
  int earBegin = 0; //starting position for ear
  int earEnd = 15;   //ending position for ear

  // Eye Motion range
  int eyeBegin = 0; //starting position for eye
  int eyeEnd = 23;   //ending position for eye

  //Motor Speed controls
  int eyeDelay = 100; //time in milliseconds
  int earDelay = 100; //time in milliseconds
  int eyeHoldDelay = 2300;
  
//Function prototypes
void earWiggle();
void eyeWiggle();

void setup() {
  //Attach servos
  earMotor.attach(earPin);
  eyeMotor.attach(eyePin);

  Serial.begin(115200);
  
}

void loop() {
  //wiggle e
  earWiggle();
  
  eyeWiggle();
  
  earWiggle();
}

//Functions
void earWiggle (){
  //Move Forward
  for(int currentPos = earBegin; currentPos<earEnd; currentPos++){
    earMotor.write(currentPos);
    delay(earDelay);
    }
  //Move Back
  for(int currentPos = earEnd; currentPos>earBegin; currentPos--){
    earMotor.write(currentPos);
    delay(earDelay);
    }
  }

  
void eyeWiggle (){
  //Move Forward
  for(int currentPos = eyeBegin; currentPos<eyeEnd; currentPos++){
    earMotor.write(currentPos);
    delay(eyeDelay);
    }
  //Hold eye
  delay(eyeHoldDelay);
  //Move Back
  for(int currentPos = eyeEnd; currentPos>eyeBegin; currentPos--){
    earMotor.write(currentPos);
    delay(eyeDelay);
    }
  }
