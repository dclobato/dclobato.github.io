a = int(input("Largura do conteiner (A): "))
b = int(input("Comprimento do conteiner (B): "))
c = int(input("Altura do conteiner (C): "))
x = int(input("Largura do armazem (X): "))
y = int(input("Comprimento do armazem (Y): "))
z = int(input("Pe direito do armazem (Z): "))

cont1 = (x // a) * (y // b) * (z // c)
cont2 = (x // b) * (y // a) * (z // c)

if cont1 > cont2:
    print(f"{cont1} conteineres")
else:
    print(f"{cont2} conteineres")
