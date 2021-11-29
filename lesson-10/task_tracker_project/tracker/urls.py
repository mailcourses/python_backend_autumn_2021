from django.urls import path
from .views import task_list, task_detail, add_task


urlpatterns = [
    path('', task_list, name='task_list'),
    path('<int:task_id>/', task_detail, name='chat_detail'),
    path('add/', add_task, name='add_task'),
]
