// Temperatura
int readValue = 0;
int lastValue = 1;
int sensorPin = A0;
int Led_Pin = 13;
float voltsValue;
float tempValue;


void setup()
{
  pinMode(Led_Pin, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	// Lectura Analoga
	readValue = analogRead(sensorPin);
	if (lastValue != readValue) {
	Serial.print("readValue: ");
	Serial.print(readValue);
	lastValue = readValue;
	voltsValue = 5.0 / 1024 * readValue;
	Serial.print(" -> voltsValue: ");
	Serial.print(voltsValue);
	tempValue = voltsValue * 100 - 50;
	Serial.print(" -> tempValue: ");
	Serial.println(tempValue);
    }
	delay(100);
  
  digitalWrite(Led_Pin, HIGH);
  delay(200);
  digitalWrite(Led_Pin, LOW);
  delay(200);
}