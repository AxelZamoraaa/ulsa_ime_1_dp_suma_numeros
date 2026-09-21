# Práctica: Suma de 5 números

## Sobre esta práctica

**Problema:** escribir un programa en C++ que pida al usuario 5 números, uno por uno, los vaya sumando y al final muestre el total.

**Lo que vas a practicar:** entrada-proceso-salida, variables y constantes, tipos de datos, secuencia, iteración con contador, y la restricción y la invariante de un algoritmo.

**Idea central:** tu meta no es solo que el programa funcione, sino que entiendas **por qué funciona** y **cómo lo construiste**. Por eso esta guía te hace preguntas antes de darte pistas. Responde cada pregunta por escrito en tu `README.md` antes de avanzar a la siguiente fase.

**Repositorio base:** https://github.com/narizwallace/ulsa_ime_1_dp_suma_numeros

**Entregable:** el enlace a tu repositorio, publicado en Google Classroom.

**El proceso que vas a seguir:**

| Fase | Qué haces |
|---|---|
| 0 | Preparar tu entorno (fork y clonar) |
| 1 | Entender el problema |
| 2 | Diseñar la solución como una receta detallada |
| 3 | Implementar |
| 4 | Probar y mejorar |
| 5 | Publicar en GitHub |

**Cómo usar el `README.md`:** ya viene en el repositorio base con espacios en blanco (`_____`). Lo vas llenando fase por fase, así no tienes que preguntarte qué va en él. Cada fase de esta guía te indica qué secciones llenar. No es necesario que uses el archivo README.md, también puedes copiar el contenido y hacerlo en un editor de texto de tu elección. Solo asegúrate de subir el archivo equivalente a tu repositorio.


## Fase 0. Preparar tu entorno

1. Entra al repositorio base: https://github.com/narizwallace/ulsa_ime_1_dp_suma_numeros
2. Haz clic en **Fork** (arriba a la derecha) para crear tu propia copia en tu cuenta de GitHub.
3. En tu fork, haz clic en **Code**, copia la URL y clónalo en tu computadora.

Estos son los comandos para clonar un repositorio desde tu terminal o línea de comando:
```bash
git clone <URL-de-tu-fork>
cd ulsa_ime_1_dp_suma_numeros
```
También puedes hacer el clone desde GitHub Desktop como lo hemos hecho antes.


4. Abre la carpeta en tu editor y revisa los tres archivos:

```
ulsa_ime_1_dp_suma_numeros/
├── README.md      ← plantilla con espacios en blanco para llenar
├── PRACTICA.md    ← este documento
├── RECETA.md      ← donde vas a escribir tu solución antes de implementarla
├── main.cpp       ← punto de partida de tu programa
└── .gitignore     ← evita subir el ejecutable
```

**Todo tu trabajo va dentro de esta carpeta.**

> **Nota técnica: ¿qué es un fork?**
> Es una copia completa del repositorio que queda bajo tu cuenta. Puedes modificarla libremente sin afectar el repositorio original.

---

## Fase 1. Entender el problema

*Aquí no se escribe código. Llena las secciones 1 a 4 de tu `README.md`.*

**Preguntas guía**

1. Explica el problema con tus palabras, en una o dos frases.
2. ¿Cuál es la entrada? ¿Cuántos datos entran en total?
3. ¿Cuál es la salida?
4. ¿Entiendes el problema? Compruébalo: explícaselo a un compañero en 1 minuto, sin mirar tus notas.
5. ¿Para qué sirve sumar un conjunto de datos? Da un ejemplo de la vida real (gastos, calificaciones, lecturas de un sensor...).

**Restricciones: ¿qué debe cumplirse?**

- ¿Cuántos números pide el programa? ¿Puede cambiar esa cantidad?
- ¿Aceptas números negativos? ¿Decimales? Decide y justifica tu decisión (no hay una única respuesta correcta).

**Resuelve a mano 3 casos** (por ejemplo: los números del 1 al 5, cinco ceros y una mezcla con negativos). Los usarás como pruebas más adelante.

