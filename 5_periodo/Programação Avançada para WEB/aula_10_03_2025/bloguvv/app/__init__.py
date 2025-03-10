# app/__init__.py

from flask import Flask
from config import Config

app = Flask(__name__)
app.config['SECRET_KEY'] = "voce-nunca-saberah"

from app import routes