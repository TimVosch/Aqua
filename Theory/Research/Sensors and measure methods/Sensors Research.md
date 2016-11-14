Sensors Research 
================
After a little bit of general research, we are going to investigate which sensors are the best option for our MFM.
Recently we have visited Mr. Goossens again and he told us which sensors are most important. 
The conductivity sensor, depth/ ultrasone sensor and a pH-sensor. These are very important to measure the quality of water.
Now we have this information, we are going to look which sensors have the lowest power ussage and if we can use them with Arduino.
In this file, you will find every sensor we have researched and if it's usable with Arduino. 

#### Conductivity sensor
It's quite difficult to find a conductivity sensor which can be used with Arduino. What I did find is an explanation about a conductivity sensor implementation in Arduino --> http://www2.latech.edu/~dehall/LWTL/ENGR121/notes/3_conductivity_sensor_intro.pdf 

It may be handy to use this file when we have found a conductivity sensor.

#####1. Gravity: Analog Electrical Conductivity Sensor / Meter For Arduino
The first sensor I found and can be used with Arduino, is the Gravity: Analog Electrical Conductivity Sensor / Meter for Arduino.

![alt text](https://github.com/TimVosch/Aqua/blob/master/Theory/Media/EC%20Meter%20Sys.png)

It's important to know the conductivity of water, because it reflects the level of electrolytes present in the water. 
Depending on the concentration of the electrolyte, the conductivity of the aqueous solution is different. It's a special meter, because it's special-built for Arduino and has practical features. When the meter is installed, you can measure the Conductivity easily. 
 
SPECIFICATION
- Operating Voltage: +5.00 V
- PCB Size: 45 × 32mm(1.77x1.26")
- Measuring Range: 1ms/cm -- 20ms/cm
- Operating Temperature: 5 - 40 ℃
- Accuracy: < ±10% F.S (using Arduino 10 bits ADC)
- PH2.0 Interface (3-pin SMD)
- Conductivity Electrode (Electrode Constant K = 1,BNC connector)
- Cable Length of the Electrode: about 60cm(23.62")
- DS18B20 Temperature Sensor(Waterproof)
- Power Indicator

APPLICATIONS
- Water quality monitoring.
- Aquaculture.
- Hydroponic & Aquaponic.

Explanation Sensor: https://youtu.be/SfYD8JZ1wK4





http://www.libelium.com/smart-water-ions-sensors-calcium-fluoride-chloride-nitrate-iodide-lead-bromide-cupric-silver/ http://www.libelium.com/development/waspmote/documentation/smart-water-board-technical-guide https://library.e.abb.com/public/d661a28ddd231379c1257bc50032a1e8/DS_TB2CS-EN_E.pdf https://www.dfrobot.com/?route=product/product&product_id=1123 https://www.dfrobot.com/wiki/index.php/Analog_EC_Meter_SKU:DFR0300

Important site: http://www.nl.endress.com/nl




