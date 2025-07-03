#define LDR_PIN A0 // LDR connected to analog pin A0
#define LED_PIN 13 // LED or relay connected to digital pin 13

void setup() {
pinMode(LED_PIN, OUTPUT);
Serial.begin(9600);
}

void loop() {
int ldrValue = analogRead(LDR_PIN); // Read LDR value
Serial.println(ldrValue); // Print LDR value for debugging

if (ldrValue < 500) { // Threshold for darkness
digitalWrite(LED_PIN, HIGH); // Turn ON the light
} else {
digitalWrite(LED_PIN, LOW); // Turn OFF the light
}
delay(100); // Small delay for stability
}
