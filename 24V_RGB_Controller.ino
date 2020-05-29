int RVOL = A0;  //Red volumn analog pin A0
int GVOL = A1;  //Green volumn analog pin A1
int BVOL = A2;  //Blue volumn analog pin A2
int RLED = 3;   //Red LED Digital pin 3
int TGSW = 4;   //Toggle switch Digital pin 4
int GLED = 5;   //Green LED Digital pin 5
int BLED = 6;   //Blue LED Digital pin 6
int r = 0;
int g = 0;
int b = 0;
int w = 0;
int rg = 0;
int gb = 0;
int br = 0;
int rval = 0;
int rn = 0;
int gval = 0;
int gn = 0;
int bval = 0;
int bn = 0;
int swstage = 0;

void setup()
{
  TCCR2B = TCCR2B & B11111000 | B00000011; // for PWM frequency of 980.39 Hz
  pinMode(RLED, OUTPUT);
  pinMode(TGSW, INPUT);
  pinMode(GLED, OUTPUT);
  pinMode(BLED, OUTPUT);
}

void loop()
{
  swstage = digitalRead(TGSW);
  if (swstage == HIGH) 
    {
      if (RVOL <=10)
      {
        rval = 0;
      }
      if (GVOL <=10)
      {
        gval = 0;
      }
      if (BVOL <=10)
      {
        bval = 0;
      }
      rval = analogRead(RVOL);
      rn = map(rval, 0, 1023, 0, 255);
      gval = analogRead(GVOL);
      gn = map(gval, 0, 1023, 0, 255); 
      bval = analogRead(BVOL);
      bn = map(bval, 0, 1023, 0, 255);

      if (rn <= 5)
      {
        analogWrite(RLED, 0);
      }
      else
      {
        analogWrite(RLED, rn);
      }
      if (gn <= 5)
      {
        analogWrite(GLED, 0);
      }
      else
      {
        analogWrite(GLED, gn);
      }
      if (bn <= 5)
      {
        analogWrite(BLED, 0);
      }
      else
      {
        analogWrite(BLED, bn);
      }
    }
    else 
    {
      analogWrite(RLED, 0);
      analogWrite(GLED, 0);
      analogWrite(BLED, 0);

      for (r = 0; r < 255; r++)
      {
        analogWrite(RLED, r);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      for (r = 255; r > 0; r--)
      {
        analogWrite(RLED, r);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      analogWrite(RLED, 0);
      analogWrite(GLED, 0);
      analogWrite(BLED, 0);
      delay(100);
      for (rg = 0; rg < 255; rg++)
      {
        analogWrite(RLED, rg);
        analogWrite(GLED, rg);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      for (rg = 255; rg > 0; rg--)
      {
        analogWrite(RLED, rg);
        analogWrite(GLED, rg);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      analogWrite(RLED, 0);
      analogWrite(GLED, 0);
      analogWrite(BLED, 0);
      delay(100);
      for (g = 0; g < 255; g++)
      {
        analogWrite(GLED, g);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      for (g = 255; g > 0; g--)
      {
        analogWrite(GLED, g);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      analogWrite(RLED, 0);
      analogWrite(GLED, 0);
      analogWrite(BLED, 0);
      delay(100);
      for (gb = 0; gb < 255; gb++)
      {
        analogWrite(GLED, gb);
        analogWrite(BLED, gb);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      for (gb = 255; gb > 0; gb--)
      {
        analogWrite(GLED, gb);
        analogWrite(BLED, gb);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      analogWrite(RLED, 0);
      analogWrite(GLED, 0);
      analogWrite(BLED, 0);
      delay(100);
      for (b = 0; b < 255; b++)
      {
        analogWrite(BLED, b);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      for (b = 255; b > 0; b--)
      {
        analogWrite(BLED, b);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      analogWrite(RLED, 0);
      analogWrite(GLED, 0);
      analogWrite(BLED, 0);
      delay(100);
      for (w = 0; w < 255; w++)
      {
        analogWrite(RLED, w);
        analogWrite(GLED, w);
        analogWrite(BLED, w);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      for (w = 255; w > 0; w--)
      {
        analogWrite(RLED, w);
        analogWrite(GLED, w);
        analogWrite(BLED, w);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
      }
      analogWrite(RLED, 0);
      analogWrite(GLED, 0);
      analogWrite(BLED, 0);
      delay(100);
      for (br = 0; br < 255; br++)
      {
        analogWrite(BLED, br);
        analogWrite(RLED, br);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
     }
     for (br = 255; br > 0; br--)
     {
        analogWrite(BLED, br);
        analogWrite(RLED, br);
        delay(30);
        swstage = digitalRead(TGSW);
        if (swstage == HIGH)
        {
          break;
        }
     }
     analogWrite(RLED, 0);
     analogWrite(GLED, 0);
     analogWrite(BLED, 0);
     delay(100);
   }
}
