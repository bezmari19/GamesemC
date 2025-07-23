// Primeiro programa em C de Quizzes

#include <stdio.h>

int main() {

// Mensagem de boas-vindas

printf("/*\n");
printf(" ______     __  __     __     ______     ______    \n");
printf("/\\  __ \\   /\\ \\/\\ \\   /\\ \\   /\\___  \\   /\\___  \\   \n");
printf("\\ \\ \\/\\_\\  \\ \\ \\_\\ \\  \\ \\ \\  \\/_/  /__  \\/_/  /__  \n");
printf(" \\ \\___\\_\\  \\ \\_____\\  \\ \\_\\   /\\_____\\   /\\_____\\ \n");
printf("  \\/___/_/   \\/_____/   \\/_/   \\/_____/   \\/_____/ \n");
printf("*/\n");

printf("****************************************\n");
printf("Seja bem-vindo ao Quiz de Atualidades!\n");
printf("Aqui você poderá testar seus conhecimentos sobre os principais acontecimentos do mundo.\n");
printf("****************************************\n");
printf("Este quiz foi desenvolvido por: Marina Ferraz\n");

// Menu do jogo:
printf("****************************************\n");
printf("Aqui é o menu do jogo!\n");
printf("****************************************\n");
printf("Escolha uma das opções abaixo:\n");
printf("[1] Iniciar o quiz!\n");
printf("[2] Regras\n");
printf("[3] Sair do jogo\n");

int opcao_de_jogo;
printf("Digite a opção que você deseja:\n");
scanf("%d", &opcao_de_jogo);

if (opcao_de_jogo == 1) {
    printf("Você escolheu a opção 1: Iniciar o quiz!\n");
    printf("*****************************************\n");
    printf("Prepare-se para responder as 20 perguntas!\n");
    printf("Você deseja continuar?(S para sim e N para não)\n");
    char continuar;
    scanf("%c", &continuar);
    if (continuar == "S" || continuar == "s") {
        printf("Ótimo! Vamos começar então.\n");
    } else if (continuar == "N" || continuar == "n") {
        printf("Tudo bem! Vamos voltar ao menu.\n");
    } else {
        printf("Opção inválida! Vamos voltar ao menu.\n");
    }

    printf("*****************************************\n");
    printf("O quizz será iniciado agora!\n");
    printf("Primeira pergunta:\n");

    printf("");
}

if (opcao_de_jogo == 2) {
    printf("**************************************************\n");
    printf("Regras do Quiz de Atualidades:\n");
    printf("1- O quizz consiste em perguntar de multipla escolha sobre atualidade mundiais.\n");
    printf("2- O jogador deve escolher a alternativa correta.\n");
    printf("3- Cada resposta correta vale 1 ponto. A cada certo, 1 ponto é adicionado a soma total.\n");
    printf("4- O jogo acaba após as 20 perguntas serem respondidas.\n");
    printf("5- Caso o jogador erre, é descontado um ponto da soma total de acertos.\n");
    printf("6 - O jogador não acumula acertos a cada partida jogada. É resetado a cada nova partida.\n");
    printf("7 - O jogador pode sair do jogo a qualquer momento. O jogo não será salvo.\n");
    printf("**************************************************\n");
}

if (opcao_de_jogo == 3) {
    printf("**************************************************\n");
    printf("Obrigado por jogar o Quiz de Atualidades!\n");
    printf("Esperamos que tenha se divertido e aprendido algo novo.\n");
    printf("Volte sempre para testar seus conhecimentos!\n");
    printf("**************************************************\n");
    return 0; // Sair do jogo



}