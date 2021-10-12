import unittest
from main import Search


class TestSearch(unittest.TestCase):
    def setUp(self):
        users = {'elizarova': 'Алена Елизарова', 'ivanova': 'Ирина Иванов'}
        self.search = Search(users)

    def test_user_valid(self):
        self.assertTrue(self.search.validate_user('elizarova'))

    def test_user_invalid(self):
        with self.assertRaises(ValueError):
            self.search.validate_user('12345')

    def test_user_found(self):
        self.assertEqual(self.search.find_user('elizarova'), 'Алена Елизарова')

    def test_user_not_found(self):
        self.assertIsNone(self.search.find_user('petrova'))


if __name__ == '__main__':
    unittest.main()