Scheldestromen – The Multiflexmeter
===================================
##### A open-source analyse device for waters
---
Foreword  
--------------
We have got a project from waterschap Scheldestromen in Middelburg to continue the development of the current multiflexmeter, which can measure the quality and several other factors of water across the province of Zeeland. This information must be stored in one big database, which can process all information. 
In this project booklet, all requirements we got from waterschap Scheldestromen will be written down and explained. We have also added some important points ourselves. The planning will be in the booklet as well. 

We look forward to working on this project and we really want to complete our own design, which follows all the requirements stated in the booklet. 


Jari de Dooij (Fileformat maintainer),


Roel van den Elshout (Site maintainer)


Tim van Osch (Project leader and spokesperson)


Seppe van Mierlo (Planner)

	
Requirements
---------------
Endproduct multiflexmeter waterschap Scheldestromen:
A device that is good-looking, works perfectly and strong against violence. Also it needs to work strongly. The device has a basic configuration of a chip, power supply and data transfers at distance. It’s obviously not difficult to install a multiflexmeter. 
It’s easy to connect simple measureinstruments/ sensors and there is also the possibility to connect an instrument, that is able to send notifications.
The end product needs to be as cheap as possible, not only the instruments but also the production of it. The multiflexmeter needs to communicate with all multiflexmeters in the province of Zeeland, ofcourse without problems. There also has to be the possibility to control the multiflexmeter from distance (for example a update for the “firmware”).
The MFM has to send a daily report to a central point where everything can be monitored.

### Assignments:
1. Design an power supply for the MFM so he can work on his own as much as possible.
a. What is the best combination with solar cells to have the maximum energy output?
b. What is the best way to store energy in periods where there is no sun?
c. How much power do you need for the MFM to function, when there is no sunlight?
d. How much power can you use usually in the Netherlands?
2. Design a circuit that turns off the MFM after every measurement.
3. Design a system, so the MFM can contact to central server on any location. 
4. Design and make a prototype of the casing from the MFM with every aspect on it. 
5. Design and make a prototype of a basic printboard (PCB) for the MFM.
6. Can you use a LORA network to read out data and control the MFM. Make a working prototype (gateway and MFM).
7. Make a warning system for the MFM so the MFM can give a warning when the battery voltage is getting too low.   
8. Design a clock module for the MFM which uses the DCF77 “Atom clock” in Mainflingen.
9. Design and make a reliable measure method to measure rainfall.
10. Find a way to measure the current speed and build this.
11. Research the costs of the MFM.
12. Design and make a maintenance free PSU for the MFM.
13. Design and make a controlling system for the MFM. When there are 1000 MFM’s for example, you want a daily report how the MFM functions. So all data must be in the controlling system, so the system can make an analyse. 
14. Find all possible ways to measure the water level with the MFM and make the best one.   
15. Design and make a MFM, that can measure the gathering of silt in the ditch. 
16. Design and make a conduction meter 
17. Find a way to automatically measure the valve height of a weir. 



18. Design and make an MFM that alarms on the basis of combining data (for example: an e-mail)
19. Make sure that all researches that are stated above lead to 1 end product. You are the project manager from the MFM and responsible that every developments is in line with the project. You have the final responsibility! Some developments can conflict with each other. Then you must decide what is most important. Before you start, make a project plan with your goals, planning, POA and your plan meetings. Make sure you watch closely to the progress (and tell about this to the client), tell people what to do and make a completion report. 

LoRa Network
-------------
The LoRa Network is one of the most important requirements in our project. 
A LoRa network is sort off a Wifi network, but the LoRa Network has a range of about 2 kilometres in urban environments and up to 20 kilometres in plain fields. We want to use this network, so MFM's can communicate with the central server so you don't have to travel every time to the MFM's to check the data. The MFM project depends on the LoRa Network. 

Planning
------------
![alt text](https://github.com/TimVosch/Aqua/blob/master/Theory/Media/Planning%20MFM.PNG)





