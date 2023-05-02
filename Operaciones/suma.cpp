class Suma{
    protected:
    int a, b;

    public:
    Suma(int _a, int _b){
        a = _a;
        b = _b;
    }

    int getA(){
        return a;
    }

    int getB(){
        return b;
    }

    void setA(int _a){
        a = _a;
    }

    void setB(int _b){
        b = _b;
    }

    int sumar(int a, int b){
        return a+b;
    }

    void imprimirsuma(){
        cout << "La suma es: " << sumar(a, b) << endl;
    }


};