#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct
{
    int id; /// campo �nico y autoincremental
    int nroCliente;
    char nombre[30];
    char apellido[30];
    char dni[10];
    char email[30];
    //stDomicilio domicilio;
    char telefono[12];
    int eliminado; /// 0 si est� activo - 1 si est� eliminado
} stCliente;

stCliente cargaUnCliente ();
void muestraUnCliente (stCliente c);
int cargaClientes (stCliente c[], int v, int dim);
void muestraClientes(stCliente c[], int v);
void cargaArchClienteRandom(char nombreArchivo[], int cant);
void muestraArchivoCliente(char nombreArchivo[]);
stCliente getClienteRandom();


#endif // CLIENTE_H_INCLUDED
