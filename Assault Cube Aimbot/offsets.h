#pragma once


const uintptr_t playerBaseAddr = 0x10F4F4; //uint_player_base
const uintptr_t entListBaseAddr = 0x10F4F8; //uint_entityplayer_base
const uintptr_t entStep = 0x4; //gap between entities in bytes //uint_entityloopdistance
const uintptr_t playerCountAddr = 0x10F500; //uint_playercount
const uintptr_t gameStateAddr = 0x10A044; //uint_gamestate
const uintptr_t camPosOffset = 0x4; // aiming at head? //uint_eye_position

const uintptr_t mgAmmoOffset = 0x148; // machine gun ammo
const uintptr_t carbineAmmoOffset = 0x140; // carbine ammo
const uintptr_t shotgunAmmoOffset = 0x144; // shot gun ammo
const uintptr_t sniperAmmoOffset = 0x14C; // sniper ammo
const uintptr_t arifleAmmoOffset = 0x150; // rifle ammo
const uintptr_t pistolAmmoOffset = 0x13C; // pistol ammo

const uintptr_t rotationOffset = 0x40; // yaw and pitch //uint_rotation
const uintptr_t healthOffset = 0xF8; //uint_health
const uintptr_t nameOffset = 0x225; // uint_name
const uintptr_t teamOffset = 0x32C; //uint_team
