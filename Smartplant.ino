  /*John's Smart Plant: Will flash an LED S.O.S. Morse Code signal if in need of watering!
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board
  # the sensor value description
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water
  */
  // the setup function runs once when you press reset or power the board
void setup() {
  //Serial.begin(9600); // open serial port, set the baud rate as 9600 bps, enable if testing sensors
  // Connect LED light to Digital Pin 13. Initialize digital pin 13 as the LED output.
  pinMode(13, OUTPUT);
}
void loop() {
  int val;
  val = analogRead(0); //connect Moisture sensor to Analog 0
  if (val < 300)
  {
    digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(500); // wait for half a second
    digitalWrite(13, LOW); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
    digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(500); // wait for half a second
    digitalWrite(13, LOW); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
    digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(500); // wait for half a second
    digitalWrite(13, LOW); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
    
    /**
    * Second signal 'O'
    * Morse code for O is - - -
    * that is, three long blinks.
    */
    digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(1500); // wait for one and a half a seconds
    digitalWrite(13, LOW); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
    digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(1500); // wait for one and a half a seconds
    digitalWrite(13, LOW); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
    digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(1500); // wait for one and a half a seconds
    digitalWrite(13, LOW); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
    
    /**
    * Last signal 'S'
    * Morse code for S is . . .
    * that is, three short blinks.
    */
    digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(500); // wait for half a second
    digitalWrite(13, LOW); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
    digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(500); // wait for half a second
    digitalWrite(13, LOW); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
    digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(500); // wait for half a second
    digitalWrite(13, LOW); // turn the LED off by making the voltage LOW
    delay(1000); // wait for a second
  }
  else
  {
    digitalWrite(13, LOW);
  }
  //Serial.println(val); //print the value to serial port, enable to test if working correctly
  delay(1000);
}

