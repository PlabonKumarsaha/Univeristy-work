<?php
$F_Name = $L_Name = $Comp = $Adr1 = $Adr2 = $City = $state = $Zip = $Cntry = $Phn = $Fx = $Mail = $Donate = $Amount = $regular = $cardNo = "";

$month = "";
//Honarary doctor information
$dochonor = $docmemory = $docName = $acknowledge = $docAdr = $docCity = $State = $docZip = " ";
//Additional info 
$AdiName = $g1 = $g2 = $g3 = $area = $Pmail= $Email = $Telephn= $Fax = $Email2 =$Pmail2= $regular = "";

//Errors

$f_nameerr = $l_nameerr = $comperr = $Adr1err = $Adr2err = $Cityerr = $Stateerr = $Ziperr = $Cntryerr = $Phnerr = $Fxerr = $Mailerr = $Donateerr = $Amounterr = $regularerr = $cardNoerr = "";

$montherr = "";
//Honarary doctor information
$dochonorerr = $docmemoryerr = $docNameerr = $acknowledgeerr = $docAdrerr = $docCityerr = $stateerr = $docZiperr = " ";
//Additional info 
$AdiNameerr = $g1err = $g2err = $g3err = $areaerr = $Pmailerr = $Emailerr = $Telephnerr = $Faxerr = $Email2err =$Pmail2err = $regularerr = "";

if($_SERVER["REQUEST_METHOD"] == "POST"){
	
	  if(empty($_POST['f_name'])){
      $f_nameerr = "First Name cannot be empty!";
    }
    else{
      $F_Name = $_POST['f_name'];
	  echo $F_Name . "<br>";
    }
	
	  if(empty($_POST['l_name'])){
      $l_nameerr = "last Name cannot be empty!";
    }
    else{
      $L_Name = $_POST['l_name'];
	  echo $L_Name . "<br>";
    }
	
	 if(empty($_POST['comp'])){
      $comperr = "Company  cannot be empty!";
	
    }
    else{
      $Comp = $_POST['comp'];
	  echo $Comp . "<br>";
    }
	
	 if(empty($_POST['adr1'])){
      $Adr1err = "addr cannot be empty!";
    }
    else{
      $Adr1 = $_POST['adr1'];
	   echo $Adr1 . "<br>";
    }
	
	 if(empty($_POST['adr2'])){
      $Adr2err = "adr2 cannot be empty!";
    }
    else{
      $Adr2 = $_POST['adr2'];
	  echo $Adr2 . "<br>";
	   echo $Adr2 . "<br>";
    }
	
	
	 if(empty($_POST['city'])){
      $Cityerr = "city cannot be empty!";
    }
    else{
      $City = $_POST['city'];
	  echo $City . "<br>";
    }
	
	 if(empty($_POST['state'])){
      $Stateerr = "state cannot be empty!";
    }
    else{
      $State = $_POST['state'];
	  echo $State . "<br>";
    }
	
	 if(empty($_POST['zip'])){
      $Ziperr = "zip cannot be empty!";
    }
    else{
      $Zip = $_POST['zip'];
    }
	
	
	if(empty($_POST['cntry'])){
      $Cntryerr = "Country name cannot be empty!";
    }
    else{
      $Cntry = $_POST['cntry'];
    }
	
		
	if(empty($_POST['phn'])){
      $Phnerr = "phone cannot be empty!";
    }
    else{
      $Phn =$_POST['phn'];
    }
	
		if(empty($_POST['fx'])){
     // $Fxerr = "Fax cannot be empty!";
    }
    else{
      $Fx = $_POST['fx'];
	   echo $Fx . "<br>";
    }
		if(empty($_POST['mail'])){
      $Mailerr = "Mail cannot be empty!";
    }
    else{
      $Mail = $_POST['mail'];
	   echo $Mail . "<br>";
    }
	
	
	if(empty($_POST['donate'])){
      $Donateerr = "Donation cannot be empty!";
    }
    else{
      $Donate = $_POST['donate'];
    }
	
	
	if(empty($_POST['amount'])){
      $Amounterr = "Amount cannot be empty!";
    }
    else{
      $Amount = $_POST['amount'];
    }
	
		
	
	
	
	
	
	
	
	
}


