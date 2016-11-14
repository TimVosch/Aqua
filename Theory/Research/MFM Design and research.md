# Requirements for our design
The following points will be a combination of multiple documents written by all group members. They will be added here to decide which of these points are possible to achieve with the recourses we have. We have come up with the following points: 

- The solar panel powering our system must be placed at a certain angle to obtain maximum energy to charge its batteries and to power its system
- the prototype needs to be able to communicate over the LoRa network
- the prototype needs to be self-sufficient for approx. 1 year 
- the prototype needs to be able to withstand all weather and temperature conditions without harm to the electronics.
- the prototype needs to be vandalism-proof
- the prototype needs to be modular, so every sensor must be able to be attached to our system without too much trouble. 
- there must be a functional network supporting the devices and it needs to gather the data in a central point where the data can be viewed and processed. 
 

## Optimum solar panel placement
We will start with this, since it will influence our entire design, because it will be the main supply of power (along with the battery). 
 To get the most from solar panels, you need to point them in the direction that captures the most sun. But there are a number of variables in figuring out the best direction. 

This advice applies to any type of panel that gets energy from the sun; photovoltaic, solar hot water, etc. We assume that the panel is fixed, or has a tilt that can be adjusted seasonally. (Panels that track the movement of the sun throughout the day can receive 10% (in winter) to 40% (in summer) more energy than fixed panels. 

Solar panels should always face true south if you are in the northern hemisphere, or true north if you are in the southern hemisphere. True north is not the same as magnetic north. If you are using a compass to orient your panels, you need to correct for the difference, which varies from place to place. 

The next question is, at what angle from horizontal should the panels be tilted? Books and articles on solar energy often give the advice that the tilt should be equal to your latitude, plus 15 degrees in winter, or minus 15 degrees in summer. It turns out that you can do better than this - about 4% better. 

##### Fixed or ajustable
It is simplest to mount your solar panels at a fixed tilt and just leave them there. But because the sun is higher in the summer and lower in the winter, you can capture more energy during the whole year by adjusting the tilt of the panels according to the season. The following table shows the effect of adjusting the angle, using a system at 40° latitude as an example. (The comparison would be a little different for different latitudes.) Each option is compared with the energy received by the best possible tracker that always keeps the panel pointed directly at the sun. 

Table 1: 
![alt text] (https://github.com/TimVosch/Aqua/blob/master/Theory/Media/table%201.png "Logo Title Text 1") 


In short, adjusting the tilt twice a year gives you a meaningful boost in energy. Adjusting four times a year produces only a little more, but could be important if you need to optimize production in spring and fall

The graph (1) below shows the effect of adjusting the tilt. The turquoise line shows the amount of solar energy you would get each day if the panel is fixed at the full year angle. The red line shows how much you would get by adjusting the tilt four times a year as described below. For comparison, the green line shows the energy you would get from two-axis tracking, which always points the panel directly at the sun. (The violet line is the solar energy per day if the panel is fixed at the winter angle, discussed below.) These figures are calculated for 40° latitude. 
Graph 1:
![alt text] (https://github.com/TimVosch/Aqua/blob/master/Theory/Media/graph%201.jpg "Logo Title Text 2") 
##### Fixed tilt
If your solar panels will have a fixed tilt angle, and you want to get the most energy over the whole year, then this section is for you. A fixed angle is convenient, but note that there are some disadvantages. As mentioned above, you’ll get less power than if you adjusted the angle. Also, if you live where there is snow, adjusting the panels to a steeper angle in winter makes it more likely that they will shed snow. A panel covered in snow produces little or no power.

Use one of these formulas to find the best angle from the horizontal at which the panel should be tilted: 
- If your latitude is below 25°, use the latitude times 0.87
- If your latitude is between 25° and 50°, use the latitude, times 0.76, plus 3.1 degrees

This table (2) gives some examples for different latitudes. It also shows the average insolation on the panel over the year (in kWh/m2 per day), and the energy received compared to the best possible tracker

:Table 2 ![alt text] (https://github.com/TimVosch/Aqua/blob/master/Theory/Media/table%202.png "Logo Title Text 3")

If you want to adjust the angle of your panels twice a year, you should follow the table (3) below for the best dates of change:

: Table 3: ![alt text] (https://github.com/TimVosch/Aqua/blob/master/Theory/Media/table%203.png "Logo Title Text 4")
If your latitude is between 25° and 50°, then the best tilt angle for summer is the latitude, times 0.93, minus 21 degrees. The best tilt angle for winter is the latitude, times 0.875, plus 19.2 degrees

The best option for our situation would be to leave it at the winter angle, because our need for energy will be higher in winter. Although you could get more energy during other seasons by adjusting the tilt, you will get enough energy without making any adjustment. The following tables( 4) assume that the tilt is set at the winter optimum all year long. They show the amount of insolation (in kWh/m2) on the panel each day, averaged over the season. 

: table 4: ![alt text] (https://github.com/TimVosch/Aqua/blob/master/Theory/Media/table%204.png "Logo Title Text 4")

It is also possible to change the angle 4 times a year, but that is far from ideal in our situation so we won't be going in further on that option. 

##### further explanation
These calculations are based on an idealized situation. They assume that you have an unobstructed view of the sky, with no trees, hills, clouds, dust, or haze ever blocking the sun.

You may need to make adjustments for your situation. For example, if you have trees to the east but not the west, it may be better for you to aim your solar panels slightly to the west. Or if you often have clouds in the afternoon but not the morning, you might aim your panels slightly to the east.

The calculations also assume that you are near sea level. At very high altitude, the optimum angle could be a little different.

If you are estimating energy output, remember that temperature affects the efficiency of photovoltaic panels. They produce less power at higher temperatures. Panels vary so you will need to contact your panel manufacturer for their specifications.

For each configuration of latitude and season, over 12,000 data points were calculated for various times throughout the day and the year. For each data point, the equations of celestial mechanics were used to determine the height and azimuth of the sun. The intensity of the sun was corrected to account for the increased absorption by the atmosphere when the sun is lower in the sky, using the formula:

intensity in kw/m2 = 1.35 * (1.00/1.35) sec(angle of sun from zenith)

This formula assumes that the earth is flat, so a factor was applied to account for the curvature of the earth (and therefore the earth’s atmosphere). These factors, and the angle of the sun with respect to the panel, then determine the insolation on the panel. An iterative method then determined the angles that give the maximum total insolation during each season. Given those angles, the beginning and ending dates of the season were then adjusted to the optimum, then the angles recalculated, until the process converged. After the optimum dates and angles were calculated, it was determined that a linear formula closely approximates the optimum. The formulas are only accurate within the specified range.

Other published articles on tilt angles have used less accurate calculations. For example, Richard Perez and Sam Coleman, in “PV Module Angles”, Home Power n.34 p.14-16, 1993, recommend an angle that puts the panel perpendicular to the sun’s rays at noon. That is indeed the best angle at noon on that day, but it does not take into account the best angle for capturing solar energy at other times of the day. That article also leaves it to the reader to estimate the best angle over the period until the next time the tilt is adjusted.

## power supply
Out battery needs to be able to store power from a solar panel and it needs to supply power to our system if there is not enough power to supply our system with enough electricity to function. There are multiple possibilities which have good specification to fit our needs, but some of them have some flaws which makes them unsuitable for usage. 
First we will provide a list of all rechargable batteries and then we will pick some interesting batteries which might suit our needs.
Secondary cells or rechargeable batteries 

    Alkaline battery (zinc manganese oxide, carbon)
    Aluminium–air battery
    Aluminium-ion battery
    Atomic battery
        Betavoltaics
        Optoelectric nuclear battery
        Nuclear micro-battery
    Bunsen cell
    Chromic acid cell (Poggendorff cell)
    Clark cell
    Daniell cell
    Dry cell
    Earth battery
    Frog battery
    Galvanic cell
    Grove cell
    Leclanché cell
    Lemon/potato battery
    Lithium battery
    Lithium air battery
    Magnesium battery
    Mercury battery
    Molten salt battery
    Nickel oxyhydroxide battery
        Oxyride battery
    Organic radical battery
    Paper battery
    Pulvermacher's chain
    Silver-oxide battery
    Solid-state battery
    Voltaic pile
        Penny battery
        Trough battery
    Water-activated battery
    Weston cell
    Zinc–air battery
    Zinc–carbon battery
    Zinc chloride battery

	

    Flow battery
        Vanadium redox battery
        Zinc–bromine battery
        Zinc–cerium battery
    Lead–acid battery
        Deep cycle battery
        VRLA battery
        AGM battery
        Gel battery
    Lithium air battery
    Lithium-ion battery
        Lithium ion lithium cobalt oxide battery (ICR)
        Lithium ion manganese oxide battery (IMR)
        Lithium ion polymer battery
        Lithium iron phosphate battery
        Lithium–sulfur battery
        Lithium–titanate battery
        Thin film lithium-ion battery
    Magnesium-ion battery
    Molten salt battery
    Nickel–cadmium battery
        Nickel–cadmium battery vented cell type
    Nickel hydrogen battery
    Nickel–iron battery
    Nickel metal hydride battery
        Low self-discharge NiMH battery
    Nickel–zinc battery
    Organic radical battery
    Polymer-based battery
    Polysulfide bromide battery
    Potassium-ion battery
    Rechargeable alkaline battery
    Rechargeable fuel battery
    Silicon air battery
    Silver-zinc battery
    Silver calcium battery
    Sodium-ion battery
    Sodium–sulfur battery
    Sugar battery
    Super iron battery
    UltraBattery

### Lead acid battery 
Lead acid batteries are widely uses in the industry of batteries. It is the oldest rechargable battery type. Despite having a low power to mass ratio and a low volume to energy ratio, is has a relatively high power to weight ratio. It doesn't cost a lot of money to produce. The battery consists of PbSo4 plates as the 2 electrodes and they are surrounded by sulfuric acid. They work like a normal eletrochemical cell and electrolytical cell, with 2 reactions per electrode. 
It has multiple uses like :
- starting cars
- powering electric vehichles
- usable as uninterrupted power supply (UPS) and off-grid power storage
- marine appliances
It has 3 cycle modes to support a variable usage of this battery type. 
However , it has its downsides, which makes it unsuitable for our situation: 
- it needs to be refilled with sulfuric acid once every 6 months, this is due to the fact that the sulfuric acid vaporises when the battery charges
- The battery's capacity slowly uses it's storage capacity, because the sulfate sticks to the electrodes and minimalises their surface area
- It is possible that gases are created during the charging state if it is used exessively. This can cause explosions in the battery. 
- If the battery can't let the gases escape, then there will be corrosion due to acid gases in the battery. This results in the formation of crystals in the sulfuric acid solution, which interferes with the battery's performance. 
these things only happen if the battery is discharged to 0% and if it's overcharged. If you keep it at approx 50% charged, you'll only need to refill the battery once every 6 months, so it still is unsuitable for our purposes. 

### AGM and Gell battery
I took these 2 together since they are almost identical, with only small differences. To make it easier for myself, i have combined these 2 below: 

#### AGM Batteries

AGM stands for Absorbed Glass Mat, which is a unique mat deliberately designed to trap the electrolyte between the plates inside the battery. This type of battery is also commonly referred to as a VRLA battery, which stands for Valve-Regulated Lead-Acid battery. Unlike wet batteries, AGM batteries only hold a small amount acid to help keep the mat wet. This is a major safety feature that prevents acid from leaking if the battery breaks. AGM batteries are normally referred to as “all-purpose batteries” due to their wide range of applications, such as emergency lights, alarm and security systems, EPS and UPS.

#### Gel Batteries

Gel batteries contain a specially formulated paste, silica gel, where the battery electrolyte are trapped in. Unlike AGM batteries, Gel batteries allow the electrons to flow between plates. However, Gel batteries are similar to AGM batteries in the sense that they are both non-spillable if the battery breaks. The most common applications for Gel batteries include: renewable energy, medical equipment, golf trolleys, garden equipment and traffic lights.

 
#### Life expectancy

Battery life expectancy is not measured by a year count. Rather, it is measured by the number of times it can be charged and discharged. This is referred to as the battery’s cycle life. Both AGM and Gel batteries are recommended to always be fully charged when possible, and not to be discharged lower than 50%. However, Canbat (=the brand i researched) batteries have one of the highest cycle life in the lead-acid battery industry, and they can be discharged up to 60% without causing the battery any harm.

All-purpose AGM batteries have a cycle life of 500 cycles at a 50% depth of discharge. This means that an AGM battery can be charged and discharged 500 times. If the battery is charged and discharged once a day, an AGM battery can last for 500 days, which is roughly a year and a half, at full capacity. After 500 cycles, the battery will still work but at a lower capacity, meaning that it will not give you the same amount of energy as before.

Gel batteries work in the same manner, but they have a much higher cycle life of 1,200 cycles, at a 50% depth of discharge. If a Canbat Gel battery is charged and discharged once a day, it can last for 1,200 days, which is about 3 years and 5 months. Having a relatively high battery cycle life is one of the most striking features of a Gel battery.

The only differece between these 2 is the price and quality: The Gell battery has a much higher price, but it comes with a bigger life expectancy than the AGM battery. 












### links used in this documentation

- http://www.expertise.com/green/home-solar-panels-pros-cons-and-hidden-costs
    This site has good information for the homeowner considering going to solar power. 
- http://www.nrel.gov/rredc/solar_resource.html
    The National Renewable Energy Laboratory has copious data on solar energy available at different locations in the United States, a performance calculator for PV systems, and more. 
- http://www.gaisma.com
    This site has sunrise, sunset, and insolation data for worldwide locations. 
- http://ezbatteryreconditioning.com/3-best-batteries-for-off-grid-energy-system/ Information about batteries and how they operate
- https://en.wikipedia.org/wiki/Lead%E2%80%93acid_battery information about lead acid batteries
- http://www.power-sonic.com/ps_psg_series.php voltages of batteries
- https://www.batterystuff.com/kb/articles/battery-articles/battery-basics.html
- https://en.wikipedia.org/wiki/Comparison_of_battery_types
- http://batteryuniversity.com/learn/article/secondary_batteries
- http://www.brighthubengineering.com/power-generation-distribution/123909-types-of-batteries-and-their-applications/
- https://www.reddit.com/r/AskElectronics/comments/5cekvo/project_idea_advice_needed_with_battery_choice/
- http://www.canbat.ca/guide-agm-batteries-gel-batteries/






