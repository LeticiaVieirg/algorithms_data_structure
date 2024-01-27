#include <stdio.h>
#include <math.h>

typedef struct ponto{
    float x;
    float y;
} Ponto;

typedef struct retangulo{
    Ponto canto_inferior_esquerdo;
    float base;
    float altura;
} Retangulo;

typedef struct circulo{
    Ponto centro;
    float raio;
} Circulo;

Retangulo ret_circunscrito(Circulo *c, float h) {
    Retangulo ret;
    ret.base = c->raio * 2.0;
    ret.altura = h;
    ret.canto_inferior_esquerdo.x = c->centro.x - c->raio;
    ret.canto_inferior_esquerdo.y = c->centro.y - h / 2.0;
    return ret;
}

Circulo circ_interno(Retangulo* r) {
    Circulo circ;
    circ.raio = fmin(r->base, r->altura) / 2.0;
    circ.centro.x = r->canto_inferior_esquerdo.x + r->base / 2.0;
    circ.centro.y = r->canto_inferior_esquerdo.y + r->altura / 2.0;
    return circ;
}

int main() {

    Circulo circulo_exemplo = {{0.0, 0.0}, 5.0};
    Retangulo retangulo_circunscrito = ret_circunscrito(&circulo_exemplo, 2.0);
    Circulo circulo_interno = circ_interno(&retangulo_circunscrito);

    printf("Retângulo circunscrito: Base=%.2f, Altura=%.2f\n", retangulo_circunscrito.base, retangulo_circunscrito.altura);
    printf("Círculo interno: Raio=%.2f\n", circulo_interno.raio);

    return 0;
}
