#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <pebble.h>
#include "weather.h"
#include "network.h"
#include "battery.h"
#include "configuration.h"
#include "acceleration.h"
#include "clock.h"
#include "health.h"

#ifdef DEBUG_ENABLED
   #define DEBUG_COMMUNICATION
#endif

/*
// Variable to set the debug printout (is set in main.c)
bool m_b_Debug;
*/

// Functions used in other files 

bool m_b_CommunicationIsInit;

void Communication_Send(int i_MessageID);
void Communication_Init();
void Communication_OnInit();
void Communication_DeInit();

#endif
