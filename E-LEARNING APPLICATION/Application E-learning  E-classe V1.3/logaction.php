<?php
 include 'connection.php';
 if(isset($_POST['email']) && isset($_POST['password'])){ 
    $email=$_POST['email'];
    $pwd=$_POST['password'];
      if(empty($email)){
        header('location:login.php?error= Email or password is required please enter an email or a password');
        exit();
      }
      else if(empty($pwd)){
        header('location:login.php?error= Email or password is required please enter an email or a password');
        exit();
      }
      else{
        $sql="SELECT *FROM comptes WHERE email='$email' AND password='$pwd'";
        $query=$link->query($sql);
            if(mysqli_num_rows($query) == 1)
            {
             $row=mysqli_fetch_assoc($query);
               if($row['email']=== $email && $row['password']=== $pwd )
               {
            if(!empty($_POST['remember'])){
               setcookie('email',$email,time()+60*60*24);
               setcookie('password',$pwd,time()+60*60*24);}
              session_start();
               $_SESSION['id']=$row['id'];
               $_SESSION['name']=$row['name'];
                $_SESSION['password']=$row['password'];
                $_SESSION['email']=$row['email'];
                $_SESSION['role']=$row['role'];
                   header("location:dashboard.php");
              }
               else
               {  header('location:login.php?error= enter a correct email or password');
                   exit();
                       } 
            }
      else{  header('location:login.php?error= enter a correct email or password');
                exit();
            }
    }

}
  else{ header('location:login.php');}
?>