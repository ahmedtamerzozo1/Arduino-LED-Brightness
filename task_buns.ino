// C++ code
int led=10;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
analogWrite(led,0);
  delay(500);
analogWrite(led,50);
  delay(500);
analogWrite(led,150);
  delay(500);
analogWrite(led,200);
  delay(500);
analogWrite(led,255);
  delay(500);
analogWrite(led,200);
  delay(500);
analogWrite(led,150);
  delay(500);
analogWrite(led,50);
  delay(500);
analogWrite(led,0);
  delay(500);

}