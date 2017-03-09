/*!
 * @file playDemo.ino
 * @brief DFRobot's play mode setting
 * @n [Get the module here](等上架后添加商品购买链接)
 * @n This example Set the volume size and play music snippet.
 * @n [Connection and Diagram](等上架后添加wiki链接)
 *
 * @copyright	[DFRobot](http://www.dfrobot.com), 2016
 * @copyright	GNU Lesser General Public License
 *
 * @author [yangyang](971326313@qq.com)
 * @version  V1.0
 * @date  2016-09-20
 */
 
#include "EffectPlay.h"

EffectPlay ep = EffectPlay();

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(115200);
  pinMode(MP3Pin, OUTPUT);
  delay(1000);
  ep.setVolume(0xe7);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(uint8_t i = 1; i < 0x22; i++)
  {
    ep.playSnippet(i);
    delay(1000);
  }
}