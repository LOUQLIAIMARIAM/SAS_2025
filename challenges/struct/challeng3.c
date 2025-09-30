#include <stdio.h>

typedef struct {
    float longueur;
    float largeur;
} Rectangle;

float AirRectangle(Rectangle r){
    return r.longueur * r.largeur;
}

int main(){
    Rectangle R = {2, 3};
    printf("Aire du rectangle: %.2f\n", AirRectangle(R));
    return 0;
}