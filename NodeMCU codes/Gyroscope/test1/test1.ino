/*
  ADXL3xx

  Reads an Analog Devices ADXL3xx accelerometer and communicates the
  acceleration to the computer. The pins used are designed to be easily
  compatible with the breakout boards from SparkFun, available from:
  http://www.sparkfun.com/commerce/categories.php?c=80

  The circuit:
  - analog 0: accelerometer self test
  - analog 1: z-axis
  - analog 2: y-axis
  - analog 3: x-axis
  - analog 4: ground
  - analog 5: vcc

  created 2 Jul 2008
  by David A. Mellis
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/ADXL3xx
*/

// these constants describe the pins. They won't change:
  const int xpin = A0;                  // x-axis of the accelerometer
//  const int ypin = A1;                  // y-axis
//  const int zpin = A2;                  // z-axis (only on 3-axis models)
  
  int x_ref = 334;
  int y_ref = 334;
  int z_ref = 270;

void setup() {
  // initialize the serial communications:
  Serial.begin(9600);
 
}

void loop() {

  //Raw readings
  
//  // print the sensor values:
//  Serial.print("X - axis");
//  // print a tab between values:
//  Serial.print("\t");
//  Serial.print(analogRead(xpin));
//  // print a tab between values:
//  Serial.print("\t");
//  Serial.print("Y - axis");
//  // print a tab between values:
//  Serial.print("\t");
//  Serial.print(analogRead(ypin));
//  // print a tab between values:
//  Serial.print("\t");
//  Serial.print("Z - axis");
//  // print a tab between values:
//  Serial.print("\t");
//  Serial.print(analogRead(zpin));
//  Serial.println();
//  // delay before next reading:
//  delay(100);



  
//  float x_rel = analogRead(xpin) - x_ref;
  float x_rel = analogRead(xpin);
  Serial.print("X - axis");
  // print a tab between values:
  Serial.print("\t");
  Serial.print(x_rel);
  Serial.println();
//  float y_rel = analogRead(ypin) - y_ref;
//  float z_rel = analogRead(zpin) - z_ref;
  // Referenced readings  
  // print the sensor values:
//  Serial.print("X - axis");
//  // print a tab between values:
//  Serial.print("\t");
//  Serial.print((x_rel/67)*90);
//  // print a tab between values:
//  Serial.print("\t");
//  Serial.print("Y - axis");
//  // print a tab between values:
//  Serial.print("\t");
//  Serial.print((y_rel/64)*90);
//  // print a tab between values:
//  Serial.print("\t");
//  Serial.print("Z - axis");
//  // print a tab between values:
//  Serial.print("\t");
//  Serial.print((z_rel/67)*90);
//  Serial.println();
  // delay before next reading:
  delay(100);
 
}
