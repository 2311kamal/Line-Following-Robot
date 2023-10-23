/*------ Arduino Line Fol0er Code----- */

/*-------defining Inputs------*/

#define LS A2  // left sensor

#define RS A1  // right sensor

/*-------defining Outputs------*/

#define LM1 5  // left motor

#define LM2 6  // left motor

#define RM1 9  // right motor

#define RM2 10  // right motor

void setup()

{
  Serial.begin(9600);

  pinMode(LS, INPUT);

  pinMode(RS, INPUT);

  pinMode(LM1, OUTPUT);

  pinMode(LM2, OUTPUT);

  pinMode(RM1, OUTPUT);

  pinMode(RM2, OUTPUT);
}

void loop()

{
// delay(1000);

  int l = analogRead(LS);
  int r = analogRead(RS);

  Serial.println(l);
  Serial.println(r);

  // delay(2000);



int speed=175;

  if (l > 500  && r > 500)  // Move Forward

  {

    analogWrite(LM1, speed);

    analogWrite(LM2, 0);

    analogWrite(RM1, speed);

    analogWrite(RM2, 0);
  }

  else if (l > 500  && r < 500)  // Turn right

  {

    analogWrite(LM1, speed);

    analogWrite(LM2, 0);

    analogWrite(RM1, 0);

    analogWrite(RM2, speed);
  }

  else if (l < 500  && r > 500)  // turn left

  {


    analogWrite(LM1, 0);

    analogWrite(LM2, speed);

    analogWrite(RM1, speed);

    analogWrite(RM2, 0);
  }

  else if (l < 500  && r < 500)  // stop

  {

    analogWrite(LM1, 0);

    analogWrite(LM2, 0);

    analogWrite(RM1, 0);

    analogWrite(RM2, 0);
  }
}
