In this smart traffic light system for the embedded systems profissional track by 
Egypt FWD and udacity. This system aims to implement an on-demand traffic light 
control with a pedestrian button, crosswalk button, for allowing pedestrians to 
cross the road as they have the highest priority…..

The system has two modes:

1- Normal mode.

Normal mode: In this mode pedestrian’s traffic lights is off and the cars’ traffic 
lights is activated and has the following sequence: green, yellow, red, yellow, 
…and so on. The yellow LED will blink for five seconds before moving to green or 
red LEDs. 

 2- Pedestrian mode.
 
In the second mode system can detect the state at which the button by 
pedestrians and act based on this information. These states are green, 
yellow, and red on cars’ traffic light.

• Pedestrian mode:

1- Green state & Yellow state:

If pressed when the cars' green LED is on or the cars' yellow LED is blinking, the 
pedestrian red LED will be on then both yellow LEDs start to blink for five seconds, 
then the cars' red LED and pedestrian green LEDs are on for five seconds, this 
means that pedestrian must wait until the green LED is on. At the end, the cars' 
red LED will be off and both yellow LEDs start blinking for 5 seconds and the 
pedestrian's green LED is still on, then the pedestrian green LED will be off and 
both the pedestrian red LED and the cars' green LED will be on.

2- Red state:

If pressed when the cars' red LED is on, the pedestrian's green LED and the cars' 
red LEDs will be on for five seconds, this means that pedestrians can cross the 
street while the pedestrian's green LED is on, then the pedestrian green LED will be 
off and both the pedestrian red LED and the cars' green LED will be on.


![proteus](https://user-images.githubusercontent.com/110823285/200068316-882f5ccc-6d06-4693-ab31-9973a59e3c0b.png)
