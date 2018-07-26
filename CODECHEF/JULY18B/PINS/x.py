count = 0
total = 0
for a in range (0, 10):
    for b in range (0, 10):
        for c in range (0, 10):
            for d in range (0, 10):
                for e in range(0, 10):
                    s = str(a) + str(b) + str(c) + str(d) + str(e)
                    total = total + 1
                    if s[::-1] == s:
                        count = count + 1
                        print(s)
print(count)
print(total)
