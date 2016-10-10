Generating energy for the MFM
---

Generating (and storing) energy is one of the toughest things to do correct.

 - How can we ensure the MFM will have enough power to keep running?
 - What do we do when power is dangerously low?
 - Can we deliver continues power?

The first thing to pop in mind is a solar-panel. They're basically used for everything right? Let's see if there's more.

### How much power do we need?
Our way of generating power will probably not deliver continuous power and thus the time it can charge has to compensate for the time it cannot, which can be done by delivering more power than it will consume.  
Assuming the MFM operates at 5.5 Volts and not more than 20 mA, the power would be 0.11 Watt.

#### Solar panels
Let's gather some basic information. In the Netherlands we've approximately _1637.8_ peak-hours of sunlight. Which is 18.70% of the time. _(That's not a lot)_  
To compensate for the time there is no sun, we will have to deliver 100/18.70 = 5.4 times more power than it consumes in optimal conditions.  
A basic solar panel is around 5 Watts, which means they deliver around 5/0.11 = 27 times more than we consume, again in optimal conditions.  
Whether this is applicable for the MFM depends on: the hours of sun per season, battery size, battery charge rate, efficiency etc...  
This is definitely something to research more in-depth, as well as checking out real-life examples.

#### Wind generators
This has been tough to orientate on, because there are not much resources available online.

### Conclusion
There are not many open-source or commercially available ways of generating power for small devices. The best candidate is still solar panels, although we'd need to take care quite a few factors as well as the orientation and positioning of the solar panel.  
I'd recommend continuing research on this subject.

#### Sources
[Average hours of sun in The Netherlands](https://www.currentresults.com/Weather/Netherlands/sunshine-annual-average.php)
