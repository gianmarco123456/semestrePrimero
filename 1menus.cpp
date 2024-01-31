#include <iostream>
#include <cmath>

using namespace std;

void calcularAreaCuadrado() {
    float ladoDelCuadrado; 
    cout << "Digite el lado del cuadrado: ";
    cin >> ladoDelCuadrado;
    float area = ladoDelCuadrado * ladoDelCuadrado;
    cout << "El area del cuadrado de lado " << ladoDelCuadrado << " es " << area << endl;
}

void calcularAreaCirculo() {
    int radio;
    cout << "Digite el radio del círculo: ";
    cin >> radio;
    float area = M_PI * pow(radio, 2);
    cout << "El área del círculo con radio " << radio << " es " << area << endl;
}

void calcularAreaTriangulo() {
    float base, altura;
    cout << "Digite la longitud de la base del triángulo: ";
    cin >> base;
    cout << "Digite la altura del triángulo: ";
    cin >> altura;
    float area = 0.5 * base * altura;
    cout << "El área del triángulo con base " << base << " y altura " << altura << " es " << area << endl;
}

void calcularAreaRectangulo() {
    float base, altura;
    cout << "Digite la base del rectángulo: ";
    cin >> base;
    cout << "Digite la altura del rectángulo: ";
    cin >> altura;
    float area = base * altura;
    cout << "El área del rectángulo es: " << area << endl;
}

void calcularAreaTrapecio() {
    float baseMayor, baseMenor, altura;
    cout << "Digite la longitud de la base mayor del trapecio: ";
    cin >> baseMayor;
    cout << "Digite la longitud de la base menor del trapecio: ";
    cin >> baseMenor;
    cout << "Digite la altura del trapecio: ";
    cin >> altura;
    float area = 0.5 * (baseMayor + baseMenor) * altura;
    cout << "El área del trapecio es: " << area << endl;
}

void calcularAreaPentagono() {
    float lado, apotema;
    cout << "Digite la longitud del lado del pentágono: ";
    cin >> lado;
    cout << "Digite la longitud de la apotema del pentágono: ";
    cin >> apotema;
    float area = 0.5 * 5 * lado * apotema;
    cout << "El área del pentágono es: " << area << endl;
}

void calcularAreaRombo() {
    float diagonalMayor, diagonalMenor;
    cout << "Digite la longitud de la diagonal mayor del rombo: ";
    cin >> diagonalMayor;
    cout << "Digite la longitud de la diagonal menor del rombo: ";
    cin >> diagonalMenor;
    float area = 0.5 * diagonalMayor * diagonalMenor;
    cout << "El área del rombo es: " << area << endl;
}

void calcularAreaElipse() {
    float semiejeMayor, semiejeMenor;
    cout << "Digite la longitud del semieje mayor de la elipse: ";
    cin >> semiejeMayor;
    cout << "Digite la longitud del semieje menor de la elipse: ";
    cin >> semiejeMenor;
    float area = M_PI * semiejeMayor * semiejeMenor;
    cout << "El área de la elipse es: " << area << endl;
}

void calcularAreaParalelogramo() {
    float base, altura;
    cout << "Digite la base del paralelogramo: ";
    cin >> base;
    cout << "Digite la altura del paralelogramo: ";
    cin >> altura;
    float area = base * altura;
    cout << "El área del paralelogramo es: " << area << endl;
}

void calcularAreaHexagono() {
    float lado;
    cout << "Digite la longitud del lado del hexágono: ";
    cin >> lado;
    float area = (3 * sqrt(3) * pow(lado, 2)) / 2;
    cout << "El área del hexágono es: " << area << endl;
}

void calcularVolumenCubo() {
    float lado;
    cout << "Digite la longitud de un lado del cubo: ";
    cin >> lado;
    float volumen = lado * lado * lado;
    cout << "El volumen del cubo con lado " << lado << " es " << volumen << endl;
}

void calcularVolumenEsfera() {
    float radio;
    cout << "Digite el radio de la esfera: ";
    cin >> radio;
    float volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);
    cout << "El volumen de la esfera con radio " << radio << " es " << volumen << endl;
}

