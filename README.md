# Practice-DataStructureClass

<details>
<summary><h2>A - Problema vector</h2></summary>

Dado n números (notas entre 0 y 100), calcula el promedio y mostrar en la primera línea dicho promedio entero. En la segunda línea, imprimir todas las notas menores al promedio.

**Entrada:**

- Un entero 1 ≤ n ≤ 106, seguido de n enteros (las notas).

**Salida:**

- Línea 1: El promedio (con decimales).
- Línea 2: Las notas estrictamente menores al promedio

```Entrada:
5
60 70 90 80 100
```

```Salida:
80
60 70
```

</details>
<details>
<summary><h2>B - Problema deque</h2></summary>

Estás procesando una cola de atencion en una oficina. Llegan personas con prioridad normal o urgente. Las personas normales se agregan al final de la fila, mientras que las personas urgentes se agregan al inicio.

**Entrada:**

- Un entero n (1 ≤ n ≤ 106), el numero de operaciones.
- n operaciones, donde cada una es:
  - normal x: agregar la persona con ID x al final de la fila. (1 ≤ x ≤ 106)
  - urgente x: agregar la persona con ID x al inicio de la fila. (1 ≤ x ≤ 106)

**Salida:**

- Imprimir los IDs de las personas en el orden en que seran atendidas, desde la primera en ser atendida hasta la ultima.

```Entrada:
5
normal 1
urgente 2
urgente 3
normal 4
urgente 5
```

```Salida:
5 3 2 1 4
```

</details>
<details>   
<summary><h2>C - Problema Stack</h2></summary>

Dada una secuencia de paréntesis, verifica si es válida. Una secuencia es válida si:

- Cada paréntesis que abre tiene uno que cierra.
- Los paréntesis están bien anidados.

**Entrada:**

- Una cadena s de longitud n (1 ≤ n ≤ 106) compuesta solo por los caracteres ’(’ y ’)’.

**Salida:**

- Imprime "Es valida" si la secuencia es v´alida, o "No es valida" en caso contrario.

```Entrada:
(()())
```

```Salida:
Es válida
```

```Entrada:
(()()
```

```Salida:
Es inválida
```

</details>
<details>
<summary><h2>D - Problema Set</h2></summary>

Dada una secuencia de n números enteros, imprime ”SI” si el número es la primera vez que aparece, o ”NO” si ya apareció antes.

**Entrada:**

- Un entero n (1 ≤ n ≤ 106).
- Una secuencia de n enteros a1, a2, . . . , an con 1 ≤ ai ≤ 109

**Salida:**

- Por cada número de la secuencia, imprime SI si es la primera vez que aparece, o NO si ya apareció antes.

```Entrada:
6
5 1 2 1 2 3
```

```Salida:
SI
SI
SI
NO
NO
SI
```

</details>
<details>
<summary><h2>E - Problema map</h2></summary>

Estás procesando un texto y necesitas contar cuántas veces aparece cada palabra.

**Entrada:**

- Un entero n (1 ≤ n ≤ 105), el n´umero de palabras.
- Luego n palabras, compuestas solo de letras min´usculas, sin espacios.

**Salida:**

- Para cada palabra distinta que aparece, imprimir una línea con la palabra seguida del número de veces que apareció.
- Las palabras deben imprimirse en orden alfab´etico.

```Entrada:
7
apple banana apple orange banana apple grape
```

```Salida:
apple 3
banana 2
grape 1
orange 1
```

</details>
<details>
<summary><h2>multi - Problema MultiSet</h2></summary>

Estás desarrollando un sistema de control de precios para una tienda. Cada vez que un producto se vende o se agrega nuevo stock, se actualiza el precio más bajo disponible.

**Entrada:**

- Un entero q (1 ≤ q ≤ 105), el número de operaciones.
- Luego q operaciones de dos tipos:
  - add x — se agrega un producto con precio x (1 ≤ x ≤ 109).
  - sell — se vende el producto con menor precio.

**Salida:**

- Por cada operación sell, imprimir el precio del producto vendido.

```Entrada:
7
add 10
add 5
add 10
sell
sell
add 3
sell
```

```Salida:
5
10
3
```

</details>
