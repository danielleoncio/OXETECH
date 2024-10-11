produto1 = float(input("Dê os valores de um produto: "))
produto2 = float(input("Dê os valores de um produto: "))
produto3 = float(input("Dê os valores de um produto: "))

if produto1 < produto2 and produto1 < produto3:
    print("O mais barato é " , produto1)
elif produto2 < produto3 and produto2 < produto1:
    print("O mais barato é ", produto2)
elif produto3 < produto2 and produto3 < produto1:
    print("O mais barato é " , produto3)
else:
    print("Os três produtos têm o mesmo preço: ", produto2)