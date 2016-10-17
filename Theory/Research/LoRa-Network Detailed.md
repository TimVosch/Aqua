LoRa-network Detailed
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
The LoRaWAN has 3 classes, these are devided in A,B and C, they work all at the same time. Class A is purely asynchornous, they call it the pure aloha system. This means that they don't wait for a particular time to speak to the gateway. They just transmit whenever they need to transmit something, if they have nothing to report they just lie dormant. You can have a perfectly coordinated system over all eight channels. This means that you can fill every time slot with a message. The theoretical maximum capacity of a aloha network is 18.4% of the maximum. This is because otherwise they will collide.  

Class B allow for messages to be sent down to battery-powered nodes. Every 128 seconds, the gateway transmits a beacon. (See the time slots across the top of the diagram.) All LoRaWAN base stations transmit beacon messages at the exact same time, as they are slave to one pulse-per-second (1PPS). This means that every GPS satellite in orbit transmits a message at the beginning of every second, allowing time to be synchronized around the world. All Class B nodes are assigned a time slot within the 128 second cycle and are told when to listen. You can, for instance, tell a node to listen every tenth time slot, and when this comes up, it allows for a downlink message to be transmitted (see above diagram).
###### source:
http://www.link-labs.com/what-is-lorawan/  
https://www.lora-alliance.org/  