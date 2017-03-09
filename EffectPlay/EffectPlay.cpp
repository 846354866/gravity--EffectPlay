/*!
 * @file EffectPlay.h
 * @brief EffectPlay
 * @n Header file for DFRobot's play mode setting
 *
 * @copyright	[DFRobot](http://www.dfrobot.com), 2016
 * @copyright	GNU Lesser General Public License
 *
 * @author [yangyang](971326313@qq.com)
 * @version  V1.0
 * @date  2016-09-20
 */
 
#include <EffectPlay.h>

EffectPlay::EffectPlay()
{
	
}

EffectPlay::~EffectPlay()
{
	
}

void EffectPlay::playSnippet(uint8_t snp)
{
	nvcWrite(snp-1);
	delay(2);
}

void EffectPlay::setVolume(uint8_t vol)
{
	nvcWrite(vol);
	delay(2);
}

void EffectPlay::loopPlay()
{
	nvcWrite(0xf2);
	delay(2);
}

void EffectPlay::stop()
{
	nvcWrite(0xfe);
	delay(2);
}

void EffectPlay::nvcWrite(uint8_t temp)
{
	digitalWrite(MP3Pin,LOW);
	delay(2);
	for(int i = 0; i < 8; i++)
	{
		digitalWrite(MP3Pin,HIGH);
		if(temp & 1){
			delayMicroseconds(1500);
			digitalWrite(MP3Pin,LOW);
			delayMicroseconds(500);
		}else{
			delayMicroseconds(500);
			digitalWrite(MP3Pin,LOW);
			delayMicroseconds(1500);
		}   
		temp >>= 1; 
	}
  
	digitalWrite(MP3Pin,HIGH); 
}