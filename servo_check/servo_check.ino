 #include <Servo.h>
 

Servo C;
int C_delay = 120;
Servo D;
int D_delay = 125;
Servo E;
int E_delay = 100;
Servo F;
int F_delay = 140;
Servo G;
int G_delay = 125;
Servo A;
int A_delay = 100;
Servo B;//bzw H
int B_delay = 130;
Servo Z;
int Z_delay = 130;

int tempo = 150; //tempo in bpm
bool ini = true;

float x = (60/tempo)*1000;
int t = x+200; //plus avg delay of each note  1/4 quarter
int tt = 2*t; //1/2 half
int ttt = 3*t; //3/4 three quarter
int tttt = 4*t; //4/4 whole

void setup()

{
 //Servo.attach(<Pin Nr. <9> >) :)
 C.attach(9);
 D.attach(2);
 E.attach(10);
 F.attach(3);
 G.attach(12);
 A.attach(5);
 B.attach(13);
 Z.attach(6);
}

void init_all()
{
  C.write(0);
  D.write(0);
  E.write(0);
  F.write(0);
  G.write(0);
  A.write(0);
  B.write(0);
  Z.write(0);
  delay(750);
  //_____
  C.write(74);
  D.write(75);
  E.write(77);
  F.write(67);
  G.write(78);
  A.write(85);
  B.write(63);
  Z.write(66);
  delay(2000);
}
void quick_init()
{
  C.write(74);
  D.write(75);
  E.write(77);
  F.write(67);
  G.write(78);
  A.write(85);
  B.write(63);
  Z.write(66);
  delay(250);
 }
void double_hit()
{
  C.write(74);
  Z.write(66);
  int delta = abs(C_delay - Z_delay);
  //IF CASE!
  delay(1000);
  C.write(118);
  Z.write(110);
  delay(C_delay);
  C.write(74);
  delay(delta);
  Z.write(66);
}
void C_hit()
{
  C.write(118);
  //delay(120);
  delay(C_delay);
  C.write(74);
}

void D_hit()
{
    D.write(119);
    //delay(125);
    delay(D_delay);
    D.write(75);
}

void E_hit()
{
  E.write(121);
  delay(E_delay);
  E.write(77);
}

void F_hit()
{
  F.write(111);
  //delay(140);
  delay(F_delay);
  F.write(67);
}
void G_hit()
{
  G.write(122);
  //delay(125);
  delay(G_delay);
  G.write(78);
}
void A_hit()
{
  A.write(128);
  //delay(105);
  delay(A_delay);
  A.write(84);
}
void B_hit()
{
  B.write(108);
  //delay(130);
  delay(B_delay);
  B.write(63); 
}
void Z_hit()
{
   Z.write(110);
   //delay(135);
   delay(Z_delay);
   Z.write(66);
}

void imp_march()
{
  E_hit();
  delay(t);
  E_hit();
  delay(t);
  E_hit();
  delay(tt);
  C_hit();
  delay(t);
  G_hit();
  delay(t);
  E_hit();
  delay(ttt);
  C_hit();
  delay(t);
  G_hit();
  delay(t);
  E_hit();
  delay(tttt);
  B_hit();
  delay(t*1.25);
  B_hit();
  delay(t*1.25);
  B_hit();
  delay(tt);
  Z_hit();
  delay(t);
  G_hit();
  delay(t);
  E_hit();
  delay(tt);
  C_hit();
  delay(t);
  G_hit();
  delay(t);
  E_hit();
  delay(tttt);
}

void happy_birthday()
{ 
  C_hit();
  delay(t);
  C_hit();
  delay(t);
  D_hit();
  delay(tt);
  C_hit();
  delay(ttt);
  F_hit();
  delay(tt);
  E_hit();
  delay(tttt);
  //________
  C_hit();
  delay(t);
  C_hit();
  delay(t);
  D_hit();
  delay(tt);
  C_hit();
  delay(tt);
  G_hit();
  delay(tt);
  F_hit();
  delay(tttt);
  //_________
  C_hit();
  delay(t);
  C_hit();
  delay(t);
  Z_hit();
  delay(tt);
  A_hit();
  delay(tt);
  F_hit();
  delay(tt);
  E_hit();
  delay(tt);
  D_hit();
  delay(tt);
  //_______
  A_hit();
  delay(t);
  A_hit();
  delay(t+80);
  A_hit();
  delay(tt);
  F_hit();
  delay(tt);
  G_hit();
  delay(tt);
  F_hit();
  delay(t);
  delay(t);
  delay(10000);
}
void dudeldum()
{
 int lays = 150;
 C_hit();
 delay(lays);
 D_hit();
 delay(lays);
 E_hit();
 delay(lays);
 F_hit();
 delay(lays);
 G_hit();
 delay(lays);
 A_hit();
 delay(lays);
 B_hit();
 delay(lays);
 Z_hit();
 delay(lays*5);
 Z_hit();
 delay(lays);
 B_hit();
 delay(lays);
 A_hit();
 delay(lays);
 G_hit();
 delay(lays);
 F_hit();
 delay(lays);
 E_hit();
 delay(lays);
 D_hit();
 delay(lays);
 C_hit();
 delay(lays);
 delay(lays*5);
 }
void hit(Servo servus, int start, int delayla, int ende)
{
  servus.write(ende);
  delay(delayla);
  servus.write(start);
}
void all(){
  C_hit();
  D_hit();
E_hit();
F_hit();
G_hit();
 A_hit();
 B_hit();
 Z_hit();
 delay(500);
  }
void loop()

{
  if(ini)
  {
    init_all();
    ini = false;
  }
  /*delay(1000);
  A_hit();
  delay(1000);
  C_hit();
  dudeldum();
  delay(2000);
  quick_init();
  delay(500);
  imp_march();
  happy_birthday();*/
  delay(1000);
  double_hit();
}

   
