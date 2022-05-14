// Código Ejemplo
int Led_Pin = 13;
void setup()
{
	// Configurar Pin como Salida
	pinMode(Led_Pin, OUTPUT);
}
void loop()
{
	// Encender Led
	digitalWrite(Led_Pin, HIGH);
	// Esperar 0.2 SegundoS
	delay(200);
	// Apagar Led
	digitalWrite(Led_Pin, LOW);
	// Esperar 0.2 Segundo
	delay(200);
}