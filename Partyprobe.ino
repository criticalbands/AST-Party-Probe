const int tcrtPin1 = A0; //the tracking module attach to pin 2
const int out1 = 9;
const int tcrtPin2 = A2; //the tracking module attach to pin 2
const int out2 = 10;
const int tcrtPin3 = A3; //the tracking module attach to pin 2
const int out3 = 11;

void setup()
{
  pinMode(tcrtPin1, INPUT_PULLUP); // set trackingPin as INPUT
  pinMode(out1, OUTPUT); //set ledPin as OUTPUT
  pinMode(tcrtPin2, INPUT_PULLUP); // set trackingPin as INPUT
  pinMode(out2, OUTPUT); //set ledPin as OUTPUT
  pinMode(tcrtPin3, INPUT_PULLUP); // set trackingPin as INPUT
  pinMode(out3, OUTPUT); //set ledPin as OUTPUT
}

void loop() {
  boolean val1 = digitalRead(tcrtPin1); // read the value of tcrt5000
  if (val1 == HIGH) //if it is HiGH
  {
    digitalWrite(out1, HIGH);
  }
  else
  {
    digitalWrite(out1, LOW);
  }
  boolean val2 = digitalRead(tcrtPin2); // read the value of tcrt5000
  if (val2 == HIGH) //if it is HiGH
  {
    digitalWrite(out2, HIGH);
  }
  else
  {
    digitalWrite(out2, LOW);
  }
  boolean val3 = digitalRead(tcrtPin3); // read the value of tcrt5000
  if (val3 == HIGH) //if it is HiGH
  {
    digitalWrite(out3, HIGH);
  }
  else
  {
    digitalWrite(out3, LOW);
  }
}
