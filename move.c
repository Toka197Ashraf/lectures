#include "headers.h"
void Robo_Init(void){

Right_Arm.s.volt=Initialize;
Degree_Modify(&Right_Arm.s.volt,&Right_Arm.s.degree);
Right_Arm.e.volt=Initialize;
Degree_Modify(&Right_Arm.e.volt,&Right_Arm.e.degree);
Right_Arm.w.volt=Initialize;
Degree_Modify(&Right_Arm.w.volt,&Right_Arm.w.degree);
Right_Arm.f.volt=Initialize;
Degree_Modify(&Right_Arm.f.volt,&Right_Arm.f.degree);

Left_Arm.s.volt=Move_Ninety;
Degree_Modify(&Left_Arm.s.volt,&Left_Arm.s.degree);
Left_Arm.e.volt=Move_Ninety;
Degree_Modify(&Left_Arm.e.volt,&Left_Arm.e.degree);
Left_Arm.w.volt=Move_Ninety;
Degree_Modify(&Left_Arm.w.volt,&Left_Arm.w.degree);
Left_Arm.f.volt=Move_Ninety;
Degree_Modify(&Left_Arm.f.volt,&Left_Arm.f.degree);

Right_leg.w_e.volt=Move_One_Eighty;
Degree_Modify(&Right_leg.w_e.volt,&Right_leg.w_e.degree);
Right_leg.k.volt=Move_One_Eighty;
Degree_Modify(&Right_leg.k.volt,&Right_leg.k.degree);
Right_leg.f.volt=Move_One_Eighty;
Degree_Modify(&Right_leg.f.volt,&Right_leg.f.degree);

Left_leg.w_e.volt=Move_Three_Sixity;
Degree_Modify(&Left_leg.w_e.volt,&Left_leg.w_e.degree);
Left_leg.k.volt=Move_Three_Sixity;
Degree_Modify(&Left_leg.k.volt,&Left_leg.k.degree);
Left_leg.f.volt=Move_Three_Sixity;
Degree_Modify(&Left_leg.f.volt,&Left_leg.f.degree);
}
void Degree_Modify(int *volt,int *degree)
{
    if((*volt)==Initialize){
        *degree=Zero_Degree;
    }
    else if((*volt)==Move_Ninety){
        *degree=Ninety_Degree;
    }
    else if((*volt)==Move_One_Eighty){
        *degree=One_Eighty_Degree;
    }
    else if ((*volt)==Move_Three_Sixity){
        *degree=Three_Sixity_Degree;
    }
}
