Orientation LoRa
---

- Prices for LoRa receivers that arduino supports

 | Lora                | Libelium          |
|---------------------|------------------------|
| Module              | SX1272                 |
| Dual Frequency Band | 863-870 MHz (Europe)   |
|                     | 902-928 MHz (US)       |
| Transmission Power  | 25 mW                  |
| Sensitivity         | -134 dBm               |
| Channels            | 8 (868MHz)             |
|                     | 13 (900MHz)            |
| Range               | LOS = 21km (13.4miles) |
|                     | NLOS = +2km (1.2miles) |
|Prijs                |€45.00 without shield |
|                   | €75.00 with shield|

LoRa VS LoRaWAN  
Libelium currently offers two options of this type of radio technology: LoRa and LoRaWAN  

 * LoRa: contains only the link layer protocol and is perfect to be used in P2P communications between nodes. LoRa modules are a little cheaper that the LoRaWAN ones. It works in the 868 and 900MHz bands. Go to the LoRa Tutorial.  
 * LoRaWAN: includes the network layer too so it is possible to send the information to any Base Station already connected to a Cloud platform. LoRaWAN modules may work in the 868/900/433MHz bands. Go to the LoRaWAN Tutorial.  
Bron: https://www.cooking-hacks.com/documentation/tutorials/extreme-range-lora-sx1272-module-shield-arduino-raspberry-pi-intel-galileo/  

- LOS: means that it is in plain sight so there are no buildings inbetween the 2 modules
- NLOS: means taht it is not in plain sight and that there is something like a building or a wall inbetween.

- Energy usage in mA?
The usage of a LoRa-Netork is 10 mA. The Arduino uses 9 mA, wich would mean we would have to double the power usage to implement the Lora-system.