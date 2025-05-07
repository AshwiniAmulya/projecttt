<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>ECE Semester Study Plan</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background: #f4f4f4;
      padding: 20px;
    }
    .container {
      max-width: 1000px;
      margin: auto;
      background: #fff;
      padding: 20px;
      border-radius: 10px;
      box-shadow: 0 2px 10px rgba(0,0,0,0.1);
    }
    h1, h2 {
      text-align: center;
    }
    nav {
      text-align: center;
      margin-bottom: 30px;
    }
    nav a {
      margin: 0 15px;
      text-decoration: none;
      color: #007BFF;
      font-weight: bold;
    }
    nav a:hover {
      text-decoration: underline;
    }
    table {
      width: 100%;
      border-collapse: collapse;
      margin-bottom: 30px;
    }
    th, td {
      border: 1px solid #ccc;
      padding: 10px;
      vertical-align: top;
    }
    th {
      background-color: #f0f0f0;
    }
    label {
      cursor: pointer;
    }
    .detail-link {
      color: #007BFF;
      text-decoration: underline;
      cursor: pointer;
    }
    .modal {
      display: none;
      position: fixed;
      z-index: 999;
      left: 0;
      top: 0;
      width: 100%;
      height: 100%;
      overflow: auto;
      background-color: rgba(0,0,0,0.6);
    }
    .modal-content {
      background-color: #fff;
      margin: 10% auto;
      padding: 20px;
      border: 1px solid #888;
      width: 60%;
      border-radius: 10px;
    }
    .close {
      color: #aaa;
      float: right;
      font-size: 28px;
      font-weight: bold;
    }
    .close:hover,
    .close:focus {
      color: black;
      text-decoration: none;
      cursor: pointer;
    }
    .link-list {
      list-style: none;
      padding-left: 0;
    }
    .link-list li {
      margin-bottom: 10px;
    }
    .link-list a {
      color: #007BFF;
      text-decoration: none;
    }
    .link-list a:hover {
      text-decoration: underline;
    }
  </style>
</head>
<body>
  <div class="container">
    <h1>ECE Semester Study Plan</h1>
    <nav>
      <a href="#" onclick="showYouTubeSuggestions()">Study Plan and YouTube Channels</a>
    </nav>

    <div id="studyPlan"></div>
  </div>

  <div id="conceptModal" class="modal">
    <div class="modal-content">
      <span class="close" onclick="document.getElementById('conceptModal').style.display='none'">&times;</span>
      <h3 id="modalTitle"></h3>
      <p id="modalContent"></p>
    </div>
  </div>

  <div id="youtubeModal" class="modal">
    <div class="modal-content">
      <span class="close" onclick="document.getElementById('youtubeModal').style.display='none'">&times;</span>
      <h3>Recommended YouTube Channels & Websites</h3>
      <ul class="link-list">
        <li><strong>YouTube Channels:</strong></li>
        <li><a href="https://www.youtube.com/@NesoAcademy" target="_blank">Neso Academy</a></li>
        <li><a href="https://www.youtube.com/@GateSmashers" target="_blank">Gate Smashers</a></li>
        <li><a href="https://www.youtube.com/@Ekeeda" target="_blank">Ekeeda</a></li>
        <li><a href="https://www.youtube.com/@nptelhrd" target="_blank">NPTEL ECE</a></li>
        <li><strong>Websites:</strong></li>
        <li><a href="https://nptel.ac.in" target="_blank">NPTEL</a></li>
        <li><a href="https://www.geeksforgeeks.org" target="_blank">Geeks for Geeks</a></li>
        <li><a href="https://www.electronics-tutorials.ws" target="_blank">Electronics Tutorials</a></li>
      </ul>
    </div>
  </div>

