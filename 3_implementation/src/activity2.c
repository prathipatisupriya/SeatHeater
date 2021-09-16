/**
 * @file activity2.h
 * @author supriya (you@domain.com)
 * @brief  Read sensor analog values and convert it into digital values using ADC
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
/**
 * @brief initialize the ADC (Analog to Digital Converter)
 * 
 */
void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA= (1<<ADEN)|(7<<ADPS0);
}

uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
int main(void)
{
    InitADC();
    uint16_t temp;

      while(1)
      {
      temp=ReadADC(0);
      _delay_ms(200);
      }
}