
class Search():
    def __init__(self, users):
        self.users = users

    def find_user(self, username):
        try:
            if self.validate_user(username):
                return self.users.get(username)
        except ValueError:
            return 'user is invalid'
    
    def validate_user(self, username):
        if username.isalpha():
            return True
        else:
            raise ValueError('invalid username') 


