 #include <stdio.h>

int main()
    {
    int quant_dias, anos, meses, dias, an, me, di, soma;
    
    scanf("%d", &quant_dias);
    
    anos = 365;
    meses = 30;
    dias = 1;
    soma;
    an = quant_dias / 365;
    me = (quant_dias % 365 ) / 30;
    di = (quant_dias % 365) % 30;
        

    printf("%d ano(s)\n", an);
    printf("%d mes(es)\n", me);
    printf ("%d dia(s)\n", di);
    return 0;
}
