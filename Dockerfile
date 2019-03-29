FROM python:3.6
RUN mkdir -p /usr/src/app
WORKDIR /usr/src/app/docker-hxl-login-demo/mysite_login
COPY . /usr/src/app
COPY pip.conf /root/.pip/pip.conf
RUN pip install -r /usr/src/app/docker-hxl-login-demo/mysite_login/requirements.txt

# CMD [ "python" ".manage.py" "migrate"]
# CMD [ "python" "./manage.py" "loaddata" "/usr/src/app/fixture/superuser.json" ]
# CMD [ "python", "./manage.py", "runserver", "0.0.0.0:8000"]

RUN chmod 777 /usr/src/app/start.sh
ENTRYPOINT ["/usr/src/app/start.sh"]