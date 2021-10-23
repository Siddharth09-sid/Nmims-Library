<?php
$insert = false;
if(isset($_POST['email','password'])){
    // Set connection variables
    $_SERVER = "localhost";
    $username = "root";
    $password = "";
    //Create a database connection
    $con = mysqli_connect($server, $username, $password);
    // Check for connection success
    if(!$con){
        die("connection to this database failed due to" .
        mysqli_connect_error());
    }
    //echo "Success connecting to the db";
    //Collect post variables
    $email = $_POST['email'];
    $password = $_POST['password'];

    $sql = "INSERT INTO `library_login.`login` (`email`, `password`, `date`) VALUES ( '$email', '$password', current_timestamp());";

    //echo $sql;
    //Execute the Query
    if($con->query($sql) == true)
    {
        //echo "Succesfully inserted";
        //Flag for successful insertion
        $insert = true;
    }
    else{
        echo "ERROR: $sql <br> $con->error";
    }
    //Close the database connection
    $con->close();
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>login</title>
    <link rel="stylesheet" href="loginstyle.css">
</head>
<body>
    <a href="index.html"><img class="bg" src="images/logo-nmims-navi-mumbai-campus.jpg" width="25%" ></a>
    <div class="container">
    <form action="login.php" method="post"></form>
    <h1>Login</h1>
    <p>Email: *<input type="email" name="email" id="email" required placeholder="abc123@nmims.edu.in"></p>
    <p>Password *<input type="password" name="password" id="password" required placeholder="Abc#123"></p>
   <?php
   if($insert == true){
    <a href='school.html' class='hero-btn'>Login</a>
   }
    ?>
    <!--<input type="submit" value="Login"  > -->
</div>
</body>
</html>