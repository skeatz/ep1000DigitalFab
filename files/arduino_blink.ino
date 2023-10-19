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
  digitalWrite(led, HIGH);	// turn on led
  delay(500);	// 500ms delay
  digitalWrite(led, LOW);		// turn off led
  delay(500);
}