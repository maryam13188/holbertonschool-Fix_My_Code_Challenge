#!/usr/bin/python3
"""User class
"""


class User():
    """User class
    """

    def __init__(self):
        """Initialize user
        """
        self.__email = None
        self.__password = None

    @property
    def email(self):
        """Get email
        """
        return self.__email

    @email.setter
    def email(self, value):
        """Set email
        """
        if type(value) is str:
            self.__email = value

    @property
    def password(self):
        """Get password
        """
        return self.__password

    @password.setter
    def password(self, value):
        """Set password
        """
        if type(value) is str:
            self.__password = value

    def is_valid_password(self, pwd):
        """Validate password
        """
        if pwd is None:
            return False
        return self.__password == pwd
