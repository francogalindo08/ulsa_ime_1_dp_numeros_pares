# Receta: Guardar los números pares

1. Mostrar mensaje de bienvenida
2. totalPares ← ___0___
3. contador ← ___0___
4. MIENTRAS contador __menor o_igual a 5___ CANTIDAD HACER
       numero ← leerEntero("___ingresar un numero___")
       SI numero _mod2=0_____ ENTONCES
           pares[___totalpares__] ← numero
           totalPares ← ___totalpares++___
       FIN SI
       contador ← ___++___
   FIN MIENTRAS
5. Mostrar "Pares encontrados: " y ___cuales son___
6. i ← 0
7. MIENTRAS i _totalpares ______ HACER
       Mostrar pares[i]
       i ← i++
   FIN MIENTRAS