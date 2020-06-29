/**//* 35.588.676-RIOS,MarcosAdrian-(01-2964) *//**/


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//* CUALQUIER INCLUDE DE BIBLIOTECA QUE NECESITE, HÁGALO ACÁ   *//**//**/
#include <string.h>
#include <stdlib.h>

/**//**//* CUALQUIER INCLUDE DE BIBLIOTECA QUE NECESITE, HÁGALO ACÁ   *//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
#include "funciones.h"
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//* ACÁ DEBE DESARROLLAR LAS FUNCIONES Y PRIMITIVAS PEDIDAS    *//**//**/
/**//**//* ADEMÁS DE CUALQUIER OTRA FUNCIÓN QUE SE REQUIERA           *//**//**/


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* FUNCIONES Y PRIMITIVAS A DESARROLLAR                               *//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* para la información                                                *//**/

void mostrarMovim_MIO(const void *d, FILE *fp)
{
    const tMovi *mov = d;
    if(mov)
        fprintf(fp,
                "%-*s %*.02f\n",
                (int)sizeof(mov->ctaCte), mov->ctaCte,
                (int)sizeof(mov->saldo), mov->saldo);
    else
        fprintf(fp,
                "%-*s %*s\n",
                (int)sizeof(mov->ctaCte), "Nro Cuenta Banc",
                (int)sizeof(mov->saldo), "Importe");
}

int compararMovim_MIO(const void *d1, const void *d2)
{
    return strcmp(((tMovi *)d1)->ctaCte, ((tMovi *)d2)->ctaCte);
}


//int esCtaCte002_MIO(const void *d)
//{
//    return 1;
//}
//
//
//int acumularMoviSaldo_MIO(void **dest, unsigned *tamDest,
//                      const void *ori, unsigned tamOri)
//{
//
//}
//
//
//void mostrarTotal_MIO(const void *d, FILE *fp)
//{
//
//}


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

// tLista *p = direccion de un puntero a nodo
void ordenarLista_MIO(tLista *p, int (*comparar)(const void *, const void *))
{
    if(*p == NULL)
        return;

    tLista *inicio = p;
    int primero = 1;
    while((*p)->sig)
    {
        tNodo *q = *p;
        tNodo *minAct = q;
        tNodo *preMin = NULL;
        while(q->sig)
        {
            printf("Q actual: %s\n", ((tMovi *)q->info)->ctaCte);
            if(comparar(q->sig->info, minAct->info) < 0)
            {
                preMin = q;
                minAct = q->sig;
                if(primero)
                {
                    inicio = &(q->sig);
                    primero = 0;
                }
            }
            q = q->sig;
        }
        puts("\n");
        if(preMin)
        {
            preMin->sig = minAct->sig;
            minAct->sig = *p;
        }
        p = &(*p)->sig;
    }
    *p = *inicio;
}


//int eliminarMostrarYMostrarSubTot_MIO(tLista *p, FILE *fpPant,
//                                      int comparar(const void *, const void *),
//                                      int comparar2(const void *d),
//                                      int acumular(void **, unsigned *,
//                                                   const void *, unsigned),
//                                      void mostrar(const void *, FILE *),
//                                      void mostrar2(const void *, FILE *))
//{
//
//}
//
int  vaciarListaYMostrar_MIO(tLista *p,
                             void (*mostrar)(const void *, FILE *), FILE *fp)
{
    int cant = 0;
    while(*p)
    {
        tNodo *aux = *p;
        cant++;
        *p = aux->sig;
        if(mostrar && fp)
        {
            mostrar(aux->info, fp);
        }
        free(aux->info);
        free(aux);
    }
    return cant;
}
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

