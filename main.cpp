#include <iostream>
#include <string>
#include <vector>
#define MAX_NUM 999

using namespace std;

struct infoaluno
{
    string nome;
    vector<float> notas;
    int frequencia;
};

float mediadoaluno(infoaluno aluno)
{
    float soma = 0;
    for (size_t i = 0; i < 5; i++)
    {
        soma += aluno.notas[i];
    }
    return soma == 0 ? 0 : soma / 5;
};

vector<float> mediadaturma(vector<infoaluno> aluno)
{

    vector<float> soma(aluno[0].notas.size(), 0.0f);

    for (size_t i = 0; i < aluno.size(); i++)
    {
        for (size_t j = 0; j < aluno[0].notas.size(); j++)
        {
            soma[j] += aluno[i].notas[j];
        }
    }
    vector<float> medias(aluno[0].notas.size(), 0.0f);
    for (size_t i = 0; i < aluno[0].notas.size(); i++)
    {
        medias[i] = soma[i] / aluno.size();
    }
    return medias;
}

bool alunofreq(infoaluno aluno)
{
    return aluno.frequencia < 75;
}

int main()
{
    vector<infoaluno> alunos;
    infoaluno aluno;
    float nota;

    for (size_t i = 0; i < MAX_NUM; i++)
    {
        aluno.notas.clear();
        cout << "Digite o nome do aluno, (ou 0 para encerrar)" << endl;
        cin >> aluno.nome;
        if (aluno.nome == "0")
        {
            break;
        }
        cout << "Agora digite as notas da disciplina:" << endl;
        for (size_t j = 0; j < 5; j++)
        {
            cout << "Nota da disciplina " << j + 1 << endl;
            cin >> nota;
            aluno.notas.push_back(nota);
        }
        cout << "Digite agora a frequencia em %:" << endl;
        cin >> aluno.frequencia;
        alunos.push_back(aluno);
    }
    cout << "\n--- Relatório dos alunos ---\n";
    for (size_t i = 0; i < alunos.size(); i++)
    {
        float mediaal = mediadoaluno(alunos[i]);
        cout << "Aluno: " << alunos[i].nome << " | Media do aluno: " << mediaal << " | Frequência: " << alunos[i].frequencia << "%" << endl;
    }

    auto mediaturma = mediadaturma(alunos);
    for (size_t i = 0; i < alunos.size(); i++)
    {
        cout << "\nMedia da turma na disciplina " << i + 1 << ": " << mediaturma[i] << endl;
    }

    cout << "\nAlunos acima da média em todas as disciplinas: " << endl;
    for (size_t i = 0; i < alunos.size(); i++)
    {
        bool media = true;
        for (size_t j = 0; j < alunos[i].notas.size(); j++)
        {
            if (alunos[i].notas[j] < mediaturma[j])
            {
                media = false;
                break;
            }
        }
        if (media)
        {
            cout << "\033[1;32m" << alunos[i].nome << "\033[0m" << endl;
        }
    }

    cout << "\nAlunos com frequência abaixo de 75% :" << endl;
    for (size_t i = 0; i < alunos.size(); i++)
    {
        if (alunofreq(alunos[i]))
        {
            cout << "\033[1;31m" << alunos[i].nome << "\033[0m" << endl;
        }
    }
}
