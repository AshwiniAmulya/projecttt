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
 <script>
    const topicDetails = {
      "Signals and Systems": "Continuous and discrete signals, Fourier series, Laplace and Z-transform.",
      "Network Analysis": "Kirchhoff laws, Thevenin's and Norton's theorems, AC/DC analysis.",
      "Electronic Devices": "Diodes, BJTs, FETs, and their applications.",
      "Digital Electronics": "Boolean algebra, logic gates, flip-flops, counters, and memory.",
      "Control Systems": "Feedback, stability, time and frequency domain analysis.",
      "Electromagnetic Fields": "Maxwell's equations, transmission lines, waveguides.",
      "Analog Circuits": "Amplifiers, Op-Amps, filters, oscillators.",
      "Microprocessors and Microcontrollers": "8085/8086 architecture, instruction sets, interfacing.",
      "Communication Systems": "Modulation techniques, noise, transmission media.",
      "Digital Signal Processing": "Discrete Fourier Transform, FFT, filters, convolution.",
      "VLSI Design": "MOSFETs, CMOS design, layout and fabrication.",
      "Embedded Systems": "ARM architecture, real-time OS, interfacing.",
      "Antenna and Wave Propagation": "Antenna types, radiation pattern, Friis equation.",
      "Wireless Communication": "Cellular concepts, modulation, 4G/5G basics.",
      "Internet of Things": "IoT protocols, sensors, cloud integration."
    };

    const referenceNotes = {
      "Signals and Systems": "Reference: Oppenheim's Signals & Systems, NPTEL lectures.",
      "Microprocessors and Microcontrollers": "Use Mazidi’s 8051 book, Neso Academy videos.",
      "Digital Signal Processing": "Book by Proakis & Manolakis, YouTube: NPTEL ECE.",
      "Communication Systems": "Simon Haykin’s book, Ekeeda & Gate Smashers YouTube.",
      "VLSI Design": "Neil H. Weste book, NPTEL lectures, VLSI Academy YouTube."
    };

    const studyPlan = {
      "Semester 1": ["Signals and Systems", "Network Analysis", "Electronic Devices"],
      "Semester 2": ["Digital Electronics", "Control Systems", "Electromagnetic Fields"],
      "Semester 3": ["Analog Circuits", "Microprocessors and Microcontrollers", "Communication Systems"],
      "Semester 4": ["Digital Signal Processing", "VLSI Design", "Embedded Systems"],
      "Semester 5": ["Antenna and Wave Propagation", "Wireless Communication", "Internet of Things"],
      "Semester 6": ["Digital Image Processing", "Optical Communication", "Power Electronics"],
      "Semester 7": ["Radar Systems", "Advanced Embedded Systems", "Machine Learning for ECE"],
      "Semester 8": ["Project Work", "Internship", "Seminar"]
    };

    const container = document.getElementById("studyPlan");

    for (let semester in studyPlan) {
      const table = document.createElement("table");
      const thead = document.createElement("thead");
      thead.innerHTML = `<tr><th colspan="3">${semester}</th></tr><tr><th>Done</th><th>Topic</th><th>Brief Concept</th></tr>`;
      table.appendChild(thead);

      const tbody = document.createElement("tbody");
      studyPlan[semester].forEach(topic => {
        const tr = document.createElement("tr");

        const tdCheck = document.createElement("td");
        const checkbox = document.createElement("input");
        checkbox.type = "checkbox";
        checkbox.id = topic;
        tdCheck.appendChild(checkbox);

        const tdTopic = document.createElement("td");
        const label = document.createElement("label");
        label.htmlFor = topic;
        label.innerText = topic;
        tdTopic.appendChild(label);

        const tdDetail = document.createElement("td");
        const link = document.createElement("span");
        link.className = "detail-link";
        link.innerText = topicDetails[topic] || "Details coming soon.";
        link.onclick = () => {
          document.getElementById("modalTitle").innerText = topic;
          document.getElementById("modalContent").innerText = referenceNotes[topic] || "Detailed explanation and reference notes coming soon.";
          document.getElementById("conceptModal").style.display = "block";
        };
        tdDetail.appendChild(link);

        tr.appendChild(tdCheck);
        tr.appendChild(tdTopic);
        tr.appendChild(tdDetail);

        tbody.appendChild(tr);
      });

      table.appendChild(tbody);
      container.appendChild(table);
    }

    window.onclick = function(event) {
      const modals = [document.getElementById("conceptModal"), document.getElementById("youtubeModal")];
      modals.forEach(modal => {
        if (event.target === modal) {
          modal.style.display = "none";
        }
      });
    };

    function showYouTubeSuggestions() {
      document.getElementById("youtubeModal").style.display = "block";
    }
  </script>
</body>
</html>

