import math

x = float(input("Valor de x: "))
y = float(input("Valor de y: "))
resultado = math.log(y) / math.log(x)
print(f"log_{x:g}({y:g}) = {resultado:.2f}")
