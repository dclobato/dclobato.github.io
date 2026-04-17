albumina = float(input("Albumina (mg): "))
creatinina = float(input("Creatinina (g): "))

rac = albumina / creatinina

print(f"RAC: {rac:.1f}")

if rac < 30.0:
    print("Normal")
elif rac < 300.0:
    print("Microalbuminuria")
else:
    print("Macroalbuminuria")
