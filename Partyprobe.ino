
//AST party probe, for use with Line followers, use TRS jack to connect GND, 5v these cna be summed into the totalout via ressitors or a button
const int tcrtPin1 = 2;
const int tcrtPin2 = 3;
const int tcrtPin3 = 4;
const int totalInPin = 5;
const int out1 = 9;
const int out2 = 10;
const int out3 = 11;
const int totalout = 6;

void setup()
{
  pinMode(tcrtPin1, INPUT_PULLUP);
  pinMode(tcrtPin2, INPUT_PULLUP);
  pinMode(tcrtPin3, INPUT_PULLUP);
  pinMode(totalInPin, INPUT);

  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(totalout, OUTPUT);
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
  boolean val4 = digitalRead(totalInPin); // read the value of tcrt5000
  if (val4 == LOW) //if it is HiGH
  {
    digitalWrite(totalout, LOW);
  }
  else
  {
    digitalWrite(totalout, HIGH);
  }
}
