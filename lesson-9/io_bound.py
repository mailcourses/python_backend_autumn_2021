from time import time
import threading

import requests


def fetch_urls(urls, lock):
    with lock:
        for url in urls:
            resp = requests.get(url)
            with open(f'data/image_{time()}.jpeg', 'wb') as f:
                for chunk in resp:
                    f.write(chunk)


def run():
    N = 32
    URL = 'https://loremflickr.com/320/240'
    urls = [URL] * N

    # t1 = time()
    # fetch_urls(urls)
    # t2 = time()
    # print(f'main thread time = {t2 - t1}')

    lock = threading.Semaphore(2)

    for threads_num in (2, 8):
        urls = [URL] * (N // threads_num)

        t1 = time()
        threads = [
            threading.Thread(target=fetch_urls, args=(urls, lock))
            for _ in range(threads_num)
        ]

        for th in threads:
            th.start()
        for th in threads:
            th.join()

        t2 = time()
        print(f'{threads_num} threads time = {t2 - t1}')


if __name__ == '__main__':
    run()
