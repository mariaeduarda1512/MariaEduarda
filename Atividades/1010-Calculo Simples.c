  int codigo1;
    int numero_pecas1;
    double valor_peca1;
    
    int codigo2;
    int numero_pecas2;
    double valor_peca2;
    double resposta;
    
    scanf("%d %d %lf" ,&codigo1,&numero_pecas1,&valor_peca1);
    scanf("%d %d %lf" ,&codigo2,&numero_pecas2,&valor_peca2);
    resposta = (numero_pecas1*valor_peca1)+(numero_pecas2*valor_peca2);
    printf("VALOR A PAGAR: R$ %.2lf\n", resposta);
 
    return 0;
}