?>
<html>
<head>
<title>Donors Required Information</title>
</head>
<body>
<form action = "donor.php" method ="post">
<h1  align="Left">Donor Information</h1>
<br>
<br>
<div  align="center">
<table width = "50%">

        <tr>
          <td><label>First Name :<font color = "red">*<font></label></td>
          <td><input type="text" name="f_name" value=""><span style="color:red;"> <?php echo $f_nameerr; ?></span></td>
        </tr>
		
		 <tr>
          <td><label>Last Name :<font color = "red">*<font></label></td>
          <td><input type="text" name="l_name" value=""><span style="color:red;"> <?php echo $l_nameerr; ?></span></td>
        </tr>
		
		 <tr>
          <td><label>Company:</label></td>
          <td><input type="text" name="comp" value=""><span style="color:red;"> <?php echo $comperr; ?></span></td>
        </tr>
		
		 <tr>
          <td><label>Adress 1 :<font color = "red">*<font></label></td>
          <td><input type="text" name="adr1" value=""><span style="color:red;"> <?php echo $Adr1err; ?></span></td>
        </tr>
		
		<tr>
          <td><label>Adress 2 :</label></td>
          <td><input type="text" name="adr2" value=""></td>
        </tr>
		
		<tr>
          <td><label>City<font><font color = "red">*<font></label></td>
          <td><input type="text" name="city" value=""><span style="color:red;"> <?php echo $Cityerr; ?></span></td>
        </tr>
		
		 <tr>
            <td><label>State: <font color = "red">*<font></label></td>
            <td>
              <select name="state" >
                <option value="" disabled selected>Select A state</option>
                <option value="A">DHAKA</option>
                <option value="B">CHOTTOGRAM</option>
                <option value="C">Noakhali</option>
				<option value="D">Shylet</option>
				<option value="E">Khulna</option>
							
              </select>
			  <span style="color:red;"> <?php echo $Stateerr; ?></span>
			  
            </td>
          </tr>
		  
		  
		  <tr>
          <td><label>Zipcode: <font color = "red">*<font></label></td>
          <td><input type="text" name="zip" value=""> <span style="color:red;"> <?php echo $Ziperr; ?></span></td>
        </tr>
		
		
		   <tr>
            <td><label>Country: <font color = "red">*<font></label></td>
            <td>
              <select name="cntry" >
                <option value="" disabled selected>Select A Country</option>
                <option value="A">BD</option>
                <option value="B">IND</option>
                <option value="C">PAK</option>
				<option value="D">NEP</option>
				<option value="E">AFG</option>
							
              </select>
			  <span style="color:red;"> <?php echo $Cntryerr; ?></span>
            </td>
          </tr>
		  
		  
		  <tr>
          <td><label>Phone :<font color = "red">*<font></label></td>
          <td><input type="phone" name="phn" value="">
		  <span style="color:red;">  <?php echo $Phnerr; ?></span>
		  
		  </td>
        </tr>
		
		<tr>
          <td><label>FAX :</label></td>
          <td><input type="number" name="fx" value=""></td>
        </tr>
		
		<tr>
          <td><label>Email :</label></td>
          <td><input type="email" name="mail" value=""> <span style="color:red;"> <?php echo $Mailerr; ?></span></td>
		  
        </tr>
		
		 <tr>
            <td><label>Donation amount: <font color = "red">*<font></label></td>
            <td colspan = "2">
              <input type="radio" name="donate" value="none"  >none
              <input type="radio" name="donate" value="$50"  >$50
              <input type="radio" name="donate" value="$100"  >$100
			  <input type="radio" name="donate" value="$250"  >$250
			  <input type="radio" name="donate" value="other"  >other
			   <span style="color:red;"><?php echo $Donateerr; ?></span>
            </td>
			
          </tr>
		  
		   <tr>
          <td><label>(check a button or <br>type in your amount)</label>
		  <br>
		  <label>other Amount $ </label></td>
		  
          <td><input type="number" name="amount" value=""></td>
        </tr>
		
		 <tr>
            <td><label>Recurring donation : </label>
			<br>
		  <label>check if yes</label></td>
			</td>
            <td>
              <input type="checkbox" name="regular" value=""> I am interested In giving regular basis
             
            </td>
          </tr>
		  
		   <tr>
            <td colspan = "2"><label>Monthly credit card $</label>
			<input type="card" name="cardNo" value="">
			<label> For </label>
			<input type="text" name="month" value="">
			<label> Months </label>
			
          </tr>
		

