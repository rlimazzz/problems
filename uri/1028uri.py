# -*- coding: utf-8 -*-
import math
n = int(input())
lista_resultados = []
for i in range(0 , n):
    linha1 = input().split(" ")
    f1 , f2 = linha1
    f1 , f2 = int(f1) , int(f2)
    maxdiv = math.gcd(f1 , f2)
    lista_resultados.append(maxdiv)
for j in range(0 , len(lista_resultados)):
    print(lista_resultados[j])
    j += 1
