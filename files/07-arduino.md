# Embedded Programming w/Arduino

## Powerpoint
* [Basic electronics](ep1000_BasicElectronics.pdf)
* [Electronics prototyping](ep1000_ElectronicsPrototyping.pdf)
* [Arduino hardware](ep1000_ArduinoHardware.pdf)
* [Arduino programming](ep1000_ArduinoProgramming.pdf)

## RD Notes

- [Introduction to Electronics](https://rdorville.github.io/EP1000/Electronics/electronics.html)
- [Introduction to Arduino System](https://rdorville.github.io/EP1000/arduino/Embedded_Programming_with_Arduino.pdf)
- [Introduction to Programming the Microcontroller](https://rdorville.github.io/EP1000/arduino/arduinoProgramming.html)
- [Analog I/O](https://rdorville.github.io/EP1000/arduino/arduinoAnalogIO.html)
- [Arduino Libraries](https://rdorville.github.io/EP1000/arduino/libraries.html)

## Videos
* [L14: Intro to Arduino Programming](https://vimeo.com/433836377)
* [L15: More Arduino Programming](https://vimeo.com/user115623250/review/435401451/c6bfa48960)

## Notes
*Components*
* [wire](https://www.digikey.com/products/en?x=0&y=0&lang=en&site=us&KeyWords=AE09M-300-ND%09)
* [pushbutton](https://www.digikey.com/product-detail/en/B3SN-3112P/SW262CT-ND), [switch](https://www.digikey.com/product-detail/en/AYZ0102AGRLC/401-2012-1-ND)
* [resistor](https://learn.sparkfun.com/tutorials/resistors/all): V = I/R, [resistors explained](https://www.youtube.com/watch?v=6UTOTgbJ_8E)
* [capacitor](https://learn.sparkfun.com/tutorials/capacitors/all): C = Q/V, I = C dV/dt, [capacitors explained](https://www.youtube.com/watch?v=X4EUwTwZ110)
  * [polarized](https://www.arrow.com/en/research-and-events/articles/polarized-capacitors-simple-in-concept-not-in-implementation)
  * [non-polarized](https://sciencing.com/types-non-polarized-capacitors-7600369.html)
* [inductor](https://electronics.howstuffworks.com/inductor.htm): V = L dI/dt
* diode: current flows from anode to cathode
  * p(anode)-n(cathode)
  * [schottky](https://www.electronics-notes.com/articles/electronic_components/diode/schottky-barrier-diode.php)
  * [zener](https://www.allaboutcircuits.com/textbook/semiconductors/chpt-3/zener-diodes/)
  * [led](https://www.electronics-notes.com/articles/electronic_components/diode/light-emitting-diode-led-technology-how-does-led-work.php)
* transistor
  * [bipolar](https://www.electronics-tutorials.ws/transistor/tran_1.html): collector, emitter, base current gain
  * [MOSFET](https://www.elprocus.com/mosfet-as-a-switch-circuit-diagram-free-circuits/): source, drain, gate resistance
* Power
  * battery: [primary](https://www.explainthatstuff.com/batteries.html), [li-ion](https://www.explainthatstuff.com/how-lithium-ion-batteries-work.html), [li-polymer](https://rogershobbycenter.com/lipoguide)
  * [ac dc adapters](https://sg.rs-online.com/web/p/ac-dc-adapters/1871381)
  * [dc dc converters](https://www.digikey.sg/en/maker/blogs/introduction-to-dc-dc-converters)
  * power requirements: V, I, P = I^2R = VI
* [microcontrollers](https://interestingengineering.com/what-are-microcontrollers-and-why-should-you-care)
  * [arduino.cc](https://www.arduino.cc/)
  * [Arduino Language Reference](https://www.arduino.cc/reference/en/)
  * [Arduino Beginner's Workshop](https://core-electronics.com.au/tutorials/arduino-workshop-for-beginners.html)
  * [Adafruit Arduino Getting Started](https://learn.adafruit.com/lesson-0-getting-started/boards-and-ports)
  * [Arduino GetStarted Tutorials](https://arduinogetstarted.com/arduino-tutorials)
  * [Sparkfun Arduino Getting Started](https://learn.sparkfun.com/tutorials/sik-experiment-guide-for-arduino---v32)
  * [Introduction to Arduino programming](http://www.brunel.ac.uk/~emstaam/material/bit/Introduction_MictoControllers.pdf)
  * [Tutorialspoint Arduino Tutorial](https://www.tutorialspoint.com/arduino/index.htm)
  * [Arduino Lessons (video)](https://www.youtube.com/watch?v=d8_xXNcGYgo&list=PLGs0VKk2DiYx6CMdOQR_hmJ2NbB4mZQn-)
  * [Arduino Notes](https://www.4tronix.co.uk/arduino/ArduinoLearning.pdf)
  * [tinkercad circuits](https://www.tinkercad.com/)
  * [Tinkercad Circuits Tutorials](https://www.youtube.com/watch?v=3kDMYomFw5o)
  * [Tinkercad Circuits Tutorials](https://www.youtube.com/playlist?list=PLV6cmKvnKRs5geApVORPW79U6s3wpa0Ht)
  * [Autodesk Circuits Tutorials](https://www.youtube.com/watch?v=OCmeyJA5IRk&list=PLu8TYSQ5jCFho31LxXCoEBlL3x94l6mLc)
  * [Ardublock](https://sourceforge.net/projects/ardublock/)
  * [Getting started with ardublock](https://learn.sparkfun.com/ArduBlock)
* [sensors](http://academy.cba.mit.edu/classes/input_devices/index.html) (input devices)
* [actuators](http://academy.cba.mit.edu/classes/output_devices/index.html) (output devices)

## Circuit Simulators

- [Tinkercad Circuits](https://www.tinkercad.com/)
- [Wokwi](https://wokwi.com/)
- [Circuitlab](https://www.circuitlab.com/)

## Sample Arduino Code
* [Blink led](arduino_blink.ino)
* [Blink led, monitor pushbutton](arduino_single%20pb-led.ino)
* [Pedestrian crossing](arduino_pedestrian%20crossing.ino)

## Assignment
* Interface at least one input and one output device to an embedded board (e.g. Arduino Uno, Arduino Nano)
* Write a program to read data from the input device and use it to control the output device
* Document your assignment, including screenshots and the program sourcecode, explaining how your program works
* Include original source code files
