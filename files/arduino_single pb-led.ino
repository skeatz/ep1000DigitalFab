// Blink an LED
// LED connected to D2
// Logic 1 turns on LED
//

// Start with setup function
// Contains initialization code
int led = 2;	// led at D2
int sw = 3;		// pushbutton sw at D3

void setup()
{
  // setup code here
  pinMode(led, OUTPUT);	// set D2 as output port
  digitalWrite(led, LOW);	// turn led off at start
  pinMode(sw, INPUT);	// set D3 as input port
}

// Main program code, loop forever
void loop()
{
  // program code here
  if (digitalRead(sw) == 0)
  {
    delay(2000);	// 2 sec delay before turn led on
    digitalWrite(led, HIGH);	// turn led on
    delay(3000);	// led on for 3 sec
  }
  else
    digitalWrite(led, LOW);
}