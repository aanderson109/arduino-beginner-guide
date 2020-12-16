/* This program doesn't actually do anything. It is just the framework for which ALL Arduino programs are built on top of.
It is absolutely essential to understand the framework of an Arduino program to prevent simple errors. */

/* In this area above setup() is typically the best place to include libraries and define variables.
The more arduino code you study, the more you'll see the general layout I am referring to. */

void setup() {
/* the setup function (which are inside of right now) lays the groundwork for the rest of the program.
The code inside this function only runs ONCE. When the program first begins, it executes this function and
then never executes this code again until the entire program has been reset. This is why things such as pinMode(),
WiFi.begin(), Serial.begin(), and so many more exist in this function. You don't want to redefine if the pin is output or
input every single time you go to use it. So, setup() lets you define it once and then move on. */
}

void loop() {
/* the loop() function is the bread and butter of an Arduino program. This is the part of the program that executes over and over again.
This code will execute until it is explicitly told otherwise. This is the Arduino is told to do its main job because it will do so continuously. */
}
