from http.server import HTTPServer, SimpleHTTPRequestHandler


def run(server_class=HTTPServer, handler_class=SimpleHTTPRequestHandler):
  PORT = 8000
  server_address = ('', PORT)
  httpd = server_class(server_address, handler_class)
  print("serving at port", PORT)
  httpd.serve_forever()

run()
