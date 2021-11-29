from django.http import JsonResponse
from django.core.mail import send_mail
from django.views.decorators.http import require_GET, require_POST


def task_list(request):
    tasks = [
        {'id': 1, 'name': 'Локальный'},
        {'id': 9, 'name': 'Рабочий'},
    ]
    send_mail(
        'Subject here',
        'Here is the message.',
        'g.kandaurov@corp.mail.ru',
        ['fantom.voronezh@gmail.com'],
        fail_silently=False,
    )
    return JsonResponse({'tasks': tasks})


def task_detail(request, task_id):
    return JsonResponse({'task_id': task_id})


@require_POST
def add_task(request):
    data = request.POST
    return JsonResponse({'add_task': data})
