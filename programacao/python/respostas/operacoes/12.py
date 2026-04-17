mes_nascimento = int(input("Mes de nascimento: "))
ano_nascimento = int(input("Ano de nascimento: "))
mesAtual = int(input("Mes atual: "))
anoAtual = int(input("Ano atual: "))
dias_vividos = ((anoAtual - ano_nascimento) * 12 + (mesAtual - mes_nascimento)) * 30
print(f"Voce ja viveu aproximadamente {dias_vividos} dias")
