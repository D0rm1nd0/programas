par=0
impar=0
positivo=0
negativo=0
for i in range(0,5):
    num=input()
    if num % 2==0:
        par+=1
    else:
        impar+=1
    if num>0:
        positivo+=1
    elif num<0:
        negativo+=1
print "%d valor(es) par(es)" %par
print "%d valor(es) impar(es)" %impar
print "%d valor(es) positivo(s)" %positivo
print "%d valor(es) negativo(s)" %negativo