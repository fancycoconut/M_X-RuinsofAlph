#ifndef GBA_REGS_H
#define GBA_REGS_H

#include "gba_types.h"
#define OAM_Mem         ((u16*)0x7000000) 					// Sprites(128), coordinates, size..(total 1Kb)
#define OBJ_PaletteMem	((u16*)0x5000200) 					// Sprite Palette(256/16 colors)
#define OAM_Data        ((u16*)0x6010000) 					// Sprite data (bitmapped)
#define inputLevel      *(u8*)0x020370D0
//#define lzData2         ((u16*)0x2032200)
//#define lzData          ((u16*)0x2033200)
//#define save1           ((u16*)0x2034200)
//#define save2           ((u16*)0x2035200)
#define lzData2         ((u16*)0x203C000)
#define lzData          ((u16*)0x203D000)
#define save1           ((u16*)0x203E000)
#define save2           ((u16*)0x203F000)
#define interrupt       ((u32*)0x30030F0)

#define FrontBuffer     ((u16*)0x6000000) 					// Front Display Memory (the screen in mode 3-5)
#define BG_PaletteMem   ((u16*)0x5000000) 					// Background Palette(256/16 colors)

#define REG_DISPCNT     *(u16*)0x4000000  					// Display control mode
#define REG_BG0CNT			*(u16*)0x4000008            // BG0 control
#define REG_VCOUNT      *(volatile u16*)0x4000006  	// Vertical control sync
#define REG_MASTER	    *(u16*)0x4000208
//#define vsync() 				while(REG_VCOUNT != 160);
#define vsync()					while((REG_VCOUNT & 63) != 0);
#endif
