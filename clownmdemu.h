#ifndef CLOWNMDEMU_H
#define CLOWNMDEMU_H

#include <stddef.h>

/* TODO - Documentation */
/* TODO - Library linkage stuff */

enum
{
	CLOWNMDEMU_BUTTON_UP,
	CLOWNMDEMU_BUTTON_DOWN,
	CLOWNMDEMU_BUTTON_LEFT,
	CLOWNMDEMU_BUTTON_RIGHT,
	CLOWNMDEMU_BUTTON_A,
	CLOWNMDEMU_BUTTON_B,
	CLOWNMDEMU_BUTTON_C,
	CLOWNMDEMU_BUTTON_START
};

void ClownMDEmu_Init(void *state);
void ClownMDEmu_Deinit(void *state);
void ClownMDEmu_Iterate(void *state, void (*video_callback)(unsigned int scanline, const unsigned short *pixels, unsigned int screen_width, unsigned int screen_height), unsigned char (*read_input_callback)(unsigned int player_id, unsigned int button_id));
void ClownMDEmu_UpdateROM(void *state, const unsigned char *rom_buffer, size_t rom_size);
void ClownMDEmu_SetROMWriteable(void *state, unsigned char rom_writeable);
void ClownMDEmu_Reset(void *state_void);
void ClownMDEmu_SetPAL(void *state_void, unsigned char pal);
void ClownMDEmu_SetJapanese(void *state_void, unsigned char japanese);
size_t ClownMDEmu_GetStateSize(void);

#endif /* CLOWNMDEMU_H */
