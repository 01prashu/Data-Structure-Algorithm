// #include<iostream>
// using namespace std;
// void fun(int i)
// {
//     try 
//     {
//         if(i>0)
//         {
//             throw i;
//         }
//         else if(i<0)
//         {
//             throw "Negative value";

//         }
//         else
//         {
//             throw "Zero Value";
//         }
//     }
//     catch(int i)
//     {
//         cout<<"Positive value rethrow"<<endl;
//         throw;
//     }
//     catch(const char *str)
//     {
//         cout<<"Statement is rethrow"<<endl;
//         throw;
//     }
// }
// int main()
// {
//     try
//     {
//         // fun(10);
//         // at a time can only one function excute 
//         // after throwing value try block get relese so , only one function can execute
//         fun(-1);
//         fun(0);
//     }
//     catch(int i)
//     {
//         cout<<"Value is: "<<i<<endl;
//     }
//     catch(const char *str)
//     {
//         cout<<"Exception handled in: "<<str<<endl;
//     }
//  return 0;
// }

// #include <Arduino.h>
// #include "DHT.h"

// DHT dht(12 ,DHT11)
// void setup()
// {
//     Serial.begin(9600);
//     dht.begin();
// }
// void loop()
// {
//     float f = dht.readTemperature(true);
//     float d=dht.readTemperature();
//     float h=dht.readHumidity();

//     if(isnan(f) || isnan(d) || isnan(h))
//     {
//         Serial.println("Not working");
//     }
//     Serial.print("Tempreture =");
//     Serial.print(f);
//     Serial.print("F");
//     Serial.print("||");
//     Serial.print(c);
//     Serial.println("deg celcius");
//     Serial.print("Humidity = ");
//     Serial.print(h);
//     Serial.println("%");

// }

// #include <Arduino.h>
// #include "DHT.h"
// DHT dht(12 , DHT11);
// void setup()
// {
//     Serial.begin(9600);
//     dht.begin();
// }
// void loop()
// {
//     float max=0;
//     float min = 96;
//     float f=dht.readTempreture(true);//measure tempreture in farenhite
//     if(f >max)
//     {
//         max=f;
//     }
//     if(min >f)
//     {
//         min=f;
//     }
//     Serial.print("Max");
//     Serial.print(max);
//     Serial.print("||");
//     Serial.print("Min");
//     Serial.println(min);
//     delay(2000);
// }

// write a program using pizo element and use it to play after someone knock
