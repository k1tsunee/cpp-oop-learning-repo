#ifndef DUMMYCLASS_HPP_
#define DUMMYCLASS_HPP_

class Residencia{
    //Private se não tiver nada antes.
    
    protected:
        float area;

    public:
        Residencia(float n_area, int n_quartos, int n_comodos, int n_banheiros, int vagasGaragem);
        ~Residencia();
        float getArea();
        int countQuartos();
        int countComodos();
        int countVagasGaragem();
        bool verificarAreaCompativel();   

    private:
        Residencia();
        int comodos;
        int quartos;
        int banheiros;
        int vagas_garagem;
};

#endif
