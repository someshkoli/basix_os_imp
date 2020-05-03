#define FB_GREEN 2
#define FB_DARK_GREY 8
void kmain(){

}
/** fb_write_cell:
* Writes a character with the given foreground and background to position i
* in the framebuffer.
*
* @param i The location in the framebuffer
* @param c The character
* @param fg The foreground color
* @param bg The background color
*/
char *fb = (char *) 0x000B8000;
void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg)
{
fb[i] = c;
fb[i + 1] = ((fg & 0x0F) << 4) | (bg & 0x0F);
}

fb_write_cell(unsigned int  0,char 'A',unsigned char FB_GREEN,unsigned char FB_DARK_GREY);
