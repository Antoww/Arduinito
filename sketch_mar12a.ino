/*
 * Author : Antow
 * Projet : Arduinito
 * IDE : V1.8.19
 */

int BASE = 2;
int NUM = 6;

void setup()
{
  for(int i = BASE; i < BASE + NUM; i ++)
  {
   pinMode(i, OUTPUT); 
  }
}

void loop()
{

  for (int i = BASE; i < BASE + NUM; i ++)
  {
    digitalWrite(i, LOW);
    delay(1000);
  }

  for (int i = BASE; i < BASE + NUM; i ++)
  {
    digitalWrite(i, HIGH);
    delay(500);
  }

}
