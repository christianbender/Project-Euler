def get_fib(n):
    """[summary]
    n starts by 1

    Arguments:
        n {[int]} -- [description]
    
    Returns:
        [int] -- [description]
    """

    fib_0 = 0
    fib_1 = 1
    for i in range(n):
        temp = fib_1
        fib_1 = fib_0 + fib_1
        fib_0 = temp
    return fib_1

def even_fib():
    sum = 0
    for i in range(1, 4000000):
        fib = get_fib(i)
        if fib % 2 == 0:
            sum += fib
    return sum

print(even_fib())