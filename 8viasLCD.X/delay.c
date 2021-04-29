/*
 * File:   delay.c
 * Author: 21192696
 *
 * Created on 19 de Fevereiro de 2021, 17:05
 */


#include <xc.h>
#include "config.h"
#include "delay.h"

void delay (int t)
{
    while (t)
    {
        __delay_ms(1);
        --t;
    }
}