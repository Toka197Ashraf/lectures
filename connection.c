
#include "headers.h"
void Robo_Leg_Connect(void){
    Right_leg.w_e.k=&Right_leg.k;
    Right_leg.k.foot_ptr=&Right_leg.f;
    printf("\nRight Robot Leg is Connected Successfully") ;

 Left_leg.w_e.k=&Left_leg.k;
 Left_leg.k.foot_ptr=&Left_leg.f;

printf("\nLeft Robot Leg is Connected Successfully") ;
}
void Robo_Arm_Connect(void){
 Right_Arm.s.E=&Right_Arm.e;
 Right_Arm.e.W=&Right_Arm.w;
 Right_Arm.w.F=&Right_Arm.f;
 printf("\nRight Robot Arm is Connected Successfully") ;

 Left_Arm.s.E=&Left_Arm.e;
 Left_Arm.e.W=&Left_Arm.w;
 Left_Arm.w.F=&Left_Arm.f;
 printf("\nLeft Robot Arm is Connected Successfully") ;
}
void Robo_Connect(void){
    Robo_Arm_Connect();
    Robo_Leg_Connect();
}
void Robo_Display(void){
    printf("Displaying The Robot \n");
    printf("Right Arm Display:");
    printf("\nRight Arm Shoulder Volt: %i \t Right Arm Shoulder Degree: %i",Right_Arm.s.volt,Right_Arm.s.degree);
    printf("\nRight Arm Elbow Volt: %i \t Right Arm Elbow Degree: %i",Right_Arm.e.volt,Right_Arm.e.degree);
    printf("\nRight Arm Wrist Volt: %i \t Right Arm Wrist Degree: %i",Right_Arm.e.volt,Right_Arm.w.degree);
    printf("\nRight Arm Finger Volt: %i \t Right Arm Finger Degree: %i",Right_Arm.f.volt,Right_Arm.f.degree);


    printf("\nLeft Arm Display:");
    printf("\nLeft  Arm Shoulder Volt: %i \t Left  Arm Shoulder Degree: %i",Left_Arm.s.volt,Left_Arm.s.degree);
    printf("\nLeft  Arm Elbow Volt: %i \t Left  Arm Elbow Degree: %i",Left_Arm.e.volt,Left_Arm.e.degree);
    printf("\nLeft  Arm Wrist Volt: %i \t Left  Arm Wrist Degree: %i",Left_Arm.e.volt,Left_Arm.w.degree);

    printf("\nRight Leg Display:");
    printf("\nRight Leg Waist End Volt: %i \t Right Leg Waist End Degree: %i",Right_leg.w_e.volt,Right_leg.w_e.degree);
    printf("\nRight Leg Knee Volt: %i \t Right Leg Knee Degree: %i",Right_leg.k.volt,Right_leg.k.degree);
    printf("\nRight Leg Knee Volt %i \t Right Leg Knee Degree: %i ",Right_leg.f.volt,Right_leg.f.degree);

     printf("\nLeft Leg Display:");
    printf("\nLeft Leg Waist End Volt: %i \t Left Leg Waist End Degree: %i",Left_leg.w_e.volt,Right_leg.w_e.degree);
    printf("\nLeft Leg Knee Volt: %i \t Left Leg Knee Degree: %i",Left_leg.k.volt,Left_leg.k.degree);
    printf("\nLeft Leg Knee Volt %i \t Left Leg Knee Degree: %i ",Left_leg.f.volt,Left_leg.f.degree);

}