void calcularVolumenCilindro() {
    float radio, altura;
    cout << "Digite el radio de la base del cilindro: ";
    cin >> radio;
    cout << "Digite la altura del cilindro: ";
    cin >> altura;
    float volumen = M_PI * pow(radio, 2) * altura;
    cout << "El volumen del cilindro es: " << volumen << endl;
}

void calcularVolumenCono() {
    float radio, altura;
    cout << "Digite el radio de la base del cono: ";
    cin >> radio;
    cout << "Digite la altura del cono: ";
    cin >> altura;
    float volumen = (1.0 / 3.0) * M_PI * pow(radio, 2) * altura;
    cout << "El volumen del cono es: " << volumen << endl;
}

void calcularVolumenPrismaRectangular() {
    float longitud, ancho, altura;
    cout << "Digite la longitud del prisma rectangular: ";
    cin >> longitud;
    cout << "Digite el ancho del prisma rectangular: ";
    cin >> ancho;
    cout << "Digite la altura del prisma rectangular: ";
    cin >> altura;
    float volumen = longitud * ancho * altura;
    cout << "El volumen del prisma rectangular es: " << volumen << endl;
}

void calcularVolumenPiramide() {
    float baseArea, altura;
    cout << "Digite el área de la base de la pirámide: ";
    cin >> baseArea;
    cout << "Digite la altura de la pirámide: ";
    cin >> altura;
    float volumen = (1.0 / 3.0) * baseArea * altura;
    cout << "El volumen de la pirámide es: " << volumen << endl;
}

void calcularVolumenTetraedro() {
    float arista;
    cout << "Digite la longitud de una arista del tetraedro: ";
    cin >> arista;
    float volumen = (sqrt(2) / 12) * pow(arista, 3);
    cout << "El volumen del tetraedro con arista " << arista << " es " << volumen << endl;
}

void calcularVolumenCilindroHueco() {
    float radioExterno, radioInterno, altura;
    cout << "Digite el radio externo del cilindro hueco: ";
    cin >> radioExterno;
    cout << "Digite el radio interno del cilindro hueco: ";
    cin >> radioInterno;
    cout << "Digite la altura del cilindro hueco: ";
    cin >> altura;
    float volumen = M_PI * altura * (pow(radioExterno, 2) - pow(radioInterno, 2));
    cout << "El volumen del cilindro hueco es " << volumen << endl;
}

void calcularVolumenConoTruncado() {
    float radioMayor, radioMenor, altura;
    cout << "Digite el radio mayor de la base del cono truncado: ";
    cin >> radioMayor;
    cout << "Digite el radio menor de la base del cono truncado: ";
    cin >> radioMenor;
    cout << "Digite la altura del cono truncado: ";
    cin >> altura;
    float volumen = (1.0 / 3.0) * M_PI * altura * (pow(radioMayor, 2) + radioMayor * radioMenor + pow(radioMenor, 2));
    cout << "El volumen del cono truncado es " << volumen << endl;
}

void calcularVolumenPiramideTruncada() {
    float baseMayor, baseMenor, altura;
    cout << "Digite la longitud de la base mayor de la pirámide truncada: ";
    cin >> baseMayor;
    cout << "Digite la longitud de la base menor de la pirámide truncada: ";
    cin >> baseMenor;
    cout << "Digite la altura de la pirámide truncada: ";
    cin >> altura;
    float volumen = (1.0 / 3.0) * altura * (pow(baseMayor, 2) + baseMayor * baseMenor + pow(baseMenor, 2));
    cout << "El volumen de la pirámide truncada es " << volumen << endl;
}

void calcularPerimetroCuadrado() {
    float ladoDelCuadrado; 
    cout << "Digite el lado del cuadrado: ";
    cin >> ladoDelCuadrado;
    float perimetro = ladoDelCuadrado * 4;
    cout << "El perimetro del cuadrado de lado " << ladoDelCuadrado << " es " << perimetro << endl;
}

void calcularPerimetroTriangulo() {
    float lado1, lado2, lado3;
    cout << "Digite la longitud del lado 1 del triángulo: ";
    cin >> lado1;
    cout << "Digite la longitud del lado 2 del triángulo: ";
    cin >> lado2;
    cout << "Digite la longitud del lado 3 del triángulo: ";
    cin >> lado3;
    float perimetro = lado1 + lado2 + lado3;
    cout << "El perímetro del triángulo es: " << perimetro << endl;
}

