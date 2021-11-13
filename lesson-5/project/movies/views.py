from django.shortcuts import render, get_object_or_404

from rest_framework import viewsets
from rest_framework.response import Response

from movies.models import Movie
from movies.serializers import MovieSerializer

class MovieViewSet(viewsets.ViewSet):
    def list(self, request):
        queryset = Movie.objects.all()
        serializer = MovieSerializer(queryset, many=True)
        return Response(serializer.data)

    def retrieve(self, request, pk=None):
        queryset = Movie.objects.all()
        movie = get_object_or_404(queryset, pk=pk)
        serializer = MovieSerializer(movie)
        return Response(serializer.data)
