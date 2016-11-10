# Prototype LoRaWAN 1 Basic Sending
This is our first prototype for a node to send data to the gateway.

## How to connect the node with the Arduino
Connect the pins as follow:

| RFM95W 	| Arduino 	|
|--------	|---------	|
| 3.3V   	| 3.3V    	|
| GND    	| GND     	|
| SCK    	| Pin 13  	|
| MISO   	| Pin 12  	|
| MOSI   	| Pin 11  	|
| CS/NSS 	| Pin 10  	|
| RESET  	| Pin 9   	|
| DIO2   	| Pin 6   	|
| DIO5   	| Pin 4   	|
| DIO1   	| Pin 3   	|
| DIO0   	| Pin 2   	|

## Antenne
It is important that the antenne is 81 mm in length. This is because of the frequency in wich you send and recieve data.

## Programming
This example uses ABP instead of OTAA, due to the limited capabilities of this demo. In production OTAA is prefered instead of ABP. They both need special keys, which are retrievable at the LoRaWANN backend side(eg. Loriot or TTN) In this case NwkSkey AppSkey and DevAddr are used.
