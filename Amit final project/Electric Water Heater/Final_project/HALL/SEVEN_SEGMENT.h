/*
 * 7S.h
 *      Author: David Wael,Mohamed Medhat,Ayatullah Medhat
 */
#include "../STD_TYPES.h"
#include "../MCAL/Register_addresses.h"
#include "../Macros.h"

#ifndef Seven_Seg_H_
#define Seven_Seg_H_




//initialive Seven Segment
void SS_Init (void);

//display current Temp on the Seven Segment
void SS_display_Temp (uint8 Temp);

//display desired Temp on the Seven Segment
void SS_display_desired_Temp (uint8 Desired_Temp);

//Turnning off the Seven Segment in off mode
void SS_TurnOff (void);

#endif /* 7S_H_ */
