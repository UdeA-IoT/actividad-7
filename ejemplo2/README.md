# Ejemplo 2

El siguiente ejemplo muestra como enviar información desde un arduino a una plataforma IoT ([dweet.io](http://dweet.io/) en nuestro caso). Basicamente lo que se hace aqui es desplegar el valor de una entrada Analoga en la red.

El ejemplo se divide en dos partes.
* **Parte 1**: Lectura y despliegue en el monitor serial del valor de un potenciometro. [[link](ejemplo2a)]
* **Parte 2**: Despliegue del valor del potenciometro en [dweet.io](http://dweet.io/). [[link](ejemplo2b)] 


## Montaje 

En construcción
<!---
+++++
The hardware setup will resemble the one in the previous recipe.
In addition to setting up the hardware, you will set up the online platform where the sensor
data will be posted. Luckily the platform we are using, dweet.io, is simple to use and
requires no setup or signup. All you need to do is choose a name for your thing, which in this
case is your ESP8266, then you can start publishing data to dweet.io.
How to do it…
Posting data to dweet.io is simple. It is done by calling a URL such as https://dweet.
io/dweet/for/my-thing-name?hello=world. You are required to change my-thingname to the name of your thing, hello to the name of the parameter that you are posting,
and world to the value of the parameter that you are posting online.
In our case, we will call our thing garden-monitor-11447, and the names of the
parameters we will be posting are humidity, temperature, and moisture. Our
URL will look like this: https://dweet.io/dweet/for/garden-monitor-
11447?humidity=<humidity value>&temperature=<temperature
value>&moisture=<moisture value>.


https://dweet.io/dweet/for/my-thing-name?hello=world
-->

## Actividad

https://thingspeak.com/
https://ubidots.com/
https://ubidots.com/blog/temperature-control-with-ubidots/
https://www.hackster.io/mcmchris/internet-of-things-with-ubidots-esp8266-lm35-cf3b84
https://help.ubidots.com/en/articles/513324-connect-a-nodemcu-esp8266-to-ubidots-over-mqtt
https://help.ubidots.com/en/articles/882821-connect-the-esp8266-as-a-telemetry-unit-with-ubidots

## Enlaces

1. https://github.com/openhomeautomation/iot-esp8266
2. https://www.favoriot.com/favoriotplatform
3. https://github.com/LintangWisesa/ESP32_Favoriot
4. 


