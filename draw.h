#ifndef DRAW_INCLUDED
#define DRAW_INCLUDED

void print_triangle(int startCol, int size);
void print_square(int startCol, int size);
void print_char_5x7(char c);
void print_arrow(int startCol, int size, int sqrWidth);
void print_custom_char_5x7(char c); /* custom print*/
extern const unsigned char customFont_5x7[][5];/*custom font*/
extern const unsigned char font_5x7[][5];

#endif
