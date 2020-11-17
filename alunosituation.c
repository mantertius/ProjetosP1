#include <stdio.h>
//Você deve ajudar seu professor a descobrir qual a situação dos alunos de uma turma. 
//Faça um programa que recebe como entrada 3 notas do usuário, calcula a média do aluno naquele semestre e, 
//em seguida, informa a situação do aluno:

//"Aprovado", se a média estiver no intervalo [70; 100]
//"Reprovado", se a média estiver no intervalo [0; 40] 
//"Final", se a média estiver no intervalo (40; 70).
//"Média inválida" em qualquer outro caso.

//input: Três notas (inteiros) em sequência com os valores de 0 a 100.
//output Uma frase que informa a situação do aluno na disciplina e sua média no seguinte formato (sem acentos):

//"A media do aluno foi 70.0 e ele foi APROVADO" (A saída deve ter aproximação de 2 casas decimais)


//TODO1: função média
//TODO2: receber notas
//TODO3: analisar tipos e valores das notas, negativas nao pode
//TODO4: fazer 3 if e um else
float media(float n1,float n2, float n3)
{
    return (n1+n2+n3)/3;
}


int main()
{
    float x,y,z;
    scanf("%f%f%f",&x, &y, &z);
    
  
    if (media(x,y,z) >= 70 && media(x,y,z) <= 100) // 100> x >70
    {
        printf("A media do aluno foi %.2f e ele foi APROVADO\n", media(x,y,z));
    }

    else if (media(x,y,z) <= 70  && media(x,y,z) >= 40)// 70< x < 40
    {
        printf("A media do aluno foi %.2f e ele foi FINAL\n", media(x,y,z));
    }

    else if (media(x,y,z) >= 0 && media(x,y,z) <= 40) // 40< x < 0
    {
        printf("A media do aluno foi %.2f e ele foi REPROVADO\n", media(x,y,z));
    }
    
    else 
    {
        printf("Media invalida\n");
    }
    return 0;
}