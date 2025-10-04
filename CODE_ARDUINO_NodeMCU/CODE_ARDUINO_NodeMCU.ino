//code ini dibuat secara manual oleh shello ardiansyah XI TJKT (github.com/AkazawaKazairo)
//script ini tidak diperjualbelikan dan siapa saja boleh menggunakan dan recode script ini
//laporkan kepada saya jika ada yang memperjualbelikan script ini! (wa: 08511732330)

// ganti template_id dan template_name sesuai dengan templatemu
#define BLYNK_TEMPLATE_ID "TMPL6YsmZ2kd-"
#define BLYNK_TEMPLATE_NAME "esp8266 relay"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Token dari device di Blynk Console (ganti sesuai tokenmu)
char auth[] = "k3bF1b2h92sY9WgWm7Z1pAoRMvTz";

// WiFi yang akan digunakan untuk menjalankan project
char ssid[] = "Ardi Setengah Matang";
char pass[] = "1029384756";

// Pin relay
int relay1 = D1; // GPIO5
int relay2 = D2; // GPIO4
int relay3 = D5; // GPIO14
int relay4 = D6; // GPIO12

void setup()
{
  Serial.begin(9600);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);

  // Awal semua relay mati (HIGH karena aktif LOW)
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);

  Blynk.begin(auth, ssid, pass);
}

// Relay 1 (V0)
BLYNK_WRITE(V0)
{
  int value = param.asInt();
  digitalWrite(relay1, !value); // tambahkan tanda ! sebelum value jika relay terbalik
}

// Relay 2 (V1)
BLYNK_WRITE(V1)
{
  int value = param.asInt();
  digitalWrite(relay2, !value); // tambahkan tanda ! sebelum value jika relay terbalik
}

// Relay 3 (V2)
BLYNK_WRITE(V2)
{
  int value = param.asInt();
  digitalWrite(relay3, !value); // tambahkan tanda ! sebelum value jika relay terbalik
}

// Relay 4 (V3)
BLYNK_WRITE(V3)
{
  int value = param.asInt();
  digitalWrite(relay4, !value); // tambahkan tanda ! sebelum value jika relay terbalik
}

void loop()
{
  Blynk.run();
}