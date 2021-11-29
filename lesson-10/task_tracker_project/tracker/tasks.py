import time
from celery import shared_task

from application import celery_app


@celery_app.task()
def add(x, y):
    return x + y


@shared_task
def some_sleep(seconds):
    time.sleep(seconds)


@shared_task
def increment(num):
    return num + 1
