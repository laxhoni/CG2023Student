#include "button.h"


Button::Button() {
    
}
Button::Button(Image img, Vector2 pos){
    image = img;
    position = pos;
}

Button::~Button() {
    
}



void Button::drawButton(Image& framebuffer){
    framebuffer.DrawImage(image, position.x, position.y, false);
}

bool Button::IsMouseInside(const Vector2& mousePosition){
    int width = image.width;
    int height = image.height;

    return mousePosition.x >= position.x &&
           mousePosition.x <= position.x + width &&
           mousePosition.y >= position.y &&
           mousePosition.y <= position.y + height;
}

