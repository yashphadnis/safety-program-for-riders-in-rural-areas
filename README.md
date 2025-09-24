Design a c program to simulate the operation of an electrical switch where the program takes input values of 0 or 1 representing the switch being on or off respectively .
 Research
A program to simulate the operation of an electrical switch takes input values of 0 or 1, where 0 represents the switch being off and 1 represents it being on. The program reads this input from the user, validates it, and then displays the current state of the switch accordingly. For example, if the input is 1, the program outputs that the switch is ON, and if the input is 0, it outputs that the switch is OFF. This simple simulation can be extended to represent more complex electrical circuits by combining multiple switches or simulating connected devices such as light bulbs or motors, helping users understand how switches control electrical flow in various systems.
Analyse
The program relies on basic Boolean logic, where the switch state is represented as either true (1) or false (0).
Input validation is crucial to accept only  acceptable values (0 or 1) are processed, preventing errors.
This simulation can be implemented in various programming languages like Python, Java, or C++, depending on user preference and application.
For more interactive experiences, the simulation can be enhanced with graphical user interfaces (GUIs) that visually represent the switch state.
In embedded systems, such a program can be used to control physical switches connected to microcontrollers, enabling real-world hardware interaction.
The simplicity of this simulation makes it an effective teaching tool for beginners learning about digital electronics and programming fundamentals.


Ideate
Problem- accidents of two wheelers are not reported in rural areas and the rider does not get help in time . 
       Accidents in the rural areas are more dangerous due to lack of connectivity in the rural areas and lack of street lighting due to which when an accident in rural areas take place and the driver is in bad condition the accident does not get reported and due to this the help cannot reach there in time this tread is often observed in two wheeler drivers riding in hilly or mountainous regions where there is no way to report the accident if the rider goes unconscious and the condition can worsen many people lose their lives . Poor network connectivity in remote/rural/hilly terrain makes it harder to report accidents quickly This is a gap. Ambulance services and emergency medical response face multiple challenges in rural India: wide distances, rough terrains, poor roads, fewer ambulances/resources, and lack of skilled personnel. Communication (telecom) issues add to delay. Delays in reporting + delays in ambulance arrival and transport to hospital (especially trauma centers) significantly worsen outcomes. Globally this is well accepted; locally, there is qualitative evidence that rural areas fare worse.
      If the rider is met with an accident and the bike is in a position where the angle of the bike is less than 60 degrees from the ground  . It is assumed that the rider is in a condition where he cannot help himself or is unconscious in this case the angle sensor senses it and the program is executed. By this the emergency services are called through satellite communication services and exact location of the rider is informed to the emergency services through global positioning system  

Build
#include<stdio.h> 
void main ()
{
    int BA;
    printf("Bike's angle = ");
// the bike’s angle is detected by angle sensor mounted on the bike
    scanf("%d",& BA);
    if (BA>=60)
    { printf("rider is safe "); }
    else
    {  printf("the rider is met with an accident EMERGENCY SERVICES ARE CALLED"); }  
}

Output:
Test case 1 – the bike’s angle is more than 60 and the bike is upright 
Bike's angle = 80
  rider is safe


Test case2 – the bike’s angle is less than 60 and rider is met with an accident
Bike's angle = 25 
the rider is met with an accident EMERGENCY SERVICES ARE CALLED





