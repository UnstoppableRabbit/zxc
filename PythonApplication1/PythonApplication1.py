s = input()
lst = list(s.split())
i = len(lst)
def fnc(list):
    l = 0
    k = input()
    for j in range (1,2*i,2):
       r = str((j-l)*k)
       l+=1
       list.insert(j,r)
fnc(lst)
l = len(lst)
for m in range (0,l):
  print(lst[m], end =' ')