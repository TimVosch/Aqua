Sensors Research 
================
After a little bit of general research, we are going to investigate which sensors are the best option for our MFM.
Recently we have visited Mr. Goossens again and he told us which sensors are most important. 
The conductivity sensor, depth/ ultrasone sensor and a pH-sensor. These are very important to measure the quality of water.
Now we have this information, we are going to look which sensors have the lowest power ussage and if we can use them with Arduino.
In this file, you will find every sensor we have researched and if it's usable with Arduino. 

#### Conductivity sensor
First, I'm going to explain what a conductivity sensor is and what a conductivity sensor measures. 
Electrical conductivity is a materials ability to conduct an electric current.

Why do we want to know what the electrical conductivity in the water? If there are a lot of ions in the water, the electrical conductivity is going to be higher when there a less ions. So it's important for us to know the electrical conductivit, because it's one of the factors to measure the water quality. 

It's quite difficult to find a conductivity sensor which can be used with Arduino. What I did find is an explanation about a conductivity sensor implementation in Arduino --> http://www2.latech.edu/~dehall/LWTL/ENGR121/notes/3_conductivity_sensor_intro.pdf 

It may be handy to use this file when we have found a conductivity sensor.

#####1. Gravity: Analog Electrical Conductivity Sensor / Meter For Arduino
The first sensor I found and can be used with Arduino, is the Gravity: Analog Electrical Conductivity Sensor / Meter for Arduino.

![alt text](https://github.com/TimVosch/Aqua/blob/master/Theory/Media/EC%20Meter%20Sys.png)

It's important to know the conductivity of water, because it reflects the level of electrolytes present in the water. 
Depending on the concentration of the electrolyte, the conductivity of the aqueous solution is different. It's a special meter, because it's special-built for Arduino and has practical features. When the meter is installed, you can measure the Conductivity easily. 
 
#####SPECIFICATION
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

#####APPLICATIONS
- Water quality monitoring.
- Aquaculture.
- Hydroponic & Aquaponic.

#####Electrode size 
![alt text](https://github.com/TimVosch/Aqua/blob/master/Theory/Media/800px-EC_size.png)


Explanation Sensor: https://youtu.be/SfYD8JZ1wK4

Research own EC sensor:
------------------------
We have found a way to build our own EC sensor. So, we are going to do that and then look if the power usage of the sensor is not going to be too high. Otherwise we need to buy the EC meter that I already have explained in this research. 

We have succeeded to make the EC sensor. The next step was to test the EC sensor and measure if the data is realible.
I am going to make an operating plan to test the EC sensor and if we can use it in our MFM. I am also going to calculate the resistance of this system and his voltage. 

######Operating plan
What do we need?
- Salt
- Demineralized water
 

What are we going to do?
We are going to test the conductivity of the demineralized water with and without salt with our EC sensor and a professional EC sensor. Then we are going to check with Coach 7 if the data of our EC sensor similar is to the data of the professional EC sensor. 

Results:
Our results are on the website: Prototypes --> Conductivity meter --> Measurements

Update: 
We have gathered the results of our research and we can conclude that our own EC meter/ sensor is not good enough for our MFM, because it is not accurate and it doesn't show proper measurements. We compared our EC meter with a professional EC meter and we can confirm that our EC meter is not good enough for use in the MFM. 

Conclusion:
What can we conclude after this research? We need to find a EC meter with low ussage of electricity. We have already found this EC meter. With a little bit of luck, because Tim has found it in his own house.  
Now we have can finish this part of the research. 







Sources:
https://hackaday.io/project/7008-fly-wars-a-hackers-solution-to-world-hunger/log/24646-three-dollar-ec-ppm-meter-arduino
http://www.libelium.com/smart-water-ions-sensors-calcium-fluoride-chloride-nitrate-iodide-lead-bromide-cupric-silver/ http://www.libelium.com/development/waspmote/documentation/smart-water-board-technical-guide https://library.e.abb.com/public/d661a28ddd231379c1257bc50032a1e8/DS_TB2CS-EN_E.pdf https://www.dfrobot.com/?route=product/product&product_id=1123 https://www.dfrobot.com/wiki/index.php/Analog_EC_Meter_SKU:DFR0300






