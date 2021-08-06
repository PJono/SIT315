const uint8_t ledPin = 13;
const uint8_t motionPin = 2;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(motionPin, INPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(motionPin), lightPower, CHANGE);
}

void loop(){}

void lightPower(){
  digitalWrite(ledPin, !digitalRead(ledPin));
  Serial.print(String(digitalRead(ledPin))+"\n");
}