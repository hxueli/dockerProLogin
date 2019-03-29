from django.conf import settings  
settings.configure()
from django.contrib.auth.hashers import make_password
make_password('admin')