> **Nota técnica: ¿qué obtenemos al definir entradas y salidas?**
> Obtenemos el *contrato* del programa: qué recibe, qué entrega y bajo qué condiciones. Con él sabes qué datos pedir, qué variables declarar y cómo comprobar que el resultado es correcto.

---

## Fase 2. Diseñar la receta

*Todavía sin código. Llena las secciones 3 y 5 de tu `README.md`.*

> **Nota técnica: ¿por qué entender el proceso antes de escribir el pseudocódigo y el código?**
> Porque el código solo traduce una solución que ya existe en tu cabeza. Si escribes sin entender, terminas corrigiendo errores de lógica con parches, y eso cuesta más tiempo que pensar antes.

**¿Qué preguntas te ayudan a definir el proceso?**

- ¿Cómo lo harías con lápiz y papel, número por número?
- ¿Qué necesito recordar mientras avanzo? (Pista: ¿qué llevas "en la cabeza" cuando sumas una lista?)
- ¿Con qué valor empieza ese acumulado antes del primer número?
- ¿Qué pasos se repiten? ¿Cuántas veces?
- ¿Cómo sé cuándo terminar?

**Completa la receta en pseudocódigo** (los espacios en blanco son tuyos), está receta la puedes escribir en el archivo `RECETA.md`:

```
1. Mostrar mensaje de bienvenida
2. suma ← ______
3. contador ← ______
4. MIENTRAS contador ______ 5 HACER
       Pedir al usuario el número ______
       Leer el número
       suma ← ______
       contador ← ______
   FIN MIENTRAS
5. Mostrar ______
```

> **Nota técnica: la invariante.**
> Una **restricción** es una condición que deben cumplir los datos (por ejemplo: se piden exactamente 5 números). Una **invariante** es una relación que permanece verdadera en cada vuelta del ciclo.
> **Pregunta guía:** después de leer el número 3, ¿qué representa exactamente `suma`? ¿Y `contador`? Escribe la frase que se cumple siempre, después de cada vuelta.

**Prueba tu receta a mano:** síguela con uno de tus 3 casos, anotando cómo cambian `suma` y `contador` en cada vuelta. Si algo no cuadra, corrige la receta ahora, no el código después.

---

## Fase 3. Implementar

*Trabaja sobre `main.cpp`. Llena las secciones 6, 7, 8 y 11 de tu `README.md`.*

**Preguntas guía**

- ¿Has pensado cómo dividir la implementación en pasos pequeños?
- ¿Qué variables necesitas y de qué tipo será cada una?
- ¿Recuerdas la diferencia entre variable y constante? ¿Hay algún valor que nunca cambia en tu programa?

**Así se ve tu punto de partida en `main.cpp`:**

```cpp
// ¿Recueras que hace iostream?
#include <iostream>

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: valor que no cambia durante la ejecución
    const int CANTIDAD = 5;

    // 2. Variables (siempre inicializadas)
    double suma   = 0.0;
    double numero = 0.0;

    std::cout << "Suma de " << CANTIDAD << " numeros\n";

    // 3. Ciclo: repetir CANTIDAD veces
    //    TODO: elige un ciclo (for o while) y usa un contador
    //    TODO: pedir el numero, leerlo y acumularlo en suma

    // 4. Salida
    //    TODO: mostrar el total

    // ¿Qué significa return 0;?
    return 0;
}
```

**Construye en pasos pequeños.** Compila y prueba después de cada uno:

1. Pedir y mostrar **un** solo número.
2. Sumar ese número y mostrar el total.
3. Repetir el proceso 3 veces (usa 3 mientras pruebas).
4. Cambiar 3 por la constante `CANTIDAD` (5).

**Para compilar y ejecutar:**

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

> **Nota de C++: variable vs. constante.**
> Una variable cambia durante la ejecución. Una constante (`const`) no puede modificarse. Usar `CANTIDAD` en lugar de escribir `5` en varios lugares evita los "números mágicos": si algún día el programa debe sumar 10 números, cambias una sola línea.

> **Nota de C++: inicializa tus variables.**
> **Experimento A (obligatorio):** quita el `= 0.0` de `suma`, compila con advertencias y ejecuta. ¿Qué observas? ¿Qué te dice el compilador? ¿Por qué es importante el valor inicial? Vuelve a dejarlo como estaba al terminar.

