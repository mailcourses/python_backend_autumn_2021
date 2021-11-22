import asyncio
from time import time

import aiohttp


async def fetch_url(url, session, lock):
    async with lock:
        async with session.get(url) as resp:
            data = await resp.read()
            with open(f'data/image_{time()}.jpeg', 'wb') as f:
                f.write(data)


async def main():
    N = 200
    # URL = 'https://loremflickr.com/320/240'
    URL = 'http://go.mail.ru/spch?q=%D0%BC%D0%B0%D1%82%D1%80%D0%B5%D1%86%D0%B0'
    urls = [URL] * N

    lock = asyncio.Semaphore(10)

    t1 = time()
    async with aiohttp.ClientSession() as session:
        tasks = [
            asyncio.create_task(fetch_url(url, session, lock))
            for url in urls
        ]
        await asyncio.gather(*tasks)

    t2 = time()
    print(f'main time = {t2 - t1}')



if __name__ == '__main__':
    asyncio.run(main())
