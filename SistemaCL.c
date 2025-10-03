#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    char cadastro_do_usuario[50];
    char senha_do_cadastro[50];
    char senha_login[50];
    char usuario_login[50];

    do {
        printf("----Cadastro----\n\n");
        printf("nome de usuario: \n");
        scanf("%s", cadastro_do_usuario);
        printf("senha: ");
        scanf("%s", senha_do_cadastro);

        if (strlen(senha_do_cadastro) < 6) {
            printf("senha invalida, precisa ter ao menos uns 6 caracteres..\n\n");
        }
        else if (strcmp(senha_do_cadastro, "123456") == 0) {
            printf("senha invalida, n pode ser 123456..\n\n");
        }
        else if (strlen(senha_do_cadastro) == 0) {
            printf("senha invalida, n pode ser vazia\n\n");
        }
        else {
            break;
        }
        
    } while (1);
    
    printf("cadastro realizado com sucesso!\n");

    do {
        printf("\n----Login----\n\n");
        printf("Usuario: ");
        scanf("%s", usuario_login);
        printf("Senha: ");
        scanf("%s", senha_login);

        if (strcmp(cadastro_do_usuario, usuario_login) == 0 && strcmp(senha_do_cadastro, senha_login) == 0) {
            printf("login bem sucedido\n");
            break;
        }
        else {
            printf("senha ou usuario invalido, tente novamente\n\n");
        }
        
    } while (1);
    
    
    int escolha;

    do {
        printf("\n---Menu Principal---\n");
        printf("1 - Pessoal\n");
        printf("2 - Financeiro\n");
        printf("3 - Academico\n");
        printf("4 - Utilidades\n");
        printf("0 - Sair\n");
        
        printf("\nEscolha a opcao: ");
        scanf("%i", &escolha);

        switch(escolha){
            case 1: { 
                int idade;
                do {
                    printf("\n----Modulo Pessoal----\n\n");
                    printf("Qual a sua idade: ");
                    scanf("%i", &idade);
                    
                    if(idade >= 18 && idade < 70){
                        printf("sujeito(a) maior de idade\nVoto Obrigatorio\n\n");
                        break;
                    }
                    if(idade >= 16 && idade <= 17){
                        printf("sujeito(a) menor de idade\nVoto Opcional\n\n");
                        break;
                    }
                    if(idade <= 15 && idade >= 1){
                        printf("sujeito(a) menor de idade\nnao Vota\n\n");
                        break;
                    }
                    if(idade >= 70 && idade <= 105){
                        printf("sujeito(a) maior de idade\nVoto Opcional\n\n");
                        break;
                    }
                    if(idade < 0 || idade > 106){
                        printf("Idade invalida, tente novamente\n\n");
                    }
                } while (1);
                
                printf("Agora veremos o seu IMC\n\n");
                do {
                    float peso, altura, imc;
                    printf("Informe o seu peso(Kg): ");
                    scanf("%f", &peso);
                    printf("Informe a sua altura(m): ");
                    scanf("%f", &altura);
                    
                    if(peso != 0 && altura != 0){
                        imc = peso / (altura * altura);
                        printf("Seu IMC: %.2f\n", imc);
                        
                        if(imc < 18.5){
                            printf("Voce esta magro(a), recomendo que ganhe algum peso.\n");
                        }
                        else if(imc >= 18.5 && imc <= 24.9){
                            printf("Voce esta saudavel, continue assim.\n");
                        }
                        else if(imc >= 25.0 && imc <= 29.9){
                            printf("Voce esta com sobrepeso, treine um pouco e estara tudo ok.\n");
                        }
                        else if(imc >= 30 && imc <= 39.9){
                            printf("Voce sofre de obesidade, um treino acompanhado de uma dieta faria muito bem.\n");
                        }
                        else if(imc >= 40.0){
                            printf("Obesidade Grave, procure ajuda medica urgentemente.\n");
                        }
                        break; 
                    } else {
                        printf("Informacoes invalidas, tente novamente.\n\n");
                    }
                } while(1);
                break; 
            }
            
            case 2: { 
                float salario, salario2;
                int dia;
                float hora;
                
                printf("qual e seu salario em hora?: ");
                scanf("%f", &salario);
                printf("sua diaria (horas por dia): ");
                scanf("%f", &hora);
                printf("seus dias trabalhados ao mes: ");
                scanf("%d", &dia);
                
                salario2 = salario * hora * dia;
                printf("seu salario do periodo: %.2f\n", salario2);
                printf("voce recebera isto em 12 meses: %.2f\n", salario2*12);
                break; 
            }
            
            case 3: { 
                float nota1, nota2, soma, media, dobroMedia;
                int numNotas = 2; 
                
                printf("Digite a primeira nota: ");
                scanf("%f", &nota1); 
                printf("Digite a segunda nota: ");
                scanf("%f", &nota2); 
                
                soma = nota1 + nota2; 
                media = soma / numNotas; 
                dobroMedia = media * 2; 
                
                printf("\n--- Resultado ---\n");
                printf("Soma das notas: %.2f\n", soma); 
                printf("Média: %.2f\n", media); 
                printf("Dobro da média: %.2f\n", dobroMedia); 
                
                if (media >= 7.0) { 
                    printf("Aprovado!\n");
                } else if (media >= 4.0 && media < 7.0) { 
                    printf("Recuperação.\n");
                } else { 
                    printf("Reprovado.\n");
                }
                break;
            }
            
            case 4: { 
                int opcao;
                int n;  
                int escolha2;
                float raio, area, perimetro;
                float base, altura, area2, perimetro2;
                int segundos, horas, minutos;
                
                do {
                    printf("\n--- Modulo Utilidades ---\n");
                    printf("1 - Verificar se um numero e par ou impar\n");
                    printf("2 - Verificar se um numero esta no intervalo [10, 50]\n");
                    printf("3 - Calcular area e perimetro (circulo/retangulo)\n");
                    printf("4 - Converter segundos em horas e minutos\n");
                    printf("0 - Voltar ao menu\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcao);

                    if (opcao == 1) {
                        printf("Digite um numero: ");
                        scanf("%d", &n);
                        if (n % 2 == 0)
                            printf("%d e par.\n", n);
                        else
                            printf("%d e impar.\n", n);
                    } 
                    else if (opcao == 2) {
                        printf("Digite um numero: ");
                        scanf("%d", &n);
                        if (n >= 10 && n <= 50)
                            printf("%d esta dentro do intervalo [10, 50].\n", n);
                        else
                            printf("%d NAO esta dentro do intervalo [10, 50].\n", n);
                    } 
                    else if (opcao == 3) {
                        printf("Escolha a figura:\n1 - Circulo\n2 - Retangulo\n");
                        scanf("%d", &escolha2);

                        if (escolha2 == 1) {
                            printf("Digite o raio do circulo: ");
                            scanf("%f", &raio);
                            area = 3.14 * raio * raio;
                            perimetro = 2 * 3.14 * raio;
                            printf("Area = %.2f\n", area);
                            printf("Perimetro = %.2f\n", perimetro);
                        } else if (escolha2 == 2) {
                            printf("Digite a base do retangulo: ");
                            scanf("%f", &base);
                            printf("Digite a altura do retangulo: ");
                            scanf("%f", &altura);
                            area2 = base * altura;
                            perimetro2 = 2 * (base + altura);
                            printf("Area = %.2f\n", area2);
                            printf("Perimetro = %.2f\n", perimetro2);
                        } else {
                            printf("Opcao invalida!\n");
                        }
                    } 
                    else if (opcao == 4) {
                        printf("Digite a quantidade de segundos: ");
                        scanf("%d", &segundos);
                        horas = segundos / 3600;
                        minutos = (segundos % 3600) / 60;
                        segundos = segundos % 60;
                        printf("Tempo: %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);
                    } 
                    else if (opcao == 0) {
                        break; 
                    } 
                    else {
                        printf("Opcao invalida!\n");
                    }
                } while (1);
                break; 
            }
            
            case 0:
                printf("Saindo...\n");
                break;
                
            default:
                printf("Opcao invalida, tente novamente.\n");
        }

    } while(escolha != 0);

    return 0;
}
