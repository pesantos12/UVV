# app/routes.py

from app import app
from flask import render_template

@app.route('/')
@app.route('/index')
def index():
    user = {'username': 'Wanderson'}
    posts = [
        {
            'author': {'username': 'Joao'},
            'body': 'Belo dia em Vila Velha!'
        },
        {
            'author': {'username': 'Maria'},
            'body': 'Bora para folia!'
        }
    ]
    return render_template('index.html', title='Home', user=user, posts=posts)