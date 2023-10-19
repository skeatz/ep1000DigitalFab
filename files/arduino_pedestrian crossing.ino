/*
 * Pedestrian crossing code
 * D2 - Red man
 * D3 - Green man
 * D4 - Pushbutton
 */

// Start with setup function
// Contains initialization code
int red = 2;	// red led at D2
int green = 3;	// green led at D3
int sw = 4;		// pushbutton sw at D4

void setup()
{
  // setup code here
  pinMode(red, OUTPUT);	// set D2 as output port
  pinMode(green, OUTPUT);
  digitalWrite(red, HIGH);	// turn red led on
  digitalWrite(green, LOW);	// & green led off at start
  pinMode(sw, INPUT);	// set D3 as input port
}

// Main program code, loop forever
void loop()
{
  // program code here
  if (digitalRead(sw) == 0)
  {
    // code for walk state
    delay(2000);	// delay 2s before activate green man
    digitalWrite(red, LOW);		// turn off red man
    digitalWrite(green, HIGH);	// & turn on green man
    delay(3000);	// delay for 3s
    // blink green man
  }
  else
  {
    digitalWrite(red, HIGH);	// go back to don't walk state
    digitalWrite(green, LOW);
  }
}