from time import time
import threading


def countdawn(n):
    while n:
        n -= 1


def run():
    N = 200_000_000

    t1 = time()
    countdawn(N)
    t2 = time()
    print(f'main thread time = {t2 - t1}')

    for threads_num in (1, 2, 4, 8, 100):
        threads = [
            threading.Thread(target=countdawn, args=(N // threads_num,))
            for _ in range(threads_num)
        ]
        t1 = time()

        for th in threads:
            th.start()
        for th in threads:
            th.join()

        t2 = time()
        print(f'{threads_num} threads time = {t2 - t1}')


if __name__ == '__main__':
    run()
