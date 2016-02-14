'''
a pythonic solution for the same problem that also counts 0 in it appears in the first ,  using int to string
'''
#initial variables
cache = []
loop = input()

#splitting the int values as int 
for i in xrange(loop):
    cache.append(map(int, raw_input("")))

#sotution......................
for lst in cache:
    for i in xrange(len(lst)):
        if lst[i] % 2 == 0:
            lst[i] = lst[i]+1
        else:
            lst[i] =lst[i] -1
    lst = "".join(str(i) for i in lst) # converting ints into string
    print lst


