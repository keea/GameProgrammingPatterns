/*
*
* @file		MagicApi.h
* @date     Fri Mar  9 10:38:05 2018
* @author   keea
*/

#pragma once

enum Instruction {
	INST_SET_HEALTH = 0x00,
	INST_SET_WINDOW = 0x01,
	INST_SET_AGILITY = 0x02,
	INST_PLAY_SOUND = 0x03,
	INST_SPAWN_PARTICLES = 0x04,
	INST_LITERAL = 0x05,
};

enum Sound
{
	SOUND_BANG
};

enum Particle {
	PARTICLE_FLAME
};
