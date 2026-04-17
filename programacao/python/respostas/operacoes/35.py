A = float(input("Largura do conteiner (A): "))
B = float(input("Comprimento do conteiner (B): "))
C = float(input("Altura do conteiner (C): "))
X = float(input("Largura do armazem (X): "))
Y = float(input("Comprimento do armazem (Y): "))
Z = float(input("Pe direito do armazem (Z): "))

cont_largura = X // A
cont_comprimento = Y // B
cont_altura = Z // C

total = cont_largura * cont_comprimento * cont_altura
print(f"A quantidade maxima de conteineres e: {total}")
