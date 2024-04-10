int line[6]={0,1,2,3,4,5};
int col[6]={8,9,10,11,12,13};

int c[6][6]={{0,0,1,1,1,1},
             {0,1,0,0,0,0},
             {1,0,0,0,0,0},
             {1,0,0,0,0,0},
             {0,1,0,0,0,0},
             {0,0,1,1,1,1}};

int l[6][6]={{0,1,0,0,0,0},
             {0,1,0,0,0,0},
             {0,1,0,0,0,0},
             {0,1,0,0,0,0},
             {0,1,0,0,0,0},
             {0,1,1,1,1,1}};

int h[6][6]={{1,0,0,0,0,1},
             {1,0,0,0,0,1},
             {1,1,1,1,1,1},
             {1,0,0,0,0,1},
             {1,0,0,0,0,1},
             {1,0,0,0,0,1}};

int s[6][6]={{1,1,1,1,1,1},
             {0,1,0,0,0,0},
             {0,0,1,0,0,0},
             {0,0,0,1,0,0},
             {0,0,0,0,1,0},
             {1,1,1,1,1,1}};


void setup() {
  for(int i=0;i<6;i++){
    pinMode(line[i],OUTPUT);
    pinMode(col[i],OUTPUT);
    digitalWrite(line[i],LOW);
    digitalWrite(col[i],HIGH);
  }

}

void loop() {
  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      if(c[j][i]==1){
        digitalWrite(line[i],HIGH);
        digitalWrite(col[j],LOW);
        delay(1);
        digitalWrite(line[i],LOW);
        digitalWrite(col[j],HIGH);
      }
    }
  }
  delay(1000);

  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      if(l[j][i]==1){
        digitalWrite(line[i],HIGH);
        digitalWrite(col[j],LOW);
        delay(1);
        digitalWrite(line[i],LOW);
        digitalWrite(col[j],HIGH);
      }
    }
  }
  delay(1000);

  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      if(h[j][i]==1){
        digitalWrite(line[i],HIGH);
        digitalWrite(col[j],LOW);
        delay(1);
        digitalWrite(line[i],LOW);
        digitalWrite(col[j],HIGH);
      }
    }
  }
  delay(1000);

  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      if(s[j][i]==1){
        digitalWrite(line[i],HIGH);
        digitalWrite(col[j],LOW);
        delay(1);
        digitalWrite(line[i],LOW);
        digitalWrite(col[j],HIGH);
      }
    }
  }
  delay(1000);

}
