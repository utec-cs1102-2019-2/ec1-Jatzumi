#ifndef SESSION9A_EJERCICIO1_H
#define SESSION9A_EJERCICIO1_H
typedef float decimal;
class Ctriangulo {
    private:
        decimal  lado1,lado2,lado3;
        decimal semiperimetro();
    public:
    decimal area();
    decimal perimetro();
    Ctriangulo(decimal lado1, decimal lado2,decimal lado3);
    virtual ~Ctriangulo();
};

#endif //SESSION9A_EJERCICIO1_H
