a = float(input("Digite a: "))
b = float(input("Digite b: "))
c = float(input("Digite c: "))

if a + b > c and a + c > b and b + c > a:
    print("Formam triangulo")
    if a == b and b == c:
        print("Equilatero")
    elif a == b or b == c or a == c:
        print("Isosceles")
    else:
        print("Escaleno")
else:
    print("Nao formam triangulo")
