
def find_multiple(num):
    mul = 0;
    for i in range(1000):
        for  j in range(1000):
            if i > 99 and j > 99:
                mul = i * j
                if (mul > 900000):
                    s_mul = str(mul)
                    lent = len(s_mul) - 1
                    for k in range(len(s_mul)):
                        if s_mul[k] != s_mul[lent]:
                            break
                        if (k == 2):
                            print(s_mul)
                            return
                        lent -= 1

find_multiple(999 * 999)
