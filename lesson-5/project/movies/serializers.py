from movies.models import Movie
from rest_framework import serializers

class MovieSerializer(serializers.ModelSerializer):
    genre = serializers.CharField(read_only=True)
    class Meta:
        model = Movie
        fields = ['id', 'title', 'year', 'genre']
