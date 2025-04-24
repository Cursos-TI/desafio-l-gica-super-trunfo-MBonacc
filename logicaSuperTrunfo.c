#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Variáveis Cidade 1

    // variáveis de texto
    char estadoc1;
    char codigoc1[4];
    char cidade1[30];

    // integers são apenas números inteiros. ocupam menos espaço.
    int populacaoc1;
    int pontostc1;

    // float armazena números decimais, com precisão menor que as de um double. ocupa mais espaço.

    float areac1;
    float pibc1;
    float reservac1;
    float pibPerCapitaC1;
    float densidadePopC1;
    float superpoderc1;

    // Variáveis Cidade 2

    char estadoc2;
    char codigoc2[10];
    char cidade2[30];

    int populacaoc2;
    int pontostc2;

    float areac2;
    float pibc2;
    float pibPerCapitaC2;
    float reservac2;
    float densidadePopC2;
    float superpoderc2;

    // MENU DE ESCOLHA
    srand (time(0));
    int ataque1, ataque2, resultado1, resultado2;
    float forca1, forca2;

    // Inserir dados da Carta 1

    /*    Utiliza a função scanf para registrar o nome da primeira cidade na Var cidade1
    strings não necessitam de & na frente    */
    printf ("Insira o nome de uma Cidade (Apenas uma palavra)\n");
    scanf ("%s", cidade1);
    
    // Utiliza a função scanf para registrar a letra que represente o estado na variável estadoc1
    printf ("Insira o Estado (Apenas uma letra): \n");
    scanf (" %c", &estadoc1);

    /*    Utiliza a função scanf para registrar a letra que represente o estado na variável codigoc1
    strings não necessitam de & na frente     */
    printf ("Insira um código para a carta, utilizando a letra do Estado( %c) e dois números (Ex: A01)\n", estadoc1);
    scanf ("%s", codigoc1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável populacaoc1
    printf ("Insira a população total da cidade (Apenas o número)\n");
    scanf ("%d", &populacaoc1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável areac1
    printf ("Insira a área total da cidade (Apenas o número)\n");
    scanf ("%f", &areac1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável pibc1
    printf ("Insira o PIB Total da cidade: (Apenas o número em bilhões, ex: 22.32 bilhões)\n");
    scanf ("%f", &pibc1);

    // Utiliza a função scanf para registrar a letra que represente o estado na variável pontostc1
    printf ("Por último, insira o número de pontos turísticos (Apenas o número)\n");
    scanf ("%d", &pontostc1);

    // Faz o calculo da Densidade Populacional da Carta 1

    densidadePopC1 = (float) populacaoc1 / areac1; 

    // Faz o calculo do PIB per Capita
    
    reservac1 = pibc1 * 1000000000;
    pibPerCapitaC1 = (float) reservac1 / populacaoc1;

    // Faz o calculo do super poder

    superpoderc1 = (float) populacaoc1 + areac1 + pibc1 + pibPerCapitaC1 + pontostc1 - densidadePopC1;

    // Inserir dados da Carta 2

    /*     para evitar cluttering, todas as informações acima de aplicam a carta 2, apenas modificando 
    a variável para a versão correspondente da carta 2    */

    // nome da cidade
    printf ("Insira o nome de outra cidade, diferente da anterior: \n");
    scanf ("%s", cidade2);
    
    // inicial do estado
    printf ("Insira o Estado: \n");
    scanf (" %c", &estadoc2);

    // código da carta
    printf ("Insira o código da carta, diferente da anterior:\n");
    scanf ("%s", codigoc2);

    // nro da população
    printf ("Insira a população total da cidade (Apenas o número)\n");
    scanf ("%d", &populacaoc2);

    // area total da cidade
    printf ("Insira a área total da cidade (Apenas o número)\n");
    scanf ("%f", &areac2);

    // pib da cidade
    printf ("Insira o PIB Total da cidade: (Apenas o número em bilhões, ex: 22.15 bilhões)\n");
    scanf ("%f", &pibc2);

    // pontos turisticos da cidade
    printf ("Por último, insira o número de pontos turísticos (Apenas o número)\n");
    scanf ("%d", &pontostc2);

    // Faz o calculo da Densidade Populacional da Carta 1

    densidadePopC2 = (float) populacaoc2 / areac2; 

    // Faz o calculo do PIB per Capita

    reservac2 = pibc2 * 1000000000;
    pibPerCapitaC2 = (float) reservac2 / populacaoc2;

    superpoderc2 = (float) populacaoc2 + areac2 + pibc2 + pibPerCapitaC2 + pontostc2 - densidadePopC2;

    // Cria o menu para que PAX possa inserir qual vai ser o atributo a ser comparado

    printf ("Hora do Resultado!\n\n\n Digite: \n 1. População \n 2. Area \n 3. Densidade \n 4. PIB \n 5. PIB per Capita \n 6. Pontos turistico \n 7. Super Poder \n\n");
    scanf ("%d", &ataque1);  //primeiro parametro

    if (ataque1 > 7 || ataque1 < 1) //Caso o usuário insira um número que não seja entre 1 e 7, vai pedir para reinserir
    {
        printf ("Número inválido, insira um dos números do menu.\n");
        scanf ("%d", &ataque1);
        if (ataque1 > 7 || ataque1 < 1){ //caso o usuário insista, vai assignar um número aleatório entre 1 e 7
            printf ("Número inválido, vamos escolher aleatoriamente um parametro de comparação.\n");
            ataque1 = rand () % 7 + 1;
            printf ("Escolhido foi: %d\n", ataque1);
        }
    }
    
    printf ("Digite uma segunda caracteristica a ser comparada:\n");
    scanf ("%d", &ataque2); //segundo parametro

    if (ataque2 > 7 || ataque2 < 1) //Caso o usuário insira um número que não seja entre 1 e 7, vai pedir para reinserir
    {
        printf ("Número inválido, insira um dos números do menu.\n");
        scanf ("%d", &ataque1);

        if (ataque2 > 7 || ataque2 < 1){ //caso o usuário insista, vai escolher outro parametro que seja diferente do primeiro
            printf ("Número inválido, vamos escolher um parametro de comparação por você.\n");
            if (ataque1 < 7)
            {
                ataque2 = ataque1++;
            }else if (ataque1 == 7){
                ataque2 = ataque1--;
            }
        }
    }

    // permite que o usuário escolha novamente caso tenha selecionado a mesma opção no menu duas vezes
    if (ataque1 == ataque2){
        printf ("Você escolheu a mesma opção duas vezes, escolha outra opção\n");
        scanf ("%d", &ataque2);
    }

    // caso o usuário insista em escolher a mesma opção, escolhe outra automaticamente
    if (ataque1 == ataque2 && ataque1 < 7){
        printf ("Você escolheu a mesma opção duas vezes, vamos escolher outra opção automaticamente.\n");
        ataque2++;
    } else if (ataque1 == ataque2 && ataque1 ==7){
        printf ("Você escolheu a mesma opção duas vezes, vamos escolher outra opção automaticamente.\n");
        ataque2--;
    }

    // Com a variável ataque reservada, vai comparar as duas cartas.
    switch (ataque1){

    case 1: //* POPULAÇÃO */
            // Vai imprimir na tela os dados das duas cartas
        printf ("\n\nVocês escolheram: POPULAÇÃO\n\n");
        printf ("%s - %s:\nPopulação: %d\n", cidade1, codigoc1, populacaoc1);
        printf ("%s - %s:\nPopulação: %d\n\n", cidade2, codigoc2, populacaoc2);

        forca1 = populacaoc1;
        forca2 = populacaoc2;

        if (populacaoc1 > populacaoc2) {
            printf ("População: Carta 1 Vence\n\n");
            resultado1++;
        } else if (populacaoc2 > populacaoc1){
            printf ("População: Carta 2 Vence\n\n");
            resultado2++;
        } else{
            printf ("População: Empate!\n\n");
            resultado1++;
            resultado2++;
        }
        break; // Encerra o case

    case 2: // * AREA *

        printf ("\n\nVocês escolheram: ÁREA\n");
        printf ("%s - %s:\n População: %.2f\n", cidade1, codigoc1, areac1);
        printf ("%s - %s:\n População: %.2f\n\n", cidade2, codigoc2, areac2);

        forca1 = areac1;
        forca2 = areac2;

        if (areac1 > areac2) {
            printf ("Área: Carta 1 Vence\n\n");
            resultado1++;
        } else if (areac2 > areac1){
            printf ("Área: Carta 2 Vence\n\n");
            resultado2++;
        } else{
            printf ("Área: Empate!\n\n");
            resultado1++;
            resultado2++;
        }

        break;

    case 3: // * DENSIDADE *

            printf ("\n\nVocês escolheram: DENSIDADE POPULACIONAL\n");
            printf ("%s - %s:\nDensidade Populacional: %.2f\n", cidade1, codigoc1, densidadePopC1);
            printf ("%s - %s:\nDensidade Populacional: %.2f\n\n", cidade2, codigoc2, densidadePopC2);

            forca1 = densidadePopC1;
            forca2 = densidadePopC2;
    
            if (densidadePopC1 < densidadePopC2) {
                printf ("Densidade: Carta 1 Vence\n\n");
                resultado1++;
            } else if (densidadePopC2 < densidadePopC1){
                printf ("Densidade: Carta 2 Vence\n\n");
                resultado2++;
            } else{
                printf ("Densidade: Empate!\n\n");
                resultado1++;
                resultado2++;
            }
        break;

    case 4: // * PIB *

            printf ("\n\nVocês escolheram: PIB\n");
            printf ("%s - %s:\nPIB: %.2f\n", cidade1, codigoc1, pibc1);
            printf ("%s - %s:\nPIB: %.2f\n\n", cidade2, codigoc2, pibc2);

            forca1 = pibc1;
            forca2 = pibc2;
    
            if (pibc1 > pibc2) {
                printf ("PIB: Carta 1 Vence\n\n");
                resultado1++;
            } else if (pibc2 > pibc1){
                printf ("PIB: Carta 2 Vence\n\n");
                resultado2++;
            } else{
                printf ("PIB: Empate!\n\n");
                resultado1++;
                resultado2++;
            }

        break;

    case 5: // * PIB PER CAPITA *

        printf ("\n\nVocês escolheram: PIB per Capita\n");
        printf ("%s - %s:\nPIB per Capita: %.2f\n\n", cidade1, codigoc1, pibPerCapitaC1);
        printf ("%s - %s:\nPIB per Capita: %.2f\n\n", cidade2, codigoc2, pibPerCapitaC2);

        forca1 = pibPerCapitaC1;
        forca2 = pibPerCapitaC2;

        if (pibPerCapitaC1 > pibPerCapitaC2) {
            printf ("PIB per Capita: Carta 1 Vence\n\n");
            resultado1++;
        } else if (pibPerCapitaC2 > pibPerCapitaC1){
            printf ("PIB per Capita: Carta 2 Vence\n\n");
            resultado2++;
        } else{
            printf ("PIB per Capita: Empate!\n\n");
            resultado1++;
            resultado2++;
        }

        break;

    case 6: // * PONTOS TURISTICOS *

        printf ("\n\nVocês escolheram: Pontos Turisticos\n");
        printf ("%s - %s:\nPontos Turisticos: %d\n", cidade1, codigoc1, pontostc1);
        printf ("%s - %s:\nPontos Turisticos: %d\n\n", cidade2, codigoc2, pontostc2);

        forca1 = pontostc1;
        forca2 = pontostc2;

        if (pontostc1 > pontostc2) {
            printf ("Pontos Turísticos: Carta 1 Vence\n\n");
            resultado1++;
        } else if (pontostc2 > pontostc1){
            printf ("Pontos Turísticos: Carta 2 Vence\n\n");
            resultado2++;
        } else{
            printf ("Pontos Turísticos: Empate!\n\n");
            resultado1++;
            resultado2++;
        }

        break;

    case 7: // * SUPER PODER *

        printf ("\n\nVocês escolheram: Super Poder\n");
        printf ("%s - %s:\nSuper Poder: %.1f\n", cidade1, codigoc1, superpoderc1);
        printf ("%s - %s:\nSuper Poder: %.1f\n\n", cidade2, codigoc2, superpoderc2);
        forca1 = pontostc1;
        forca2 = pontostc2;

        if (pontostc1 > pontostc2) {
            printf ("Super Poder: Carta 1 Vence\n\n");
            resultado1++;
        } else if (pontostc2 > pontostc1){
            printf ("Super Poder: Carta 2 Vence\n\n");
            resultado2++;
        } else{
            printf ("Super Poder: Empate!\n\n");
            resultado1++;
            resultado2++;
        }

        break;

    default: printf ("Opção inválida\n"); // Em teoria, isso nunca aconteceria, mas decidi deixar no código por via das duvidas
            }

        switch (ataque2){
    case 1: //* POPULAÇÃO */
        printf ("\n\nVocês escolheram: POPULAÇÃO\n\n");
        printf ("%s - %s:\nPopulação: %d\n", cidade1, codigoc1, populacaoc1);
        printf ("%s - %s:\nPopulação: %d\n\n", cidade2, codigoc2, populacaoc2);

        forca1 = forca1 + populacaoc1;
        forca2 = forca2 + populacaoc2;

        if (populacaoc1 > populacaoc2) {
            printf ("População: Carta 1 Vence\n\n");
            resultado1++;
        } else if (populacaoc2 > populacaoc1){
            printf ("População: Carta 2 Vence\n\n");
            resultado2++;
        } else{
            printf ("População: Empate!\n\n");
            resultado1++;
            resultado2++;
        }
        break; // Encerra o case

    case 2: // * AREA *

        printf ("\n\nVocês escolheram: ÁREA\n");
        printf ("%s - %s:\n População: %.2f\n", cidade1, codigoc1, areac1);
        printf ("%s - %s:\n População: %.2f\n\n", cidade2, codigoc2, areac2);

        forca1 = forca1 + areac1;
        forca2 = forca2 + areac2;

        if (areac1 > areac2) {
            printf ("Área: Carta 1 Vence\n\n");
            resultado1++;
        } else if (areac2 > areac1){
            printf ("Área: Carta 2 Vence\n\n");
            resultado2++;
        } else{
            printf ("Área: Empate!\n\n");
            resultado1++;
            resultado2++;
        }

        break;

    case 3: // * DENSIDADE *

            printf ("\n\nVocês escolheram: DENSIDADE POPULACIONAL\n");
            printf ("%s - %s:\nDensidade Populacional: %.2f\n", cidade1, codigoc1, densidadePopC1);
            printf ("%s - %s:\nDensidade Populacional: %.2f\n\n", cidade2, codigoc2, densidadePopC2);

            forca1 = forca1 + densidadePopC1;
            forca2 = forca2 + densidadePopC2;
    
            if (densidadePopC1 < densidadePopC2) {
                printf ("Densidade: Carta 1 Vence\n\n");
                resultado1++;
            } else if (densidadePopC2 < densidadePopC1){
                printf ("Densidade: Carta 2 Vence\n\n");
                resultado2++;
            } else{
                printf ("Densidade: Empate!\n\n");
                resultado1++;
                resultado2++;
            }
        break;

    case 4: // * PIB *

            printf ("\n\nVocês escolheram: PIB\n");
            printf ("%s - %s:\nPIB: %.2f\n", cidade1, codigoc1, pibc1);
            printf ("%s - %s:\nPIB: %.2f\n\n", cidade2, codigoc2, pibc2);

            forca1 = forca1+ pibc1;
            forca2 = forca2 + pibc2;
    
            if (pibc1 > pibc2) {
                printf ("PIB: Carta 1 Vence\n\n");
                resultado1++;
            } else if (pibc2 > pibc1){
                printf ("PIB: Carta 2 Vence\n\n");
                resultado2++;
            } else{
                printf ("PIB: Empate!\n\n");
                resultado1++;
                resultado2++;
            }

        break;

    case 5: // * PIB PER CAPITA *

        printf ("\n\nVocês escolheram: PIB per Capita\n");
        printf ("%s - %s:\nPIB per Capita: %.2f\n\n", cidade1, codigoc1, pibPerCapitaC1);
        printf ("%s - %s:\nPIB per Capita: %.2f\n\n", cidade2, codigoc2, pibPerCapitaC2);

        forca1 = forca1 + pibPerCapitaC1;
        forca2 = forca2 + pibPerCapitaC2;

        if (pibPerCapitaC1 > pibPerCapitaC2) {
            printf ("PIB per Capita: Carta 1 Vence\n\n");
            resultado1++;
        } else if (pibPerCapitaC2 > pibPerCapitaC1){
            printf ("PIB per Capita: Carta 2 Vence\n\n");
            resultado2++;
        } else{
            printf ("PIB per Capita: Empate!\n\n");
            resultado1++;
            resultado2++;
        }

        break;

    case 6: // * PONTOS TURISTICOS *

        printf ("\n\nVocês escolheram: Pontos Turisticos\n");
        printf ("%s - %s:\nPontos Turisticos: %d\n", cidade1, codigoc1, pontostc1);
        printf ("%s - %s:\nPontos Turisticos: %d\n\n", cidade2, codigoc2, pontostc2);

        forca1 = forca1 + pontostc1;
        forca2 = forca2 + pontostc2;

        if (pontostc1 > pontostc2) {
            printf ("Pontos Turísticos: Carta 1 Vence\n\n");
            resultado1++;
        } else if (pontostc2 > pontostc1){
            printf ("Pontos Turísticos: Carta 2 Vence\n\n");
            resultado2++;
        } else{
            printf ("Pontos Turísticos: Empate!\n\n");
            resultado1++;
            resultado2++;
        }

        break;

    case 7: // * SUPER PODER *

        printf ("\n\nVocês escolheram: Super Poder\n");
        printf ("%s - %s:\nSuper Poder: %.1f\n", cidade1, codigoc1, superpoderc1);
        printf ("%s - %s:\nSuper Poder: %.1f\n\n", cidade2, codigoc2, superpoderc2);
        forca1 = forca1 + pontostc1;
        forca2 = forca2 + pontostc2;

        if (pontostc1 > pontostc2) {
            printf ("Super Poder: Carta 1 Vence\n\n");
            resultado1++;
        } else if (pontostc2 > pontostc1){
            printf ("Super Poder: Carta 2 Vence\n\n");
            resultado2++;
        } else{
            printf ("Super Poder: Empate!\n\n");
            resultado1++;
            resultado2++;
        }

        break;
        
    default: printf ("Opção inválida\n"); // Em teoria, isso nunca aconteceria, mas decidi deixar no código por via das duvidas
            }

    // soma os dois atributos de cada carta
    printf ("Soma dos dois atributos da carta 1: %.2f\n\n", forca1);
    printf ("Soma dos dois atributos da carta 2: %.2f\n\n", forca2);      
    
    if (forca1 > forca2){
        printf ("A Soma dos atributos da carta 1 vence!\n\n");
        resultado1++;
    }
    else if (forca2 > forca1){
        printf ("A Soma dos atributos da carta 2 vence!\n\n");
        resultado2++;
    } else{
        printf ("A Soma dos resultados é igual!\n\n");
        resultado1++;
        resultado2++;
    }

    printf ("***RESULTADO FINAL***\n\n\n");

    if (resultado1 >= resultado2){
       resultado1 > resultado2 ? printf ("CARTA 2- %s (%s) É A GRANDE GANHADORA\n\n",cidade1,codigoc1) : printf ("EMPATE TOTAL ENTRE AS CARTAS! Vocês escolheram a mesma cidade?????\n\n");
    } else{
        printf ("CARTA 2 - %s (%s) É A GRANDE GANHADORA\n\n", cidade2, codigoc2);
    }
       
    return 0;
        }