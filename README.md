# IPOO
 👩‍💻Repository for my introduction to object-oriented programming class.  

#Tareas Pendientes:
- [ ] Terminar ejercicios de Ingini
- [x] Contar los números pares que existen entre un rango de valores

9/11/2020

## Estructuras de repetitivas.
    * While
    * Do-While
    * For

Se **repite** una instrucción hasta que se evalúa como **falsa**,
entonces se continúa con el algoritmo.

### While
->Evalúa la expresión de control al principio del ciclo,
y de nuevo al inicio de cada iteración.

Ej:

``` C++
while (expresión de control){ // X <= 10

    ...
    Bloque de instrucciones si se cumple la condición
    (Siempre debe existir una instrucción en el cuerpo de while,
    que se haga falsa, de lo contrario se ejecutará "infinitamente")
    ....

}
```

![While Example](https://i.imgur.com/fhTxSx7.png)

...
Bloque de instrucciones
restante del algoritmo
...

### Do-While
->Es simple si se conoce while.

``` C++
do{
    ...
    Bloque de Instrucciones si se cumple la condición...
    ...
}while(expresión de control); //X<=10
...
Bloque de Instrucciones
restante del algoritmo
...
```

![Do-While Example](https://i.imgur.com/Ud34gUh.png)

¿Cuando usamos Do-While? **Investigar**

### For

Ej:

``` C++
for(inicialización; condicion; incremento){
    ...
    Bloque de instrucciónes si se cumple la condición
    ...
}
...
Bloque de Instrucciones
restante Del algoritmo
...
```
![for example](https://i.imgur.com/x5bcAl9.png)

La expresión de **inicialización** se ejecutara al principio del ciclo.

La expresión de **condición** se ejecutara al principio de cada iteración. Necesita ser true para que se ejecute.

Las expresiónes de **incremento** se ejecuta al finalizar cada iteración.

## Ejercicios

[Factorial](https://github.com/Ingrid-E/IPOO/tree/master/Factorial)

[Pairs](https://github.com/Ingrid-E/IPOO/tree/master/Pairs)
