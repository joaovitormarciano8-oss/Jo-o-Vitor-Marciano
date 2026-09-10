struct DataDeNacimento{

    int dia;
    int mes;
    int ano;

};

typedef struct{

    struct DataDeNacimento data;
    float peso;
    char nome [50];

}Pessoas;

void criar (Pessoas p1,struct DataDeNacimento d1);

void alterar (Pessoas p2,struct DataDeNacimento d2);

void exibir (Pessoas p3,struct DataDeNacimento d3);
