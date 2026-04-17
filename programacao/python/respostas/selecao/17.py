compra = int(input("Digite o valor da compra: "))
pago = int(input("Digite o valor pago: "))

troco = pago - compra

cedulas = troco // 100
if cedulas > 0:
    print(f"{cedulas} cedula(s) de 100")
    troco = troco % 100

cedulas = troco // 50
if cedulas > 0:
    print(f"{cedulas} cedula(s) de 50")
    troco = troco % 50

cedulas = troco // 20
if cedulas > 0:
    print(f"{cedulas} cedula(s) de 20")
    troco = troco % 20

cedulas = troco // 10
if cedulas > 0:
    print(f"{cedulas} cedula(s) de 10")
    troco = troco % 10

cedulas = troco // 5
if cedulas > 0:
    print(f"{cedulas} cedula(s) de 5")
    troco = troco % 5

cedulas = troco // 2
if cedulas > 0:
    print(f"{cedulas} cedula(s) de 2")
    troco = troco % 2

cedulas = troco // 1
if cedulas > 0:
    print(f"{cedulas} cedula(s) de 1")
