#include "instance.h"




static Font font;




void SetupApplication(){
    font = LoadFontEx("resources/font/OpenSans-SemiBold.ttf", 200, NULL, 0);
}

Font InsGetFont(){
    return font;
}
void InsDrawText(const char* text, float posX, float posY, float size, Color color){
    Vector2 vec = {posX, posY};
    DrawTextEx(font, text, vec, size, 2, color);
}




void CloseApplication(){
    UnloadFont(font);
}