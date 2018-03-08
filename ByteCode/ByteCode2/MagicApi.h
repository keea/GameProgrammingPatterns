/*
*
* @file		MagicApi.h
* @date     Thu Mar  8 19:15:11 2018
* @author   keea
*/

#pragma once

enum Instruction {
	INST_SET_HEALTH = 0x00,
	INST_SET_WINDOW = 0x01,
	INST_SET_AGILITY = 0x02,
	INST_PLAY_SOUND = 0x03,
	INST_SPAWN_PARTICLES = 0x04
};

enum Sound
{
	SOUND_BANG
};

enum Particle {
	PARTICLE_FLAME
};
