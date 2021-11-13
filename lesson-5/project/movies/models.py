from django.db import models

from genres.models import Genre

class Movie(models.Model):
    title = models.CharField(max_length=64, verbose_name='Название фильма')
    genre = models.ForeignKey(Genre, null=True, on_delete=models.SET_NULL, verbose_name='Жанр')
    year = models.IntegerField(null=False, default=2021)
