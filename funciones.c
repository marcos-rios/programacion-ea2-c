/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//* CUALQUIER INCLUDE DE BIBLIOTECA QUE NECESITE, HÁGALO ACÁ   *//**//**/


/**//**//* CUALQUIER INCLUDE DE BIBLIOTECA QUE NECESITE, HÁGALO ACÁ   *//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
#include "funciones.h"
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//* ACÁ DEBE DESARROLLAR LAS FUNCIONES Y PRIMITIVAS PEDIDAS    *//**//**/
/**//**//* ADEMÁS DE CUALQUIER OTRA FUNCIÓN QUE SE REQUIERA           *//**//**/
void mostrarMovimTxt(const tMovi *d, FILE *fp);


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* FUNCIONES Y PRIMITIVAS A DESARROLLAR                               *//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* para la información                                                *//**/

void mostrarMovim_MIO(const void *d, FILE *fp)
{
    mostrarMovimTxt(d, fp);
}

void mostrarMovimTxt(const tMovi *d, FILE *fp)
{
    if(d)
        fprintf(fp,
                "%-*s %*.02f\n",
                (int)sizeof(d->ctaCte), d->ctaCte,
                (int)sizeof(d->saldo), d->saldo);
    else
        fprintf(fp,
                "%-*s %*s\n",
                (int)sizeof(d->ctaCte), "Nro Cuenta Banc",
                (int)sizeof(d->saldo), "Importe");
}

/**
int compararMovim_MIO(const void *d1, const void *d2)
{

}
 **/
/**
int esCtaCte002_MIO(const void *d)
{

}
 **/
/**
int acumularMoviSaldo_MIO(void **dest, unsigned *tamDest,
                      const void *ori, unsigned tamOri)
{

}
 **/
/**
void mostrarTotal_MIO(const void *d, FILE *fp)
{

}
 **/

/**//* para el TDA LISTA                                                  *//**/
int mostrarLista_MIO(const tLista *p,
                     void (*mostrar)(const void *, FILE *),
                     FILE *fp)
{
    int cant = 0;
    mostrar(NULL, fp);
    while(*p)
    {
        mostrar((*p)->info, fp);
        p = &(*p)->sig;
        cant++;
    }
    return cant;
}

/**
void ordenarLista_MIO(tLista *p, int (*comparar)(const void *, const void *))
{

}
 **/
/**
int eliminarMostrarYMostrarSubTot_MIO(tLista *p, FILE *fpPant,
                                      int comparar(const void *, const void *),
                                      int comparar2(const void *d),
                                      int acumular(void **, unsigned *,
                                                   const void *, unsigned),
                                      void mostrar(const void *, FILE *),
                                      void mostrar2(const void *, FILE *))
{

}
 **/
/**
int  vaciarListaYMostrar_MIO(tLista *p,
                             void (*mostrar)(const void *, FILE *), FILE *fp)
{

}
 **/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

