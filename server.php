<?php
    if(isset($_POST['beep'])) {
        shell_exec('my_beep');
    }
?>

<html>
    <head>
        <title>Beep Page</title>
    </head>
    <body>
        <form method="post">
            <input type="submit" name="beep"
                   class="button" value="Beep" />
        </form>
    </body>
</html>
