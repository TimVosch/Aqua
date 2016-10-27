LoRaWAN-network
===
### How does LoRaWAN work?
---
At the most fundamental level, radio protocols like LoRaWAN are fairly simple. The way star networks converse is similar to a professor and students in a lecture. The gateway (the professor) speaks to end nodes (everyone in the class), and vice versa. This is an asymmetric relationship in terms of communication. Everyone in the class could be trying to communicate with the professor at the same time, but the professor would not be able to hear or understand them all at once. Albeit extremely oversimplified, many elements of star topologies go back to this analogy.
Simply said LoRaWAN works with one gateway, let's call it Scheldenstromen, this gateway will communicate with several recievers, let's call them MFM's.  
So if one of the MFM's wanted to communicate with Scheldenstromen it would just communicate without a problem, but if at a certain point eight or more MFM's wanted to communicate it would not work. This is because all the MFM's send the same signal so it would interfere. Most gateways can recieve eight messages at the same time, across any number of frequenty channels.  
![alt text](https://github.com/TimVosch/Aqua/blob/master/Theory/Media/LoRaWAN%20signals.png "LoraWan Signals")  
Above here you see how at the moment one of the MFM's send something the rest cannot send anything.  
LoRaWAN is not the greatest fit for private usage, it works better for public wide earea networks. The LoRaWAN tunes al the channels to the same frequencies and it's better to have only one netowrk in a single area to prevent them interfering.  
All gateways in a network are tied back to the same server. In that case the server job is to decide wich of the several gateways responds to a transmission and wich don't respond at al. This prevents a collision in downlink and uplink.  
## 3 Classes LoRaWAN
---
The LoRaWAN has 3 classes, these are devided in A,B and C, they work all at the same time.  
*Class A* is purely asynchornous, they call it the pure aloha system. This means that they don't wait for a particular time to speak to the gateway. They just transmit whenever they need to transmit something, if they have nothing to report they just lie dormant. You can have a perfectly coordinated system over all eight channels. This means that you can fill every time slot with a message. The theoretical maximum capacity of a aloha network is 18.4% of the maximum. This is because otherwise they will collide.  
*Class B* allows messages to be sent down to battery-powered nodes. The gateway sends out a beacon every 128 seconds. All the base stations transmit these beacon messages at the exact same time. They are slave to one pulse-per-second (1PPS), GPS's sent a pulse at the start of every second wich allows the time around the world to be synchronised. The class B nodes are assigned a slot within the 128 seconds, this is when they have to listen. This is not per se a certain time, it can be multiple times or after a certain amount of time has passed.  
*Class C* is a node that listens constantly and a downlink message can be sent at any time. This is used for AC-powered applications, this is because it uses alot of energy to keep a node awake and running all the time.

###### source:
http://www.link-labs.com/what-is-lorawan/  
https://www.lora-alliance.org/  
