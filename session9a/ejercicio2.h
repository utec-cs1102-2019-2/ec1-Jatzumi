#ifndef SESSION9A_EJERCICIO2_H
#define SESSION9A_EJERCICIO2_H
typedef float decimal;

class Cilindro {
private:
    decimal  radio,altura;
public:
    Cilindro(decimal radio,decimal altura);
    decimal volumen();
    decimal area_total();
    decimal area_lateral();
    virtual ~Cilindro();
};

#endif //SESSION9A_EJERCICIO2_H
