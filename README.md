# Alg_Ordenacion

Este repositorio contiene la implementación de los 5 algoritmos de ordenación más comunes en el ámbito de la informática. Estos algoritmos se utilizan para ordenar una lista de 100 mil números aleatorios.

Los algoritmos implementados son los siguientes:

1. **Ordenación de la burbuja**: Este algoritmo compara repetidamente pares adyacentes de elementos y los intercambia si están en el orden incorrecto. Aunque es sencillo, su tiempo de ejecución es relativamente alto en comparación con otros algoritmos más eficientes.

2. **Ordenación por selección**: En este algoritmo, se busca repetidamente el elemento más pequeño de la lista y se coloca en la posición correcta. A medida que avanza, se va construyendo la lista ordenada. Aunque también es sencillo, su rendimiento es mejor que el de la burbuja.

3. **Ordenación por inserción**: La ordenación por inserción funciona construyendo una lista ordenada a medida que se recorre la lista original. En cada iteración, se toma un elemento y se inserta en su posición correcta dentro de la lista ordenada. Es eficiente para listas pequeñas o casi ordenadas.

4. **Ordenación por mezcla (merge_sort)**: Este algoritmo utiliza el enfoque de "divide y conquista". Divide la lista en dos mitades, las ordena por separado y luego las combina para obtener la lista ordenada final. Es conocido por su tiempo de ejecución eficiente y es ampliamente utilizado en la práctica.

5. **Ordenación rápida (quick_sort)**: Otro algoritmo basado en "divide y conquista" que utiliza la técnica de partición para ordenar la lista. Divide la lista en subconjuntos más pequeños, los ordena de forma independiente y luego los combina para obtener la lista ordenada final. Es uno de los algoritmos más rápidos en la mayoría de los casos, especialmente para conjuntos de datos grandes.

Los tiempos de ejecución de estos algoritmos varían significativamente. Por ejemplo, la ordenación de la burbuja puede tomar alrededor de 25 segundos para ordenar la lista de 100 mil números aleatorios, mientras que la ordenación rápida puede hacerlo en menos de 1 segundo. 

¡Explora este repositorio para aprender y comparar los diferentes algoritmos de ordenación implementados y descubre cuál es el más adecuado para tus necesidades!
