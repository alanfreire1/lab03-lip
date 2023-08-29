#include <iostream>

using namespace std;

int main() {
    int cabecas, patas;
    cin >> cabecas;
    cin >> patas;

    int coelhos = (patas - (2 * cabecas)) / 2;
    int gansos = cabecas - coelhos;

    cout << "No cercado existem " << coelhos << " coelhos e "
         << gansos << " gansos." << endl;

    return 0;
}
