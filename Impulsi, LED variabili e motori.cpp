const byte PWMpin = 11;

void setup ()  {
    pinMode (PWMpin, OUTPUT);

  }

  void loop ()   {
      //accensione
      for (byte dim= 0; dim < 255; dim++)  {
          analogWrite (PWMpin, dim);
          delay (10);

 }
 //spegnimento
 for (byte) dim= 255; dim > 0; dim --)  {
     analogWrite (PWMpin, dim) ;
     delay (10);

   }          
 }