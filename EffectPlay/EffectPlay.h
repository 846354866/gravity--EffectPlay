/*!
 * @file EffetPlay.h
 * @brief DFRobot's EffetPlay
 * @n Header file for DFRobot's play mode setting
 *
 * @copyright	[DFRobot](http://www.dfrobot.com), 2016
 * @copyright	GNU Lesser General Public License
 *
 * @author [yangyang](971326313@qq.com)
 * @version  V1.0
 * @date  2016-09-20
 */
#ifndef _EffectPlay_H_
#define _EffectPlay_H_
#include "Arduino.h"
#include "Wire.h"

#define MP3Pin 3//base pin

class EffectPlay
{
public:
	
	 /*!
	 *  @brief Constructor
     */
	EffectPlay();
	
	 /*!
     *  @brief Destructor
     */
	~EffectPlay();
	
	 /*!
	 *  @brief Set the play music snippet.
	 *  @param snp change between 0x00~0xdf.
	 */
	void playSnippet(uint8_t snp);
	
	 /*!
	 *  @brief Set the volume size.
	 *  @param vol change between 0xe0~0xe7.
	 */
	void setVolume(uint8_t vol);
	
	 /*!
	 *  @brief loop playing music.
	 */
	void loopPlay();
	
	 /*!
	 *  @brief Stop playing music.
	 */
	void stop();
	
private:

	 /*!
	 *  @brief Set the Effet playback.
	 *  @param temp action.
	 */
	void nvcWrite(uint8_t temp);
};
#endif