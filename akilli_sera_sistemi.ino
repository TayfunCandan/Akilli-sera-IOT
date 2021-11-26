#define BLYNK_PRINT Serial    
#include <SPI.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SimpleTimer.h>
#include <DHT.h>

char auth[] = "Blink_Auth_code"; //Enter the Auth code which was send by Blink

char ssid[] = "WİFİ-NAME";  //Enter your WIFI Name
char pass[] = "WİFİ-PASSWORD";  //Enter your WIFI Password
//-------------------------------

const int prob = A0;
int toprak_kurulugu=0;

int gun_isigi;
//---------------------------
 
 
int deger = 0;
//----------------------------
#define DHTPIN 2          // DİGİA PİN 14
  

#define DHTTYPE DHT11     // DHT 11


DHT dht(DHTPIN, DHTTYPE);
SimpleTimer timer;

void sendSensor()
{
  float h = dht.readHumidity(); // nem degeri olcme
  float t = dht.readTemperature(); // or dht.readTemperature(true) for Fahrenheit
if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  
  Blynk.virtualWrite(V5, h);  //V5 is for Humidity
  Blynk.virtualWrite(V6, t);  //V6 is for Temperature
 
}




void setup()
{
  Serial.begin(9600); // See the connection status in Serial Monitor
  Blynk.begin(auth, ssid, pass);
   
  dht.begin();

  timer.setInterval(1000L, sendSensor);
}

void loop()
{
  Blynk.run(); // Initiates Blynk
  timer.run(); // Initiates SimpleTimer

 toprak_kurulugu=analogRead(prob);
 

    Serial.print("toprak kurulugu:");
    Serial.println(toprak_kurulugu); 
        Serial.println(gun_isigi);
        delay(500);


  







    
  
}
