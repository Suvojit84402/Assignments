import itertools
import operator
even = list(range(1,21))
odd=list(range(1,20))
evenselector=[False, True]*10
oddselector=[1,0]*10
e= itertools.compress(even, evenselector)
o= itertools.compress(odd, oddselector)
for i in e:
  print(i, end=' ')
print()
for i in o:
  print(i, end=' ')

