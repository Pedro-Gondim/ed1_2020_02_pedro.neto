typedef struct aluno aluno;

struct aluno{
    char nome[40];
    unsigned int matricula;
    float CRA;
};

int novo_aluno(aluno* naluno);