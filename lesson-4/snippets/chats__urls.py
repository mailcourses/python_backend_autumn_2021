# chats.urls.py

from django.contrib import admin
from django.urls import path, include
from chats.views import chat_detail



urlpatterns = [
    path('chat/<int:chat_id>/', chat_detail, name='chat_detail'),
]