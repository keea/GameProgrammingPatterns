/*
*
* @file		MagicApi.h
* @date     Fri Mar  9 11:22:55 2018
* @author   keea
*/

#ifndef __MAGICAPI_H__
#define __MAGICAPI_H__


enum Instruction {
	INST_SET_HEALTH = 0x00,
	INST_SET_WISDOM = 0x01,
	INST_SET_AGILITY = 0x02,
	INST_PLAY_SOUND = 0x03,
	INST_SPAWN_PARTICLES = 0x04,

	INST_LITERAL = 0x05,

	INST_ADD = 0x06,
	INST_DIVIDE = 0x07,

	INST_GET_HEALTH = 0x08,
	INST_GET_WISDOM = 0x09,
	INST_GET_AGILITY = 0x10,
};

enum Sound
{
	SOUND_BANG
};

enum Particle {
	PARTICLE_FLAME
};

#endif