void calcularPerimetroCirculo() {
    float radio;
    cout << "Digite el radio del círculo: ";
    cin >> radio;
    float perimetro = 2 * M_PI * radio;
    cout << "El perímetro del círculo es: " << perimetro << endl;
}

void calcularPerimetroRectangulo() {
    float lado1, lado2;
    cout << "Digite la longitud del lado 1 del rectángulo: ";
    cin >> lado1;
    cout << "Digite la longitud del lado 2 del rectángulo: ";
    cin >> lado2;
    float perimetro = 2 * (lado1 + lado2);
    cout << "El perímetro del rectángulo es: " << perimetro << endl;
}

void calcularPerimetroTrapecio() {
    float lado1, lado2, lado3, lado4;
    cout << "Digite la longitud del lado 1 del trapecio: ";
    cin >> lado1;
    cout << "Digite la longitud del lado 2 del trapecio: ";
    cin >> lado2;
    cout << "Digite la longitud del lado 3 del trapecio: ";
    cin >> lado3;
    cout << "Digite la longitud del lado 4 del trapecio: ";
    cin >> lado4;
    float perimetro = lado1 + lado2 + lado3 + lado4;
    cout << "El perímetro del trapecio es: " << perimetro << endl;
}

void calcularPerimetroPentagono() {
    float lado;
    cout << "Digite la longitud del lado del pentágono: ";
    cin >> lado;
    float perimetro = 5 * lado;
    cout << "El perímetro del pentágono es: " << perimetro << endl;
}

void calcularPerimetroRombo() {
    float lado;
    cout << "Digite la longitud del lado del rombo: ";
    cin >> lado;
    float perimetro = 4 * lado;
    cout << "El perímetro del rombo es: " << perimetro << endl;
}

void calcularPerimetroElipse() {
    float semiejeMayor, semiejeMenor;
    cout << "Digite la longitud del semieje mayor de la elipse: ";
    cin >> semiejeMayor;
    cout << "Digite la longitud del semieje menor de la elipse: ";
    cin >> semiejeMenor;
    float perimetro = M_PI * (3 * (semiejeMayor + semiejeMenor) - sqrt((3 * semiejeMayor + semiejeMenor) * (semiejeMayor + 3 * semiejeMenor)));
    cout << "El perímetro de la elipse es: " << perimetro << endl;
}

void calcularPerimetroParalelogramo() {
    float lado1, lado2;
    cout << "Digite la longitud del lado 1 del paralelogramo: ";
    cin >> lado1;
    cout << "Digite la longitud del lado 2 del paralelogramo: ";
    cin >> lado2;
    float perimetro = 2 * (lado1 + lado2);
    cout << "El perímetro del paralelogramo es: " << perimetro << endl;
}

void calcularPerimetroHexagono() {
    float lado;
    cout << "Digite la longitud del lado del hexágono: ";
    cin >> lado;
    float perimetro = 6 * lado;
    cout << "El perímetro del hexágono es: " << perimetro << endl;
}


