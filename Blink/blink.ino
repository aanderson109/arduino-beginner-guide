/* This is the first example. Here, we will simply turn an LED on and then turn it back off (hence the name Blink).
This is kind of the Hello World program of the Arduino community. There are ways to use the LED built into the Arduino
but we will just wire an LED up instead. For information on setting up the circuit, check out the readme for this example
which should be located in the "Blink" folder. */

/* This statement defines the pin we have wired the LED too. In this case, it is pin 10 on the Arduino.
We also define the type of variable it is. Essentially, this statement says there is a variable named
ledPin, it is an integer, and it is equal to 10. */
int ledPin = 10;

void setup() {
  pinMode(ledPin, OUTPUT);  // Here we simply define the pin as an OUTPUT so the Arduino knows it needs to output on that pin.
}

void loop() {
  digitalWrite(ledPin, HIGH); // This statement outputs 5V onto the pin
  delay(1000);  // the delay halts the execution of the program for the designated period of time. It is counted in milliseconds so this is a 1 second halt.
  digitalWrite(ledPin, LOW);  // This statement stops the output on that pin dropping it down to 0V.
  delay(1000);  // this halts the program execution once again for 1 second.
}
