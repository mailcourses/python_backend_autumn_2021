from django.db import models


class AutoVenicle(models.Model):
    name = models.CharField(max_length=50)
    year = models.IntegerField()

    def __str__(self):
        return '%s' % (self.name)
