<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>Edu Tracker</title>
  <style>
body {
      margin: 0;
      font-family: Arial, sans-serif;
      background: linear-gradient(to bottom right, #dbeafe, #ffffff);
      color: #1e3a8a;
      display: flex;
      flex-direction: column;
      min-height: 100vh;
    }
.navbar {
      background-color: #1e40af;
      color: white;
      padding: 1rem;
      display: flex;
      justify-content: space-between;
      align-items: center;
    }
.navbar h1 {
      margin: 0;
      display: flex;
      align-items: center;
    }
 .navbar img {
      height: 40px;
      margin-right: 10px;      
      border-radius: 50%;
    }
.back-button {
background: none;
border: none;
color: white;
font-size: 1rem;
cursor: pointer;
display: none;
}
.container {
      flex-grow: 1;
      display: flex;
      flex-direction: column;
      align-items: center;
      justify-content: center;
      padding: 2rem;
    }
select {
      padding: 1rem;
      font-size: 1rem;
      border: 2px solid #1e3a8a;
      border-radius: 5px;
      background-color: white;
      color: #1e3a8a;
      margin-top: 1rem;
      width: 250px;
      text-align: center;
    }
 .selected-course {
      margin-top: 2rem;
      font-size: 1.2rem;
    }
  </style>
</head>
<body>
<div class="navbar">
    <h1>
      <img src="C:\Users\HP\Documents\LOGO.jpg" alt=>
      Edu Tracker
    </h1>
    <button class="back-button" id="backButton">⬅ Back</button>
  </div>
<div class="container">
    <h2>Choose Course</h2>
    <select id="courseDropdown" onchange="selectCourse(this.value)">
      <option value="">-- Select a course --</option>

