#include <SPI.h>
#include <TMRpcm.h> //https://docs.arduino.cc/libraries/tmrpcm/
#include <SD.h>//https://docs.arduino.cc/libraries/sd/
#include <Talkie.h>//https://docs.arduino.cc/libraries/talkie/
#include <Vocab_US_Large.h>//https://github.com/ArminJo/Talkie/blob/master/src/Vocab_US_Large.h
#include <Vocab_Special.h>//https://github.com/ArminJo/Talkie/blob/master/src/Vocab_Special.h
#include <Vocab_US_TI99.h>//https://github.com/ArminJo/Talkie/blob/master/src/Vocab_US_TI99.h
#define SD_ChipSelectPin 10

Talkie voice;

TMRpcm tmrpcm;
int a0 = 8;
int a1 = 2;
int s3 = 3;
int s4 = 4;
int s5 = 5;
int s6 = 6;
int s7 = 7;//YELLOW WIRE

int i1, j1, k1, l1, m1, n1;

void setup(){
  pinMode(a0,INPUT);
  pinMode(a1,INPUT);
  pinMode(s3,INPUT);
  pinMode(s4,INPUT);
  pinMode(s5,INPUT);
  pinMode(s6,INPUT);
  pinMode(s7,INPUT);
  tmrpcm.speakerPin=9;
  pinMode(10,INPUT);
  Serial.begin(9600);
  if(!SD.begin(SD_ChipSelectPin))
  {
    //Serial.println("SD fail");
    return;
  }
  i1=digitalRead(a0);  //switch 1
  j1=digitalRead(a1);  //switch 2
  k1=digitalRead(s3);  //switch 3
  l1=digitalRead(s4);  //switch 4
  m1=digitalRead(s5);  //switch 5
  n1=digitalRead(s6);  //switch 6
  
}
void loop()
{
  int i=digitalRead(a0);  //switch 1
  delay(30);
  int j=digitalRead(a1);  //switch 2
  delay(30);
  int k=digitalRead(s3);  //switch 3
  delay(30);
  int l=digitalRead(s4);  //switch 4
  delay(30);
  int m=digitalRead(s5);  //switch 5
  delay(30);
  int n=digitalRead(s6);  //switch 6
  delay(30);
  int o=digitalRead(s7);  //slide switch

  if (o==LOW)
  {
    if(i != i1 && j == j1 && k == k1 && l == l1 && m == m1 && n == n1)
    {
      Serial.print("A");
      tmrpcm.setVolume(2);
      voice.say(spt_A);
    }
    else
    if(i != i1 && j != j1 && k == k1 && l == l1 && m == m1 && n == n1)
    {
      Serial.print("B");
      tmrpcm.setVolume(2);
      voice.say(spt_B);
    }
    else
    if(i != i1 && j == j1 && k == k1 && l != l1 && m == m1 && n == n1)
    {
      Serial.print("C");
      tmrpcm.setVolume(5);
      tmrpcm.play("C.wav");
    }
    else
    if(i != i1 && j == j1 && k == k1 && l != l1 && m != m1 && n == n1)
    {
      Serial.print("D");
      tmrpcm.setVolume(5);
      tmrpcm.play("D.wav");
    }
    else
    if(i != i1 && j == j1 && k == k1 && l == l1 && m != m1 && n == n1)
    {
      Serial.print("E");
      tmrpcm.setVolume(5);
      tmrpcm.play("E.wav");
    }
    else
    if(i != i1 && j != j1 && k == k1 && l != l1 && m == m1 && n == n1)
    {
      Serial.print("F");
      tmrpcm.setVolume(5);
      tmrpcm.play("F.wav");
    }
    else
    if(i != i1 && j != j1 && k == k1 && l != l1 && m != m1 && n == n1)
    {
      Serial.print("G");
      tmrpcm.setVolume(5);
      tmrpcm.play("G.wav");
    }
    else
    if(i != i1 && j != j1 && k == k1 && l == l1 && m != m1 && n == n1)
    {
      Serial.print("H");
      tmrpcm.setVolume(5);
      tmrpcm.play("H.wav");
    }
    else
    if(i == i1 && j != j1 && k == k1 && l != l1 && m == m1 && n == n1)
    {
      Serial.print("I");
      tmrpcm.setVolume(5);
      tmrpcm.play("I.wav");
    }
    else
    if(i == i1 && j != j1 && k == k1 && l != l1 && m != m1 && n == n1)
    {
      Serial.print("J");
      tmrpcm.setVolume(5);
      tmrpcm.play("J.wav");
    }
    else
    if(i != i1 && j == j1 && k != k1 && l == l1 && m == m1 && n == n1)
    {
      Serial.print("K");
      tmrpcm.setVolume(5);
      tmrpcm.play("K.wav");
    }
    else
    if(i != i1 && j != j1 && k != k1 && l == l1 && m == m1 && n == n1)
    {
      Serial.print("L");
      tmrpcm.setVolume(5);
      tmrpcm.play("L.wav");
    }
    else
    if(i != i1 && j == j1 && k != k1 && l != l1 && m == m1 && n == n1)
    {
      Serial.print("M");
      tmrpcm.setVolume(5);
      tmrpcm.play("M.wav");
    }
    else
    if(i != i1 && j == j1 && k != k1 && l != l1 && m != m1 && n == n1)
    {
      Serial.print("N");
      tmrpcm.setVolume(5);
      tmrpcm.play("N.wav");
    }
    else
    if(i != i1 && j == j1 && k != k1 && l == l1 && m != m1 && n == n1)
    {
      Serial.print("O");
      tmrpcm.setVolume(5);
      tmrpcm.play("O.wav");
    }
    else
    if(i != i1 && j != j1 && k != k1 && l != l1 && m == m1 && n == n1)
    {
      Serial.print("P");
      tmrpcm.setVolume(5);
      tmrpcm.play("P.wav");
    }
    else
    if(i != i1 && j != j1 && k != k1 && l != l1 && m != m1 && n == n1)
    {
      Serial.print("Q");
      tmrpcm.setVolume(5);
      tmrpcm.play("Q.wav");
    }
    else
    if(i != i1 && j != j1 && k != k1 && l == l1 && m != m1 && n == n1)
    {
      Serial.print("R");
      tmrpcm.setVolume(5);
      tmrpcm.play("R.wav");
    }
    else
    if(i == i1 && j != j1 && k != k1 && l != l1 && m == m1 && n == n1)
    {
      Serial.print("S");
      tmrpcm.setVolume(5);
      tmrpcm.play("S.wav");
    }
    else
    if(i == i1 && j != j1 && k != k1 && l != l1 && m != m1 && n == n1)
    {
      Serial.print("T");
      tmrpcm.setVolume(5);
      tmrpcm.play("T.wav");
    }
    else
    if(i != i1 && j == j1 && k != k1 && l == l1 && m == m1 && n != n1)
    {
      Serial.print("U");
      tmrpcm.setVolume(5);
      tmrpcm.play("U.wav");
    }
    else
    if(i != i1 && j != j1 && k != k1 && l == l1 && m == m1 && n != n1)
    {
      Serial.print("V");
      tmrpcm.setVolume(5);
      tmrpcm.play("V.wav");
    }
    else
    if(i == i1 && j != j1 && k == k1 && l != l1 && m != m1 && n != n1)
    {
      Serial.print("W");
      tmrpcm.setVolume(5);
      tmrpcm.play("W.wav");
    }
    else
    if(i != i1 && j == j1 && k != k1 && l != l1 && m == m1 && n != n1)
    {
      Serial.print("X");
      tmrpcm.setVolume(5);
      tmrpcm.play("X.wav");
    }
    else
    if(i != i1 && j == j1 && k != k1 && l != l1 && m != m1 && n != n1)
    {
      Serial.print("Y");
      tmrpcm.setVolume(5);
      tmrpcm.play("Y.wav");
    }
    else
    if(i != i1 && j == j1 && k != k1 && l == l1 && m != m1 && n != n1)
    {
      Serial.print("Z");
      tmrpcm.setVolume(5);
      tmrpcm.play("Z.wav");
    } 
    else
    if(i == i1 && j == j1 && k == k1 && l != l1 && m == m1 && n == n1)
    {
      Serial.print(" ");
      tmrpcm.setVolume(5);
      tmrpcm.play("space.wav");
    }
    else
    if(i == i1 && j == j1 && k != k1 && l == l1 && m == m1 && n == n1)
    {
      Serial.println();
      tmrpcm.setVolume(5);
      tmrpcm.play("enter.wav");
    }
    else
    if(i == i1 && j != j1 && k == k1 && l == l1 && m == m1 && n == n1) 
    {
      Serial.print(",");
      tmrpcm.setVolume(5);
      tmrpcm.play("comma.wav");  
    }
    else
    if(i == i1 && j != j1 && k != k1 && l == l1 && m == m1 && n == n1)
    {
      Serial.print(";");
      tmrpcm.setVolume(5);
      tmrpcm.play("semicolon.wav"); 
    }
    else
    if(i == i1 && j != j1 && k == k1 && l == l1 && m != m1 && n == n1)
    {
      Serial.print(":");
      tmrpcm.setVolume(5);
      tmrpcm.play("colon.wav");
    } 
    else
    if(i == i1 && j != j1 && k == k1 && l == l1 && m != m1 && n != n1)
    {
      Serial.print(".");
      tmrpcm.setVolume(5);
      tmrpcm.play("fullstop.wav");
    }
    else
    if(i != i1 && j != j1 && k != k1 && l != l1 && m != m1 && n != n1)
    {
      Serial.print("for");
      tmrpcm.setVolume(5);
      tmrpcm.play("for.wav");
    }
     else
    if(i == i1 && j == j1 && k != k1 && l != l1 && m == m1 && n != n1)
    {
      Serial.print("ing");
      tmrpcm.setVolume(5);
      tmrpcm.play("ing.wav");
    }
    else
    if(i != i1 && j != j1 && k == k1 && l != l1 && m == m1 && n != n1)
    {
      Serial.print("ed");
      tmrpcm.setVolume(5);
      tmrpcm.play("ed.wav");
    }
    else
    if(i != i1 && j != j1 && k != k1 && l != l1 && m == m1 && n != n1)
    {
      Serial.print("and");
      tmrpcm.setVolume(5);
      tmrpcm.play("and.wav");
    }
    else
    if(i == i1 && j != j1 && k != k1 && l != l1 && m != m1 && n != n1)
    {
      Serial.print("with");
      tmrpcm.setVolume(5);
      tmrpcm.play("with.wav");
    }
    else
    if(i == i1 && j != j1 && k != k1 && l != l1 && m == m1 && n != n1)
    {
      Serial.print("the");
      tmrpcm.setVolume(5);
      tmrpcm.play("the.wav");
    }
    else
    if(i == i1 && j == j1 && k != k1 && l == l1 && m != m1 && n == n1)
    {
      Serial.print("in");
      tmrpcm.setVolume(5);
      tmrpcm.play("in.wav");
    }
    else
    if(i == i1 && j != j1 && k != k1 && l == l1 && m == m1 && n != n1)
    {
      Serial.print("?");
      tmrpcm.setVolume(5);
      tmrpcm.play("questionmark.wav");
    }
    else
    if(i == i1 && j != j1 && k != k1 && l == l1 && m != m1 && n == n1)
    {
      Serial.print("!");
      tmrpcm.setVolume(5);
      tmrpcm.play("exclamationmark.wav");
    }
    else
    if(i == i1 && j == j1 && k != k1 && l == l1 && m == m1 && n == n1)
    {
      Serial.print("'");
      tmrpcm.setVolume(5);
      tmrpcm.play("apostrophemark.wav");
    }
    else
    if(i == i1 && j == j1 && k != k1 && l == l1 && m == m1 && n != n1)
    {
      Serial.print("-");
      tmrpcm.setVolume(5);
      tmrpcm.play("hyphen.wav");
    }
  }
  if (o==HIGH)
  {
    if(i == i1 && j != j1 && k == k1 && l != l1 && m != m1 && n == n1)
     {
      Serial.print("0");
      tmrpcm.setVolume(5);
      tmrpcm.play("0.wav");
    }
    else
    if(i != i1 && j == j1 && k == k1 && l == l1 && m == m1 && n == n1)
    {
      Serial.print("1");
      tmrpcm.setVolume(5);
      tmrpcm.play("1.wav");
    }
    else
    if(i != i1 && j != j1 && k == k1 && l == l1 && m == m1 && n == n1)
    {
      Serial.print("2");
      tmrpcm.setVolume(5);
      tmrpcm.play("2.wav");
    }
    else
    if(i != i1 && j == j1 && k == k1 && l != l1 && m == m1 && n == n1)
    {
      Serial.print("3");
      tmrpcm.setVolume(5);
      tmrpcm.play("3.wav");
    }
    else
    if(i != i1 && j == j1 && k == k1 && l != l1 && m != m1 && n == n1)
    {
      Serial.print("4");
      tmrpcm.setVolume(5);
      tmrpcm.play("4.wav");
    }
    else
    if(i != i1 && j == j1 && k == k1 && l == l1 && m != m1 && n == n1)
    {
      Serial.print("5");
      tmrpcm.setVolume(5);
      tmrpcm.play("5.wav");
    }
    else
    if(i != i1 && j != j1 && k == k1 && l != l1 && m == m1 && n == n1)
    {
      Serial.print("6");
      tmrpcm.setVolume(5);
      tmrpcm.play("6.wav");
    }
    else
    if(i != i1 && j != j1 && k == k1 && l != l1 && m != m1 && n == n1)
    {
      Serial.print("7");
      tmrpcm.setVolume(5);
      tmrpcm.play("7.wav");
    }
    else
    if(i != i1 && j != j1 && k == k1 && l == l1 && m != m1 && n == n1)
    {
      Serial.print("8");
      tmrpcm.setVolume(5);
      tmrpcm.play("8.wav");
    }
    else
    if(i == i1 && j != j1 && k == k1 && l != l1 && m == m1 && n == n1)
    {
      Serial.print("9");
      tmrpcm.setVolume(5);
      tmrpcm.play("9.wav");
    }
    else
    if(i == i1 && j == j1 && k == k1 && l != l1 && m == m1 && n == n1)
    {
      Serial.print(" ");
      tmrpcm.setVolume(5);
      tmrpcm.play("space.wav");
    }
    else
    if(i == i1 && j == j1 && k != k1 && l == l1 && m == m1 && n == n1)
    {
      Serial.println();
      tmrpcm.setVolume(5);
      tmrpcm.play("enter.wav");
    }
  }
  i1 = i;
  j1 = j;
  k1 = k;
  l1 = l;
  m1 = m;
  n1 = n;
  delay(250);
}