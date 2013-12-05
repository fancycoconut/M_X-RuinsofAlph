void updateEverything()
{

	int (*func)(void) = (int (*)(void))0x080A910D;
	func();

	int (*func2)(void) = (int (*)(void))0x080069C1;
	func2();
	
	int (*func3)(void) = (int (*)(void))0x08006A0D;
	func3();
	
	int (*func4)(void) = (int (*)(void))0x080A1A1D;
	func4();
}

void updateEverything2()
{
	int (*func)(void) = (int (*)(void))0x08007189;
	func();
	
	int (*func2)(void) = (int (*)(void))0x0800742D;
	func2();
	
	int (*func3)(void) = (int (*)(void))0x080A19C1;
	func3();
}

void unfadeScreen()
{
	fadeScreen2(0xFFFFFFFF,0x0,0x10,0,0x0000);
}

void fadeScreen()
{
	fadeScreen2(0xFFFFFFFF,0x0,0,0x10,0x0000);
}

void fadeScreen2(int *bitmask, int *r1, int *r2, int *r3, int *color)
{

	int (*func)(u32,u16,u16,u16,u16) = (int (*)(void))0x080A1AD5;
	func(bitmask,r1,r2,r3,color);
/*
    asm("push {r4,lr}\n"
		"add sp, #-0x4\n"
		"str r0, [sp]\n"
		"mov r0, #0x1\n"
		"neg r0, r0\n"
		"ldr r4, addr1\n"
		"bl bx_r4\n"
		"add sp, #0x4\n"
		"pop {r4}\n"
		"pop {r0}\n"
		"bx r0\n"
		
"bx_r4:	bx r4\n"
".align\n"
"addr1:	.word 0x080A1AD5\n");
*/
		
}

void copyPal(void *source, void *dest)
{
	asm("mov r2, #0x8");
	SystemCall(0xC);
	//int (*func)(void) = (int (*)(void))0x080087BD;
	//func();
}

void copyMem(void *source, void *dest, void *size)
{
	asm("mov r2, #0x8");
	SystemCall(0xC);
}

void playFanfare(int *fanfareNum)
{
	int (*func)(void) = (int (*)(void))0x080A30E5;
	func();
}

void playSound(int *fxNum)
{
	int (*func)(void) = (int (*)(void))0x080A37A5;
	func();
}

void changeIO(int *offset, int *value)
{
	int (*func)(void) = (int (*)(void))0x080010B5;
	func();
}

void enableBG(int *BG)
{
	int (*func)(void) = (int (*)(void))0x08001B31;
	func();
}

void clearOAM()
{
	int (*func)(void) = (int (*)(void))0x08006975;
	func();
	
	int (*func2)(void) = (int (*)(void))0x0800870D;
	func2();
	
	int (*func3)(u8) = (int (*)(void))0x080017BD;
	func3(0x0);
	
}

void storeCallback(int *addr)
{
	int (*func)(void) = (int (*)(void))0x08000541;
	func();
}	

void storeCallback2(int *addr)
{	
	int (*func)(void) = (int (*)(void))0x080006F1;
	func();
}

void createSprite(int *addr, int *addr2, int *XPos, int *YPos, int *i)
{
	int (*func)(u32) = (int (*)(void))0x080084F9;
	func(addr);
	
	int (*func2)(u32,u16,u16,u8) = (int (*)(u8))0x08006DF5;
	u32 result = func2(addr2,XPos,YPos,0);
	
	result = (result*0x44) + 0x02020630;
	
}
