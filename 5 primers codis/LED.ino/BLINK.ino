/**********************************************************************************
**                                                                               **
**                                   BLINK                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()
{
  pinMode(13,OUTPUT);
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}

//********** Funcions *************************************************************