> **Nota de C++: ¿qué pasa si usamos `int` en lugar de `double`?**
> **Experimento B (opcional):** cambia `numero` y `suma` a `int` e ingresa `2.5`. Observa lo que pasa y anótalo. Si no logras explicarlo, es una buena duda para el profesor.

> **Nota de C++: buenas prácticas.**
> - Usa nombres descriptivos (`suma`, no `s` ni `x2`).
> - Inicializa siempre tus variables.
> - Escribe mensajes claros para el usuario (`"Numero 3 de 5: "`).
> - Comenta el *porqué* de lo que haces, no lo obvio.

**Bitácora de dudas:** ¿qué dudas quieres cubrir con el profesor? Anótalas en la sección 11 de tu `README.md`, junto con lo que ya intentaste para resolverlas.

---

## Fase 4. Probar y mejorar

*Llena las secciones 9 y 10 de tu `README.md`.*

**Tabla de pruebas** (en tu `README.md` completa las columnas "Obtenido" y "¿Pasó?"):

| Caso | Números ingresados | Resultado esperado |
|---|---|---|
| Del 1 al 5 | 1, 2, 3, 4, 5 | 15 |
| Todos ceros | 0 ×5 | 0 |
| Con negativos | tus propios datos | calcúlalo a mano |
| Decimales | 0.5 ×5 | 2.5 |
| Todos iguales | 7 ×5 | 35 |

**Agrega al menos 2 casos propios.**

**Preguntas guía**

- ¿Alguna prueba falló? ¿Fue un error en la receta, en el código o en tus datos esperados?
- ¿Se detiene tu programa exactamente después de 5 números? ¿Cómo lo comprobaste?

**Ciclo de mejora:** identifica → cambia una sola cosa → vuelve a probar todo. Registra cada cambio en tu bitácora de mejoras.

**Retos opcionales (para tu insatisfacción positiva):**

1. Muestra también el **promedio**.
2. Muestra el **mayor** de los números ingresados.
3. Reescribe tu ciclo con el otro tipo (`for` ↔ `while`) y compara: ¿cuál te parece más claro y por qué?
4. Haz que el programa pregunte cuántos números se van a sumar.

---

## Fase 5. Publicar en GitHub

1. Verifica que tu `README.md` esté completo, sin `_____` pendientes, y que tu programa compile sin advertencias.
2. Sube tus cambios a tu fork. Debes tener **al menos 3 commits** hechos durante el trabajo (no uno solo al final), con mensajes que digan qué cambió, por ejemplo: `Agrega lectura de un numero`, `Agrega ciclo para 5 numeros`, `Completa tabla de pruebas`.

Con los siguientes comandos puedes hacer un commit y publicarlo desde tu terminal o línea de comando:

```bash
git add .
git commit -m "Agrega ciclo para 5 numeros"
git push origin main
```
También puedes usar GitHub Desktop como lo hemos hecho antes.

3. Abre tu repositorio en GitHub y comprueba que ahí aparezcan tu código y tu `README.md` actualizados. Tu fork tiene esta forma:
   `https://github.com/<tu-usuario>/ulsa_ime_1_dp_suma_numeros`
4. Entrega en Google Classroom el enlace a **tu fork**.

> **Nota técnica: commits pequeños.**
> Cada commit es un punto al que puedes volveSolo asegurate se subir si algo sale mal. Confirma cambios cada vez que completes un paso pequeño que funcione, como los de la Fase 3.

---

## Cierre y reflexión

*Llena la sección 12 de tu `README.md` antes de entregar.*

1. ¿Qué aprendiste con esta práctica?
2. Ahora que la terminaste, ¿qué cambiarías de tu proceso?
3. ¿Qué fue lo más difícil y cómo lo resolviste?
4. ¿Qué pregunta te quedó sin responder?

---

## Lista de verificación antes de entregar

- [ ] Llené todas las secciones de mi `README.md` (no quedan `_____`)
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Mi fork se llama `ulsa_ime_1_dp_suma_numeros` y el código está en `main.cpp`
- [ ] Entregué el enlace de mi fork en Classroom