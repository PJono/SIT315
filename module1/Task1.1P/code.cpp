const uint8_t ledPin = 13;
const uint8_t motionPin = 2;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(motionPin) == HIGH){
  	digitalWrite(ledPin, HIGH);
    Serial.print("On \n");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.print("Off \n");
  }
}