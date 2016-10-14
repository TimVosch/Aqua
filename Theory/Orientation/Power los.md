Power los
===

When the power goes below a certain level we want the arduino to go into a certain state, this is the low power mode. This mode will make the arduino go into a sleep, which will reduce the power cost of the arduino. Wich will result in a lower power cost in total, so that the arduino will not run out of power when it starts to lose power.

## Ideas:  
We thought of several idea's to make sure the arduino doesn't run out of power.  
Our first idea was to have the arduino measure the power level and when it gets below a certain point it would automaticly go into low power mode, but this would be hard to do since a power level is only an estimate.  
Our second idea was to still have the arduino measure the power level, but in a diffrent way. We would have 2 batteries the first one is the main battery wich it uses when its not in low power mode. When the battery runs out the arduino will go into low power mode and switch to the second battery. This will ensure that we have enough energy to power the arduino in low power mode till the first battery is recharged.

###### Source:  
http://playground.arduino.cc/Learning/ArduinoSleepCode
