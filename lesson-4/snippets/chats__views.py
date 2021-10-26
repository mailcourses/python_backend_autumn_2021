# chats.views.py

from django.http.response import JsonResponse
from django.shortcuts import render


def chat_detail(request, chat_id):
    return JsonResponse({'chat': chat_id})
