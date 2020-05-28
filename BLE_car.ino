int l1=9;
int l2=12;
int r1=11;
int r2=10;
int horn=8;
int led=13;
char data;
void setup()
{
    Serial.begin(9600);
    pinMode(l1, OUTPUT);
    pinMode(l2, OUTPUT);
    pinMode(r1, OUTPUT);
    pinMode(r2, OUTPUT);
    pinMode( horn,OUTPUT);
    pinMode(led,OUTPUT);
}

void loop(){
  if(Serial.available()){
    data = Serial.read();
    Serial.println(data);
  }
    if(data == 'F'){
      forward();
    }
    else if(data == 'B'){
      back();
    }
    else if(data == 'L'){
      left();
    }
    else if(data == 'R'){
      right();
    }
    else if(data == 'V'){
       digitalWrite(horn,HIGH);
    }
    else if(data == 'v'){
       digitalWrite(horn,LOW);
    }
    else if(data == 'W'){
      digitalWrite(led,HIGH);
    }
    else if(data == 'w'){
      digitalWrite(led,LOW);
     }
    else if(data == 'S'){
      pause();
    }
}

void forward()
{
    digitalWrite(l1,HIGH);
    digitalWrite(l2,LOW);
    digitalWrite(r1,HIGH);
    digitalWrite(r2,LOW);
}

void left()
{
    digitalWrite(l1,LOW);
    digitalWrite(l2,HIGH);
    digitalWrite(r1,HIGH);
    digitalWrite(r2,LOW);
}

void right()
{
    digitalWrite(l1,HIGH);
    digitalWrite(l2,LOW);
    digitalWrite(r1,LOW);
    digitalWrite(r2,HIGH);
}

void back()
{
    digitalWrite(l1,LOW);
    digitalWrite(l2,HIGH);
    digitalWrite(r1,LOW);
    digitalWrite(r2,HIGH);
}

void pause()
{
    digitalWrite(l1,LOW);
    digitalWrite(l2,LOW);
    digitalWrite(r1,LOW);
    digitalWrite(r2,LOW);
}
