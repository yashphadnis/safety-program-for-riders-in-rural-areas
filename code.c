#include<stdio.h> 
void main ()
{
    int BA;
    printf("Bike's angle = ");
    //the bike's angle is detected by the angle sensor mounted on it 
    scanf("%d",& BA);
    if (BA>=60)
    {
        printf("rider is safe ");
    }
    else
    {
        printf("the rider is met with an accident EMERGENCY SERVICES ARE CALLED");
    }  
}
