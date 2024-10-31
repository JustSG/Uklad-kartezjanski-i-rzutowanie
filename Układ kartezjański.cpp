#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Punkt2w{
    public: 
        int wspolPunktu;
        int x;
        int y;
        
    Punkt2w(){
        
    }
    
    ~Punkt2w(){
        cout << "usunięto obiekty" << endl;
    }
    
    void wczytaj(){
        cout << "Podaj x: " << endl;
        cin >> x;
        cout << "Podaj y: " << endl;
        cin >> y; 
    }
    
    void wypisz(){
        cout << "Twoje współrzędne: (" << x << ";" << y << ")." << endl;
    }
    
    void wektor2w(){
        int niewiadoma = x*x + y*y;
        double dlugoscWektora = sqrt(niewiadoma);
        cout << "Długość wektora od podanych współrzędnych wynosi: " << dlugoscWektora << endl;
    }
    
    static void wektor2w(int x,int y){
        int niewiadoma = x*x + y*y;
        double dlugoscWektora = sqrt(niewiadoma);
        cout << "Długość wektora od podanych współrzędnych wynosi: " << dlugoscWektora << endl;
    }
};

class Punkt3w{
    public: 
        int wspolPunktu;
        int x;
        int y;
        int z;
        
    Punkt3w(){
        
    }
    
    ~Punkt3w(){
        cout << "usunięto obiekty" << endl;
    }
    
    void wczytaj(){
        cout << "Podaj x: " << endl;
        cin >> x;
        cout << "Podaj y: " << endl;
        cin >> y;
        cout << "Podaj z: " << endl;
        cin >> z;
    }
    void wypisz(){
        cout << "Twoje współrzędne: (" << x << ";" << y << ";" << z << ")." << endl;
    }
    
    void rzutuj(Punkt3w){
        int wybor;
        
        cout << "Wybierz płaszczyznę na którą chcesz zrobić rzut: " << endl << "1. xy" << endl << "2. xz" << endl << "3. yz" << endl;
        while(wybor != 1 && wybor != 2 && wybor != 3){
            cin >> wybor;
        
            switch(wybor){
                case 1:{
                    cout << "Twoje współrzędne na płaszczyznie xy: (" << x << ";" << y << ";" << "0)." << endl;
                    Punkt2w::wektor2w(x, y);
                    break;
                }
                case 2:{
                    cout << "Twoje współrzędne na płaszczyznie xz: (" << x << ";0;" << z << ")." << endl;;
                    Punkt2w::wektor2w(x, z);
                    break;
                }
                case 3:{
                    cout << "Twoje współrzędne na płaszczyznie yz: (0;" << y << ";" << z << ")." << endl;;
                    Punkt2w::wektor2w(y, z);
                    break;
                }
                default:{
                    cout << "Wprowadź poprawną wartość!" << endl;
                    break;
                }
            }
        
        }
    }
};

int main()
{
    cout << "--------------------------2 wymiar----------------------------------" << endl;
    
    Punkt2w punkt1;
    punkt1.wczytaj();
    punkt1.wypisz();
    punkt1.wektor2w();
    
    cout << "--------------------------3 wymiar----------------------------------" << endl;
    
    Punkt3w punkt2;
    punkt2.wczytaj();
    punkt2.wypisz();
    punkt2.rzutuj(punkt2);
    
    return 0;
}
