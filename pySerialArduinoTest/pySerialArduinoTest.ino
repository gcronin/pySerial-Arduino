byte incomingByte = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    incomingByte = Serial.read();
  }
  if(incomingByte == 'h')
  {
    digitalWrite(13, HIGH);
  }
  
}
