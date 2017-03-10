#define duration 50000 

#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define DP 9

#define disp1 10
#define disp2 11
#define disp3 12
#define disp4 13

#define numbersegments { \
{1,1,1,1,1,1,0,0},\
{0,1,1,0,0,0,0,0},\
{1,1,0,1,1,0,1,0},\
{1,1,1,1,0,0,1,0},\
{0,1,1,0,0,1,1,0},\
{1,0,1,1,0,1,1,0},\
{1,0,1,1,1,1,1,0},\
{1,1,1,0,0,0,0,0},\
{1,1,1,1,1,1,1,0},\
{1,1,1,0,0,1,1,0},\
}

#define rotatesegments { \
{1,0,0,0,0,0,0,0},\
{0,1,0,0,0,0,0,0},\
{0,0,1,0,0,0,0,0},\
{0,0,0,1,0,0,0,0},\
{0,0,0,0,1,0,0,0},\
{0,0,0,0,0,1,0,0},\
}

#define eachsegments { \
{1,0,0,0,0,0,0,0},\
{0,1,0,0,0,0,0,0},\
{0,0,1,0,0,0,0,0},\
{0,0,0,1,0,0,0,0},\
{0,0,0,0,1,0,0,0},\
{0,0,0,0,0,1,0,0},\
{0,0,0,0,0,0,1,0},\
{0,0,0,0,0,0,0,1},\
}


byte numbers[10][8] = numbersegments; 
byte rotates[6][8] = rotatesegments; 
byte eachs[8][8] = eachsegments; 
const int segments[8] = {A, B, C, D, E, F, G, DP};

void setup() 
{ 
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(disp1, OUTPUT);
  pinMode(disp2, OUTPUT);  
  pinMode(disp3, OUTPUT);
  pinMode(disp4, OUTPUT);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(DP, LOW);
  digitalWrite(disp1, HIGH);
  digitalWrite(disp2, HIGH);
  digitalWrite(disp3, HIGH);
  digitalWrite(disp4, HIGH);
 } 

 void loop()
 { 
    test2();
    test3();
    test1();
    
 }        

 void test1()
  {
  for (int digit4=0; digit4<10; digit4++)
  { 
    for (int digit3=0; digit3<10; digit3++)
     { 
       for (int digit2=0; digit2<10; digit2++)
        { 
          for (int digit1=0; digit1<10; digit1++)
           { 
             for (int t=0; t<10; t++)
              { 
                setsegments(digit1, disp4, duration);
                setsegments(digit2, disp3, duration);
                setsegments(digit3, disp2, duration);
                setsegments(digit4, disp1, duration);
               }
            }
         }
      }
   }
  }

 void setsegments(int number, int digit, int ontime)
  { 
    for (int seg=0; seg<8; seg++)
    { 
      if(numbers[number][seg]==1)
      { 
        digitalWrite(segments[seg], HIGH);
      }
      else 
      {
        digitalWrite(segments[seg], LOW);
      }
    }
    
    digitalWrite(digit, LOW);
    delayMicroseconds(ontime);
    digitalWrite(digit, HIGH);
  }
  
  void test2()
  {
 // for (int digit4=0; digit4<6; digit4++)
 // { 
 //   for (int digit3=0; digit3<6; digit3++)
 //    { 
       for (int digit2=0; digit2<6; digit2++)
        { 
          for (int digit1=0; digit1<6; digit1++)
           { 
             for (int t=0; t<30; t++)
              { 
                setrotatesegments(digit1, disp1, duration);
                setrotatesegments(digit1, disp2, duration);
                setrotatesegments(digit1, disp3, duration);
                setrotatesegments(digit1, disp4, duration);
               }
            }
         }
   //   }
   //}
    
  }
  
  void setrotatesegments(int number, int digit, int ontime)
  { 
    for (int seg=0; seg<8; seg++)
    { 
      if(rotates[number][seg]==1)
      { 
        digitalWrite(segments[seg], HIGH);
      }
      else 
      {
        digitalWrite(segments[seg], LOW);
      }
    }
    
    digitalWrite(digit, LOW);
    delayMicroseconds(ontime);
    digitalWrite(digit, HIGH);
  }
  

  void test3()
  {
int     digit1 = 7;
       for (int digit2=0; digit2<500; digit2++)
        { 
         for (int disp=10; disp<14; disp++)
           { 
             for (int t=0; t<30; t++)
              { 
                setmysegment(digit1, disp, duration);
//                setmysegment(digit1, disp2, duration);
//                setmysegment(digit1, disp3, duration);
//                setmysegment(digit1, disp4, duration);
               }
            }
        }
  }

  void setmysegment(int number, int digit, int ontime)
  { 
    for (int seg=0; seg<8; seg++)
    { 
      if(eachs[number][seg]==1)
      { 
        digitalWrite(segments[seg], HIGH);
      }
      else 
      {
        digitalWrite(segments[seg], LOW);
      }
    }
    
    digitalWrite(digit, LOW);
    delayMicroseconds(ontime);
    digitalWrite(digit, HIGH);
  }
  

