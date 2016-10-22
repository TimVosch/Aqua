Central server control vs independent control
---

The MFM has to have a central server to report data to, alerts and other information. Without a central server our goal of an automated system goes down the drain.

But does the MFM has to do anything? We could have the MFM only connect and register to the server and have the server request for reports, battery level etc.  
When should the server be involved in a decision and what can the MFM decide on it's own, taking server-security in account.

####Initiative
A though point is who should take the initiative, as in, should the MFM only respond to requests and not send a report by itself?  
This leaves us with the MFM possibly stacking up information waiting for a request, but we can also request a read-out at any time.

What if we'd want to increase the interval? Should the server notice it and send an order to adjust the interval.
If the MFM wants to change interval, it has to request the order to adjust the interval from the server.

This behaviour translates to ...

####Who is superior?
Does the MFM always have to do what the server requests? Or should the MFM do what it thinks is best and take the server requests as a suggestion?

Now why is this a tough question? Usually the server is superior to the client. If the server doesn't like the client it just closes connection, because the client depends on the server.  
But this is different, the client doesn't necessarily depend on the server. They should work as a team because they depend on eachother.

####Possible solution
A possible solution would be to have both the server and client follow a specific protocol and set of commands, where the server and the client can make requests, but can only deny a request if it would've had impact on itself.

Take as example:  
 1. The server sends a request to the MFM to change read-out interval to once every 3 minutes.  
 2. According to the MFM it is not receiving enough energy to maintain that interval.
 3. The MFM could just deny or send back a request/suggestion to change the interval to once every 5 minutes.
 4. For some serious reason the server needs data every 3 minutes, therefore it sends a priority requests to adjust interval to once every 3 minutes for the upcoming 24 hours.
 5. The MFM has to accept, since it's a priority request.
 6. ...
 7. Some time later, the priority request is still active, but the battery is close to being drained.
 8. Thus the MFM sends a request to enter low-power mode.
 9. The Server responds by giving new settings for the MFM. (like reporting once every hour, and keeping minimum contact)
 
*To be continued*
