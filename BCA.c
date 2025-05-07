<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>BCA Semester Study Plan</title>
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
      cursor: pointer;
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
  </style>
</head>
<body>
 <div class="container">
    <h1>BCA Semester Study Plan</h1>
    <nav>
      <a onclick="document.getElementById('youtubeModal').style.display='block'">Study Plan and YouTube Channels</a>
    </nav>
    <table>
      <thead>
        <tr>
          <th>Semester</th>
          <th>Subjects & Key Topics</th>
          <th>Reference Books</th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td>Semester 1</td>
          <td>Mathematics I (Functions, Matrices), C Programming (Loops, Functions), Environmental Studies</td>
          <td>"Let Us C" by Yashavant Kanetkar, "Engineering Mathematics" by B.S. Grewal</td>
        </tr>
        <tr>
          <td>Semester 2</td>
          <td>Data Structures (Stacks, Queues), Java Programming (OOP, Inheritance), Digital Logic</td>
          <td>"Data Structures Through C" by Yashavant Kanetkar, "Digital Design" by M. Morris Mano</td>
        </tr>
        <tr>
          <td>Semester 3</td>
          <td>DBMS (SQL, Normalization), Operating Systems (Scheduling), Web Tech (HTML, CSS, JS)</td>
          <td>"Database System Concepts" by Korth, "Operating System Concepts" by Silberschatz</td>
        </tr>
        <tr>
          <td>Semester 4</td>
          <td>DAA (Greedy, DP), Microprocessors (8085), Python (Functions, Libraries)</td>
          <td>"Fundamentals of Python" by Kenneth Lambert, "8085 Microprocessor" by Ramesh Gaonkar</td>
        </tr>
        <tr>
          <td>Semester 5</td>
          <td>AI (Search, ML Intro), Cloud Computing (IaaS, PaaS), Mobile App Development</td>
          <td>"Artificial Intelligence" by Elaine Rich, "Cloud Computing" by Rajkumar Buyya</td>
        </tr>
        <tr>
          <td>Semester 6</td>
          <td>Machine Learning (Regression, Classification), Blockchain (Hashing), IoT (Sensors, Arduino)</td>
          <td>"Hands-On ML" by Aurélien Géron, "Blockchain Basics" by Daniel Drescher</td>
        </tr>
        <tr>
          <td>Semester 7</td>
          <td>Big Data (Hadoop), Deep Learning (CNN, RNN), Research Methodology</td>
          <td>"Big Data" by Seema Acharya, "Deep Learning" by Ian Goodfellow</td>
        </tr>
        <tr>
          <td>Semester 8</td>
          <td>Internship, Emerging Technologies, Final Viva</td>
          <td>Industry Journals, IEEE Papers, Final Year Project Guide</td>
        </tr>
      </tbody>
    </table>
  </div>

  <div id="youtubeModal" class="modal">
    <div class="modal-content">
      <span class="close" onclick="document.getElementById('youtubeModal').style.display='none'">&times;</span>
      <h3>Recommended YouTube Channels & Websites</h3>
      <ul>
        <li><strong>YouTube Channels:</strong>
          <ul>
            <li><a href="https://www.youtube.com/c/CodeWithHarry" target="_blank">CodeWithHarry</a></li>
            <li><a href="https://www.youtube.com/c/ApnaCollegeOfficial" target="_blank">Apna College</a></li>
            <li><a href="https://www.youtube.com/c/GeeksforGeeks" target="_blank">GeeksforGeeks</a></li>
            <li><a href="https://www.youtube.com/c/NesoAcademy" target="_blank">Neso Academy</a></li>
            <li><a href="https://www.youtube.com/c/edurekaIN" target="_blank">Edureka</a></li>
          </ul>
        </li>
        <li><strong>Websites:</strong>
          <ul>
            <li><a href="https://www.geeksforgeeks.org" target="_blank">GeeksforGeeks</a></li>
            <li><a href="https://www.w3schools.com" target="_blank">W3Schools</a></li>
            <li><a href="https://www.javatpoint.com" target="_blank">JavaTpoint</a></li>
            <li><a href="https://www.coursera.org" target="_blank">Coursera</a></li>
            <li><a href="https://www.kaggle.com" target="_blank">Kaggle</a></li>
          </ul>
        </li>
      </ul>
    </div>
  </div>
</body>
</html>

