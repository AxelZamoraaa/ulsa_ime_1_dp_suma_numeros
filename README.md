# Práctica 1: Suma de 5 números
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

El programa sirve para poder hacer sumas de hasta cinco numeros, y esto me serviria para que al momento de querer hacer alguna operacion y asi pueda hacerse de forma mas facil y rápida
## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. -5,-4,-3,-2,-1,0,1,2,3,4,5  estos son los numeros que se van a usar y el objetivo es que se puedan sumar

**Salidas:**
1. la suma total de los 5 numeros =15

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- que el numero sea entero
- que el numero sea menor o igual que 5

**Decisión sobre negativos y decimales** (¿los acepto? ¿por qué?):
Si se haceptan tanto decimales como negativos porque se estan definiendo en el codigo y la suma funciona igual para los negativos y decimales

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
que siempre va a dar un resultado de la suma, que se vana a usar numeros menores o iguales a 5

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Suma calculada a mano |
|---|---|---|
| 1 | 1,2,3,4,5 | 15 |
| 2 | 0,0,0,0,0 | 0 |
| 3 | -2,4,-2,3,1 | 4 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** si
**¿Tuve que corregirla?** si, al principio no funcionaba bien, y olvide definir desde 0 

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

ingresa 5 numeros: 1 2 3 4 5
la suma es: 15

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué pasó al no inicializar `suma`?**
si no se pone el =0 el resultado sale mal  porque la parte de la memoria de este, ya tenia datos desde antes y por eso no funciona

**Experimento B (opcional): ¿qué pasó al usar `int` con 2.5?**
se corta el codigo, y queda usando solo el 2 y ya la parte decimal se queda sin usar

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Del 1 al 5 | 1 a 5 | 15 | 15 | si |
| Todos ceros | 0 ×5 | 0 | 0 | si |
| Con negativos | del -1 al -5 | -15 | -15 | si |
| Decimales | 0.5 ×5 | 2.5 | rechazo los numeros | no |
| Todos iguales | 7 ×5 | 35 | 35 | si (solo si los puse como "7" 5 veces) |
| Caso propio 1 | 2,2,5,1,2 | 12 | 12 | si |
| Caso propio 2 | -4,-5,8,10,1 | 10 | 10 | si |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
que al  no acepta decimales, y que no acepta multiplicaciónes, cambie despues para que si aceptara decimales y si funcionó

**Reto elegido (opcional):** 

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
no podia hacer que aceptara decimales, busque videos en youtube

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
A armar el pseudocodigo y apartir de ahi hacer el codigo en c++

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Poder a hacer mas rapido el pseudocodigo y dejar de buscar en internet el que poner en el codigo

**¿Qué fue lo más difícil y cómo lo resolví?**
saber que poner en cada linea de codigo, lo resolvi buscando en internet

**¿Qué pregunta me quedó sin responder?**
cuando se usan los bool

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom