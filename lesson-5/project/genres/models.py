from django.db import models

class Genre(models.Model):
    # Первичный ключ не создаём!!!
    name = models.CharField(max_length=32)

    def __str__(self):
        return f"Жанр: {self.name}"
