
//{{BLOCK(cursor)

//======================================================================
//
//	cursor, 256x32@4, 
//	+ palette 256 entries, not compressed
//	+ 128 tiles Metatiled by 8x4 not compressed
//	Total size: 512 + 4096 = 4608
//
//	Time-stamp: 2016-03-25, 00:42:29
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.13
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_CURSOR_H
#define GRIT_CURSOR_H

#define cursorTilesLen 4096
extern const unsigned int cursorTiles[1024];

#define cursorPalLen 512
extern const unsigned short cursorPal[256];

#endif // GRIT_CURSOR_H

//}}BLOCK(cursor)
