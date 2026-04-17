aulas = int(input("Total de aulas: "))
faltas = int(input("Total de faltas: "))
p1 = float(input("Nota da prova 1: "))
p2 = float(input("Nota da prova 2: "))

frequencia = (aulas - faltas) / aulas * 100.0
media = (p1 + p2) / 2.0

if frequencia < 75.0:
    print("Reprovado por frequencia")
elif media >= 6.0:
    print(f"Aprovado com media {media:.1f}")
elif media < 4.0:
    print(f"Reprovado com media {media:.1f}")
else:
    final = float(input("Nota da prova final: "))
    if final >= 6.0:
        print(f"Aprovado na prova final com media {final:.1f}")
    else:
        media_final = final if final > media else media
        print(f"Reprovado na prova final com media {media_final:.1f}")
