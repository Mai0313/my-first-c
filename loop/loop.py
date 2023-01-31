import time
from numba import jit

@jit(nopython=True)
def main():
    j = 0
    for i in range(20000000):
        j+=1


if __name__ == "__main__":
    start = time.time()
    main()
    finish = time.time() - start
    print(finish*1000)