</table>
</div>
<h1  align="Left">Honorurium and Memorial Doctor Information</h1>
<br>
<br>
<div align ="center">
<table width = "50%">

         <tr>
            <td colspan = "2"><label>I would like to make this</label>
		    <input type="radio" name="dochonor" value="none" checked required>to Honour
			<br>
			<label> donation </label>
			<input type="radio" name="docmemory" value="none" checked required>In Memory of
			
			
          </tr>
		  
		    
		  <tr>
          <td><label>Name :</label></td>
          <td><input type="text" name="docName" value=""></td>
        </tr>
		
		<tr>
          <td><label>Acknowledge donation to:</label></td>
          <td><input type="text" name="acknowledge" value=""></td>
        </tr>
		
		<tr>
          <td><label>Adress :</label></td>
          <td><input type="text" name="docAdr" value=""></td>
        </tr>
		
		<tr>
          <td><label>City :</label></td>
          <td><input type="text" name="docCity" value=""></td>
        </tr>
		
		 <tr>
            <td><label>State: </label></td>
            <td>
              <select name="state" >
                <option value="" disabled selected>Select A state</option>
                <option value="A">DHAKA</option>
                <option value="B">CHOTTOGRAM</option>
                <option value="C">Noakhali</option>
				<option value="D">Shylet</option>
				<option value="E">Khulna</option>
							
              </select>
            </td>
          </tr>
		  
		  
		  <tr>
          <td><label>Zipcode: </label></td>
          <td><input type="number" name="docZip" value=""></td>
        </tr>


</table>

</div>

<h1 align="Left">Additional Information : <br>
<h4 align="Left">please enter your name,company or organization as you would like to appear in your publication <h4></h1>
<table align = "center" width = "50%" >
  <tr colspan = "2">
          <td><label>Name :</label>
          <input type="text" name="AdiName" value=""></td>
        </tr>
		
		<div align = "Left">
		
		<tr>
           
            <td>
              <input type="checkbox" name="g1" value=""> I would like my gift to remin annonymous <br>
			  <input type="checkbox" name="g2" value=""> My employer offers a similar gift program,i will mail the matching form <br>
			  <input type="checkbox" name="g3" value=""> Please save the cost of acknowldeging this gift by not mailing a thankyou letter<br>
			  
             
            </td>
          </tr>
		
		<div>
		
		<tr>
          <td><label><b>Comments</b></label>
		  
		   <textarea name = "area" rows="4" cols="50">
         </textarea></td>
		
		  
        </tr>
		
		<tr>
          <td><label>please  type any questions or feedback here<label></td>
		  
		  
        </tr>
		
		 <tr>
            <td><label>How may we contact you? </label>
            
              <input type="checkbox" name="Email" value="E-Mail" checked required>E-Mail<br>
              <input type="checkbox" name="Pmail" value="Post Mail" checked required>Post Mail<br>
              <input type="checkbox" name="Telephn" value="Telephoe" checked required>Telephoe<br>
			  <input type="checkbox" name="Fax" value="Fax" checked required>Fax
			   
            </td>
          </tr>
		  </table>
		  <div align="left">
		  <label>I would like to receieve newsletter and special event by :<label>
		  </div>
		  
		  <table   width="50%" align = "center">
		  
		   <tr>
           <td>
		   <br>
              <input type="checkbox" name="Email2" value="E-Mail" checked required>E-Mail<br>
              <input type="checkbox" name="Pmail2" value="Post Mail" checked required>Postal Mail
              
            </td>
          </tr>
		  
		  </table>
		  <input type="checkbox" name="regular" value=""> I would like information about volunteerig with the .....
		  
		  <br>
		  <div align = "center">
		   <input type="reset" name="btn_reset" value="Reset">
		     <input type="submit" name="btn_submit" value="continue">
		  <div>


<form>

<h1>User Details</h1>
    <?php

      // echo $F_Name . "<br>";
      // echo $L_Name . "<br>";
      // echo $Comp . "<br>";
      // echo $Adr1 . "<br>";
      // echo $Adr2 . "<br>";
      // echo $City . "<br>";
      // echo $State . "<br>";
      // echo $Cntry . "<br>";
      // echo $Fx . "<br>";
      // echo $Donate . "<br>";
      // echo $Amount . "<br>";
	  // echo $bsc . "<br>";
	  // echo $bsc . "<br>";
	  // echo $bsc . "<br>";
	  // echo $bsc . "<br>";
	  // echo $bsc . "<br>";
	  // echo $bsc . "<br>";
	  // echo $bsc . "<br>";
	  // echo $bsc . "<br>";
	  // echo $bsc . "<br>";
	  // echo $bsc . "<br>";

    ?>
</body>

</html>