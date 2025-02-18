import http.server as hs

class MyWebServer():
    def __init__(self, http_handler = hs.SimpleHTTPRequestHandler)->None:
        self.http_handler = http_handler

    def run(self, host = "localhost", port = 3001):
        httpd = hs.HTTPServer((host, port), self.http_handler)
        print(f"Servidor Web rodando em {host}: {port}")
        httpd.serve_forever()