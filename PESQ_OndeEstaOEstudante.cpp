/**************************************************
 *                                                *
 *             Algoritmos de Pesquisa             *
 *               Pesquisa Binaria                 *
 *                                                *
 **************************************************
 *                                                *
 *  Autor: Juliano Moreira Aleixo                 *
 *  Disciplina: C03                               *
 *  Professor: Jonas Lopes de Vilas Boas          *
 *  Data: 09/03/2024                              *
 *                                                *
 **************************************************/

#include <iostream>

using namespace std;

int main() {
    int qtd;
    int indexStudentsArray;
    int studentRegistration;
    int studentToBeSearch;
    bool found = false;

    do {
        cin >> qtd;
    } while(qtd <= 0 && qtd > 10000);

    int studentsArray[qtd];

    for(indexStudentsArray = 0; indexStudentsArray < qtd; indexStudentsArray++) {
        cin >> studentRegistration;
        studentsArray[indexStudentsArray] = studentRegistration;
    }

    cin >> studentToBeSearch;

    int s = 0;
    int e = qtd - 1;
    int m;
    while(s <= e) {
        m = (s + e) / 2;
        if(studentsArray[m] == studentToBeSearch) {
            found = true;
            break;
        } else if(studentsArray[m] < studentToBeSearch){
            s = m + 1;
        } else {
            e = m - 1;
        }
    }

    if(found) {
        cout << "Corredor " << m << endl;
    } else {
        cout << "Nao localizado" << endl;
    }

    return 0;
}