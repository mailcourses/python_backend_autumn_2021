from django_elasticsearch_dsl import Document
from django_elasticsearch_dsl.registries import registry
from .models import AutoVenicle


@registry.register_document
class AutoVenicleDocument(Document):
    class Index:
        name = 'ven'

    settings = {
        'number_of_shards': 1,
        'number_of_replicas': 0
    }

    class Django:
        model = AutoVenicle
        fields = [
            'name',
            'year',
        ]
