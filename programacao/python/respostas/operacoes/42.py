ATT = float(input("Numero de tentativas de passe (ATT): "))
CMP = float(input("Numero de passes completos (CMP): "))
YDS = float(input("Jardas passadas (YDS): "))
TD = float(input("Passes para touchdown (TD): "))
INT = float(input("Interceptacoes (INT): "))

a = (CMP / ATT - 0.3) * 5
b = (YDS / ATT - 3) * 0.25
c = (TD / ATT) * 20
d = 2.375 - (INT / ATT) * 25

if a > 2.375:
    a = 2.375
if a < 0:
    a = 0
if b > 2.375:
    b = 2.375
if b < 0:
    b = 0
if c > 2.375:
    c = 2.375
if c < 0:
    c = 0
if d > 2.375:
    d = 2.375
if d < 0:
    d = 0

rating = ((a + b + c + d) / 6) * 100
print(f"O Passer Rating e: {rating:.2f}")
