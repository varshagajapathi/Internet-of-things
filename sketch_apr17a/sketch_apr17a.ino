int buzzer = 8;

int LED = 7;

int flamesensor = 5;


void setup()

{

  Serial.begin(9600);

  pinMode(buzzer, OUTPUT);

  pinMode(LED, OUTPUT);

  pinMode(flamesensor, INPUT);

}


void loop()

{

  int flamedetected = digitalRead(flamesensor);

  if (flamedetected == 0)

  {

    Serial.println(flamedetected);

    digitalWrite(buzzer, HIGH);

    digitalWrite(LED, HIGH);

    delay(2000);

  }

  else

  {

    Serial.println(flamedetected);

    digitalWrite(buzzer, LOW);

    digitalWrite(LED, LOW);

  }

  delay(1000);

}