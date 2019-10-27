/*  GIMP header image file format (INDEXED): /home/lawrie/tinyfpga-bx-game-soc/games/pacman/resources/intro.h  */

static unsigned int width = 64;
static unsigned int height = 64;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define HEADER_PIXEL(data,pixel) {\
pixel[0] = header_data_cmap[(unsigned char)data[0]][0]; \
pixel[1] = header_data_cmap[(unsigned char)data[0]][1]; \
pixel[2] = header_data_cmap[(unsigned char)data[0]][2]; \
data ++; }

static char header_data_cmap[256][3] = {
	{  0,  0,  0},
	{255,  0,  0},
	{  0,255,  0},
	{255,255,  0},
	{  0,  0,255},
	{255,  0,255},
	{  0,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255}
	};
static char header_data[] = {
	0,0,0,0,0,0,0,0,0,7,7,0,0,0,7,0,
	0,7,7,7,7,7,0,0,0,7,7,7,7,7,0,0,
	0,7,0,0,7,7,0,0,0,0,0,7,7,7,0,0,
	0,0,0,7,0,7,0,0,0,7,7,7,7,7,0,0,
	0,0,0,0,0,0,0,0,0,7,7,7,0,0,7,0,
	0,0,0,7,0,0,0,0,0,7,0,0,0,0,0,0,
	0,7,0,7,7,0,0,0,0,0,0,7,0,7,0,0,
	0,0,7,7,0,7,7,0,0,7,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,7,0,7,7,0,7,0,
	0,0,0,7,0,0,0,0,0,7,0,0,0,0,0,0,
	0,7,7,7,0,0,0,0,0,0,7,0,0,0,7,0,
	0,0,7,0,7,0,7,0,0,7,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,7,0,0,7,7,7,0,
	0,0,0,7,0,0,0,0,0,7,0,0,0,0,0,0,
	0,7,7,7,0,0,0,0,0,0,7,7,7,7,7,0,
	0,7,7,0,7,0,7,7,0,7,7,7,7,7,0,0,
	0,0,0,0,0,0,0,0,0,7,0,0,0,7,7,0,
	0,0,0,7,0,0,0,0,0,7,0,0,0,0,0,0,
	0,7,0,7,7,0,0,0,0,7,7,0,0,0,7,7,
	0,7,0,0,0,0,0,7,0,7,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,7,0,0,0,0,7,0,
	0,7,7,7,7,7,0,0,0,7,7,7,7,7,0,0,
	0,7,0,0,7,7,0,0,0,7,0,0,0,0,0,7,
	0,7,0,0,0,0,0,7,0,7,7,7,7,7,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,7,7,7,7,7,0,0,0,7,0,0,0,7,0,0,
	0,7,7,7,7,7,0,0,0,7,7,7,7,0,0,0,
	0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,7,0,0,0,0,0,0,0,7,0,0,0,7,0,0,
	0,0,0,7,0,0,0,0,0,7,0,0,0,7,0,0,
	0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,
	0,0,7,0,0,7,0,0,0,0,0,0,0,0,0,0,
	0,7,0,0,0,0,0,0,0,7,7,7,7,7,0,0,
	0,0,0,7,0,0,0,0,0,7,0,0,0,7,0,0,
	0,0,0,7,7,0,0,0,0,0,0,7,7,0,0,0,
	0,0,7,0,0,7,0,0,0,0,0,0,0,0,0,0,
	0,7,7,7,7,7,0,0,0,7,0,0,0,7,0,0,
	0,0,0,7,0,0,0,0,0,7,7,7,7,0,0,0,
	0,0,7,7,0,0,0,0,0,0,0,7,7,0,0,0,
	0,0,0,0,0,0,0,0,0,7,7,7,7,7,0,0,
	0,7,0,0,0,0,0,0,0,7,0,0,0,7,0,0,
	0,0,0,7,0,0,0,0,0,7,0,0,7,7,0,0,
	0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,7,0,0,0,0,0,0,0,7,0,0,0,7,0,0,
	0,0,0,7,0,0,0,0,0,7,0,0,0,7,0,0,
	0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,7,7,7,7,0,0,0,0,0,7,7,0,0,0,
	0,7,7,7,7,7,0,0,0,7,7,7,7,7,0,0,
	0,0,0,0,7,7,0,0,0,7,7,7,7,7,0,0,
	0,7,7,7,7,7,0,0,0,7,7,7,7,7,0,0,
	0,7,0,0,0,0,7,0,0,0,7,7,7,0,0,0,
	0,0,0,0,0,7,0,0,0,0,0,0,0,7,0,0,
	0,0,0,7,7,0,0,0,0,7,0,0,0,0,0,0,
	0,7,0,0,0,0,0,0,0,0,0,0,0,7,0,0,
	0,7,0,0,0,0,7,0,0,0,0,7,7,0,0,0,
	0,7,7,7,7,7,0,0,0,7,7,7,7,7,0,0,
	0,0,7,7,0,0,0,0,0,7,7,7,7,7,0,0,
	0,7,0,0,0,0,0,0,0,0,0,0,7,7,0,0,
	0,7,0,0,0,0,7,0,0,0,0,7,7,0,0,0,
	0,7,0,0,0,0,0,0,0,0,0,0,0,7,0,0,
	0,7,7,0,0,7,0,0,0,0,0,0,0,7,0,0,
	0,7,7,7,7,7,0,0,0,0,0,7,7,0,0,0,
	0,7,0,0,0,0,7,0,0,0,0,7,7,0,0,0,
	0,7,0,0,0,0,0,0,0,0,0,0,0,7,0,0,
	0,7,7,7,7,7,7,0,0,0,0,0,0,7,0,0,
	0,7,0,0,0,7,0,0,0,0,0,7,0,0,0,0,
	0,0,7,7,7,7,0,0,0,0,7,7,7,7,0,0,
	0,7,7,7,7,7,0,0,0,7,7,7,7,7,0,0,
	0,0,0,0,0,7,0,0,0,7,7,7,7,7,0,0,
	0,7,7,7,7,7,0,0,0,0,0,7,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,7,7,7,7,7,7,0,0,7,7,7,7,7,0,0,
	0,0,0,1,1,0,0,0,0,1,1,1,1,1,0,0,
	0,0,0,0,0,0,0,0,0,0,3,3,3,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,7,0,0,0,0,7,0,0,7,0,0,0,7,0,0,
	0,0,1,1,1,0,0,0,0,0,0,0,0,1,0,0,
	0,0,0,0,0,0,0,0,0,3,3,3,3,3,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,7,7,7,7,7,7,0,0,7,0,0,0,7,0,0,
	0,0,0,1,1,0,0,0,0,1,1,1,1,1,0,0,
	0,0,0,3,3,0,0,0,3,3,3,3,3,3,3,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,7,0,0,0,0,7,0,0,7,7,7,7,7,0,0,
	0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,
	0,0,0,3,3,0,0,0,3,3,3,3,3,3,3,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,7,0,0,0,0,7,0,0,0,0,0,0,7,0,0,
	0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,7,7,7,7,7,7,0,0,7,7,7,7,7,0,0,
	0,0,1,1,1,1,0,0,0,1,1,1,1,1,0,0,
	0,0,0,0,0,0,0,0,0,3,3,3,3,3,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,3,3,3,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,1,0,0,0,1,0,0,1,1,1,1,1,0,0,0,
	7,7,7,7,7,0,0,0,7,0,0,0,0,0,0,0,
	0,7,7,7,7,0,0,0,0,7,0,0,0,0,7,0,
	0,7,7,7,7,0,0,0,0,7,7,7,0,0,0,0,
	0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,0,
	7,0,0,0,7,0,0,0,7,0,0,0,0,0,0,0,
	0,7,0,0,0,7,0,0,0,0,7,0,0,0,7,0,
	0,7,0,0,0,7,0,0,7,0,0,0,7,0,0,0,
	0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,0,
	7,0,0,0,7,0,0,0,7,0,0,0,0,0,0,0,
	0,7,0,0,0,7,0,0,0,0,0,7,0,7,0,0,
	0,7,0,0,0,7,0,0,7,0,0,0,0,0,0,0,
	0,1,0,0,0,1,0,0,1,1,1,1,1,0,0,0,
	7,7,7,7,7,0,0,0,7,0,0,0,0,0,0,0,
	0,7,7,7,7,0,0,0,0,0,0,0,7,0,0,0,
	0,7,0,0,0,7,0,0,7,0,0,7,7,7,0,0,
	0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,
	7,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,
	0,7,0,0,0,7,0,0,0,0,0,7,0,0,0,0,
	0,7,0,0,0,7,0,0,7,0,0,0,7,0,0,0,
	0,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,
	7,0,0,0,0,0,0,0,7,7,7,7,7,0,0,0,
	0,7,7,7,7,7,0,0,0,0,7,0,0,0,0,0,
	0,7,7,7,7,0,0,0,0,7,7,7,7,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,1,0,0,0,0,1,0,0,1,1,1,1,1,0,0,
	0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,
	0,0,1,1,1,1,1,0,0,0,1,1,1,1,0,0,
	0,0,1,1,1,1,1,0,0,0,1,1,1,1,1,0,
	0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
	0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,
	0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,
	0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
	0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,
	0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,
	0,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,
	0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0,
	0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,
	0,0,1,1,1,1,1,0,0,0,1,1,1,1,0,0,
	0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
	0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,
	0,0,1,1,1,0,0,0,0,0,1,0,0,0,0,0,
	0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
	0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,
	0,0,1,0,1,1,0,0,0,0,1,0,0,0,0,0,
	0,1,0,0,0,0,1,0,0,1,1,1,1,1,0,0,
	0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,
	0,0,1,1,1,1,1,0,0,0,1,1,1,1,0,0,
	0,0,1,0,0,1,1,0,0,0,1,1,1,1,1,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	};
