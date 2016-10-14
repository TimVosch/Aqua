LoRa-network Detailed
===
### How does LoRaWAN work?
---
At the most fundamental level, radio protocols like LoRaWAN are fairly simple. The way star networks converse is similar to a professor and students in a lecture. The gateway (the professor) speaks to end nodes (everyone in the class), and vice versa. This is an asymmetric relationship in terms of communication. Everyone in the class could be trying to communicate with the professor at the same time, but the professor would not be able to hear or understand them all at once. Albeit extremely oversimplified, many elements of star topologies go back to this analogy.
Simply said LoRaWAN works with one gateway, let's call it Scheldenstromen, this gateway will communicate with several recievers, let's call them MFM's.  
So if one of the MFM's wanted to communicate with Scheldenstromen it would just communicate without a problem, but if at a certain point eight or more MFM's wanted to communicate it would not work. This is because all the MFM's send the same signal so it would interfere. Most gateways can recieve eight messages at the same time, across any number of frequenty channels.  
![alt text](https://github.com/TimVosch/Aqua/blob/master/Theory/Media/LoRaWAN%20signals.png "LoraWan Signals")  
Above here you see how at the moment one of the MFM's send something the rest cannot send anything.


###### source:
http://www.link-labs.com/what-is-lorawan/  
https://www.lora-alliance.org/  