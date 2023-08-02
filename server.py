from flask import Flask, request, render_template_string
import os

app = Flask(__name__)

HTML = """
<html>
    <head>
        <title>Beep</title>
        <style>
            input {
                font-size: 100px;
                width: 100%;
                height: 100%;
            }
    </head>
    <body>
        <form method="POST">
            <input type="submit" value="BEEP">
        </form>
    </body>
</html>
"""

@app.route('/', methods=['GET', 'POST'])
def beep():
    if request.method == 'POST':
        os.system('sudo /usr/local/bin/my_beep')
    return render_template_string(HTML)

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=6969)
