#define BLYNK_PRINT Serial
#include <Adafruit_BMP085.h>

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

Adafruit_BMP085 bmp;

char auth[] = "dkM1-TfwIZ01Oe57B-WDkIFyZia_Vd3-";
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "HomeAP";
char pass[] = "routerkiller";
BlynkTimer timer;

// This function sends Arduino's up time every second to Virtual Pin (5).
// In the app, Widget's reading frequency should be set to PUSH. This means
// that you define how often to send data to Blynk App.
void myTimerEvent()
{
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  Blynk.virtualWrite(V1, bmp.readTemperature());
  Blynk.virtualWrite(V2, bmp.readPressure());
  Blynk.virtualWrite(V3, bmp.readAltitude());
  Blynk.virtualWrite(V4, bmp.readSealevelPressure());
}

void setup()
{
  // Debug console
  Serial.begin(115200);
  if (!bmp.begin()) {
  Serial.println("Could not find a valid BMP085 sensor, check wiring!");
  while (1) {}
  }
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  // Setup a function to be called every second
  timer.setInterval(1000L, myTimerEvent);
}

void loop()
{
  Blynk.run();
  timer.run(); // Initiates BlynkTimer
}