int main() {
    int opcion;

    do {
        cout << "================== Menú ==================" << endl;
        cout << "1. Calcular Áreas" << endl;
        cout << "2. Calcular Volúmenes" << endl;
        cout << "3. Calcular Perimetros" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            int opcionSubtema;
            case 1:
                do {
                    cout << "================== Áreas ==================" << endl;
                    cout << "1. Área del Cuadrado" << endl;
                    cout << "2. Área del Círculo" << endl;
                    cout << "3. Area del Triangulo" << endl;
                    cout << "4. Area del Rectangulo" << endl;
                    cout << "5. Area del Trapecio" << endl;
                    cout << "6. Area del Pentagono" << endl;
                    cout << "7. Area del Rombo" << endl;
                    cout << "8. Area del Elipse" << endl;
                    cout << "9. Area del Pralelogramo" << endl;
                    cout << "10. Area del Hexagono" << endl;
                    cout << "11. Salir al Menú Principal" << endl;
                    cin >> opcionSubtema;

                    switch (opcionSubtema) {
                        case 1:
                            calcularAreaCuadrado();
                            break;

                        case 2:
                            calcularAreaCirculo();
                            break;

                        case 3:
                            calcularAreaTriangulo();
                            break;
                        
                        case 4:
                            calcularAreaRectangulo();
                            break;
                            
                        case 5:
                            calcularAreaTrapecio();
                            break;

                        case 6:
                            calcularAreaPentagono();
                            break;

                        case 7:
                            calcularAreaRombo();
                            break;

                        case 8:
                            calcularAreaElipse();
                            break;

                        case 9:
                            calcularAreaParalelogramo();
                            break;

                        case 10:
                            calcularAreaHexagono();
                            break;

                        case 11:
                            break;

                        default:
                            cout << "Opción no válida." << endl;
                    }
                } while (opcionSubtema != 11);
                break;

            case 2:
                do {
                    cout << "================== Volúmenes ==================" << endl;
                    cout << "1. Volumen del Cubo" << endl;
                    cout << "2. Volumen de la Esfera" << endl;
                    cout << "3. Volumen del Cilindro" << endl;
                    cout << "4. Volumen del Cono" << endl;
                    cout << "5. Volumen del Prisma rectangular" << endl;
                    cout << "6. Volumen del Piramide" << endl;
                    cout << "7. Volumen del Tetraedro" << endl;
                    cout << "8. Volumen del Cilindro hueco" << endl;
                    cout << "9. Volumen del Cono truncado" << endl;
                    cout << "10. Volumen del Piramide truncada" << endl;
                    cout << "11. Salir al Menú Principal" << endl;
                    cout << "Ingrese su opción: ";
                    cin >> opcionSubtema;

                    switch (opcionSubtema) {
                        case 1:
                            calcularVolumenCubo();
                            break;

                        case 2:
                            calcularVolumenEsfera();
                            break;

                        case 3:
                            calcularVolumenCilindro();
                            break;

                        case 4:
                            calcularVolumenCono();
                            break;

                        case 5:
                            calcularVolumenPrismaRectangular();
                            break;

                        case 6:
                            calcularVolumenPiramide();
                            break;

                        case 7:
                            calcularVolumenTetraedro();
                            break;

                        case 8:
                            calcularVolumenCilindroHueco();
                            break;

                        case 9:
                            calcularVolumenConoTruncado();
                            break;

                        case 10:
                            calcularVolumenPiramideTruncada();
                            break;

                        case 11:
                            break;

                        default:
                            cout << "Opción no válida." << endl;
                    }
                } while (opcionSubtema != 11);
                break;
            
            case 3:
                do {
                    cout << "================== Perimetros ==================" << endl;
                    cout << "1. Perimetro del Cuadrado" << endl;
                    cout << "2. Perimetro del Triangulo" << endl;
                    cout << "3. Perimetro del Circulo" << endl;
                    cout << "4. Perimetro del Rectangulo" << endl;
                    cout << "5. Perimetro del Trapecio" << endl;
                    cout << "6. Perimetro del Pentagono" << endl;
                    cout << "7. Perimetro del Rombo" << endl;
                    cout << "8. Perimetro del Elipse" << endl;
                    cout << "9. Perimetro del Pralelogramo" << endl;
                    cout << "10. Perimetro del Hexagono" << endl;
                    cout << "11. Salir al Menú Principal" << endl;
                    cout << "Ingrese su opción: ";
                    cin >> opcionSubtema;

                    switch (opcionSubtema) {
                        case 1:
                            calcularPerimetroCuadrado();
                            break;

                        case 2:
                            calcularPerimetroTriangulo();
                            break;

                        case 3:
                            calcularPerimetroCirculo();
                            break;

                        case 4:
                            calcularPerimetroRectangulo();
                            break;

                        case 5:
                            calcularPerimetroTrapecio();
                            break;

                        case 6:
                            calcularPerimetroPentagono();
                            break;

                        case 7:
                            calcularPerimetroRombo();
                            break;

                        case 8:
                            calcularPerimetroElipse();
                            break;

                        case 9:
                            calcularPerimetroParalelogramo();
                            break;

                        case 10:
                            calcularPerimetroHexagono();
                            break;

                        case 11:
                            break;

                        default:
                            cout << "Opción no válida." << endl;
                    }
                } while (opcionSubtema != 11);
                break;

            case 4:
                break;

            default:
                cout << "Opción no válida." << endl;
        }
    } while (opcion != 4);

    return 0;
}
