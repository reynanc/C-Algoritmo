#include <iostream>

using namespace std;

int main() {

    //3.8.	Escreva um trecho de código que, dada a altura de um recruta e o sexo, classifica-o
    //    // em uma das seguintes categorias (deve haver uma variável para coletar a altura e a classificação
    //    // deve ser impressa na tela):
    //    //•	Homem Inapto por baixa estatura: inferior a 168cm
    //    //•	Mulher inapta por baixa estatura: inferior a 160cm
    //    //•	Homem apto: 168-195cm
    //    //•	Mulher apta: 160-195cm
    //    //•	Inapto por excesso de altura: superior a 195cm

    int altura;

    cout << "Digite sua altura: ";
    cin >> altura;

    if (altura < 160)
    {
        cout << "\nMulher Inapta por baixa estatura\n";
        cout << "\nHomem Inapto por baixa estatura\n";
    }

    else if ((altura >= 160) && (altura < 168))
    {
        cout << "\nMulher apta\n";
        cout << "\nHomem Inapto por baixa estatura\n";
    }
    else if ((altura >= 168) && (altura <= 195))
    {
        cout << "\nHomem apto\n";
        cout << "\nMulher apta\n";
    }
    else
    {
        cout << "\nInapto(a) por excesso de altura";
    }
}