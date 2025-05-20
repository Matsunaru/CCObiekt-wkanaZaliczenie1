#include <iostream> // dodanie biblioteki wejścia wyjścia do wyświetlania napisów i przyjmowania danych

using namespace std; // użycie nazw standardowych std, aby nie trzeba było używać std::cout i std::cin

//klasa figura
class Figura
{
//publiczna metoda virtualna która rysuje
public:
    // Wirtualna metoda bez parametru musi być nadpisana w klasach pochodnych
    virtual void rysuj() = 0;
};
//klasa kola dziedziczona po figura
class Kolo : public Figura
{
    void rysuj() override //nadpisanie metody rysuj przez koło
    {
        cout << "To jest kolo: () " << endl; //wyświetlenie napisu "To jest kolo: () "
    }
};
//klasa Kwadrat dziedziczona po figura
class Kwadrat : public Figura
{
    void rysuj() override //nadpisanie metody rysuj przez Kwadrat
    {
        cout << "To jest Kwadrat: [] " << endl; //wyświetlenie napisu "To jest kwadrat: []"
    }
};
//klasa Trojkat dziedziczona po figura
class Trojkat : public Figura
{
    void rysuj() override //nadpisanie metody rysuj przez Trojkat
    {
        cout << "To jest Trojkat: /_\\" << endl; //wyświetlenie napisu "To jest Trojkat: /_\"
    }
};

int main() // funkcja główna programu
{
	Figura* figura[3]; // tworzymy tablice wskaźników do klasy Figura

    figura[0] = new Kolo(); // Tworzymy dynamicznie obiekt klasy kolo i zapisujemy wskaźnik w tablicy
    figura[1] = new Kwadrat(); // Tworzymy dynamicznie obiekt klasy Kwadrat i zapisujemy wskaźnik w tablicy
    figura[2] = new Trojkat(); // Tworzymy dynamicznie obiekt klasy Trójkąt i zapisujemy wskaźnik w tablicy

    for (int i = 0; i < 3; i++) // pętla do przejścia przez wszystkie figury
    {
        figura[i]->rysuj(); // wywołanie metody rysuj() przez wskaźnik
    }
    for (int i = 0; i < 3; i++) // druga pętla do usuwania obiektów z pamięci
    {
        delete figura[i]; // usuwamy dynamicznie utworzone obiekty
    }
    return 0; // zakończenie programu
}
