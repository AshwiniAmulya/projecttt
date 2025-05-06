<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>CSE Semester Study Plan</title>
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
      margin-bottom: 20px;
    }
    nav button {
      background-color: #007BFF;
      border: none;
      color: white;
      padding: 10px 20px;
      margin: 0 10px;
      border-radius: 8px;
      cursor: pointer;
    }
    nav button:hover {
      background-color: #0056b3;
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
    .hidden {
      display: none;
    }
    .channel {
      padding: 15px;
      margin-bottom: 15px;
      border: 1px solid #ccc;
      border-radius: 10px;
    }
    .channel a {
      text-decoration: none;
      color: #007BFF;
      font-size: 18px;
      font-weight: bold;
    }
    .channel a:hover {
      text-decoration: underline;
    }
    .channel p {
      margin: 5px 0 0;
    }
  </style>
</head>
<body>
  <div class="container">
    <h1>CSE Semester Study Plan & Learning Resources</h1>
    <nav>
      <button onclick="showTab('study')">Study Plan</button>
      <button onclick="showTab('youtube')">YouTube Channels</button>
    </nav>
 <div id="studyTab">
      <div id="studyPlan"></div>
    </div>

    <div id="youtubeTab" class="hidden">
      <h2>Top YouTube Channels for CSE</h2>
      <div class="channel">
        <a href="https://www.youtube.com/@NesoAcademy" target="_blank">@NesoAcademy</a>
        <p>Great for Computer Organization, OS, DBMS, DSA, and Digital Logic.</p>
      </div>
      <div class="channel">
        <a href="https://www.youtube.com/@freecodecamp" target="_blank">@freeCodeCamp</a>
        <p>Full courses on Web Development, Data Science, and more.</p>
      </div>
      <div class="channel">
        <a href="https://www.youtube.com/@GateSmashers" target="_blank">@GateSmashers</a>
        <p>Strong foundation in OS, CN, Compiler, DBMS, etc.</p>
      </div>
      <div class="channel">
        <a href="https://www.youtube.com/@ApnaCollegeOfficial" target="_blank">@ApnaCollege</a>
        <p>Beginner-friendly DSA and coding tutorials in Java/Python.</p>
      </div>
      <div class="channel">
        <a href="https://www.youtube.com/@codebasics" target="_blank">@codebasics</a>
        <p>Practical Data Science, SQL, and Python learning.</p>
      </div>
    </div>
  </div>

  <div id="conceptModal" class="modal">
    <div class="modal-content">
      <span class="close" onclick="document.getElementById('conceptModal').style.display='none'">&times;</span>
      <h3 id="modalTitle"></h3>
      <p id="modalContent"></p>
    </div>
  </div>

  <script>
    function showTab(tab) {
      document.getElementById('studyTab').classList.add('hidden');
      document.getElementById('youtubeTab').classList.add('hidden');
      document.getElementById(tab + 'Tab').classList.remove('hidden');
    }

    const topicDetails = {
      "Introduction to Programming": "Covers basics of programming languages, variables, loops, functions using C or Python.",
      "Mathematics I": "Linear Algebra, Calculus, and basic mathematical reasoning for computing.",
      "Basic Electronics": "Diodes, transistors, logic gates, and basic circuits used in computing devices.",
      "Environmental Science": "Awareness of environmental issues and sustainable development.",
      "Data Structures": "Arrays, linked lists, stacks, queues, trees, graphs and their algorithms.",
      "Mathematics II": "Probability, statistics, numerical methods, and matrices.",
      "Digital Logic": "Boolean algebra, combinational and sequential circuits.",
      "Computer Organization": "CPU architecture, memory hierarchy, instruction cycle.",
      "OOPs using C++/Java": "Classes, objects, inheritance, polymorphism, and encapsulation.",
      "Operating Systems": "Processes, threads, scheduling, memory management, file systems.",
      "Discrete Mathematics": "Set theory, logic, relations, functions, graphs, and combinatorics.",
      "Database Management Systems": "SQL, normalization, transaction management, indexing.",
      "Design and Analysis of Algorithms": "Sorting, searching, dynamic programming, greedy algorithms.",
      "Computer Networks": "OSI model, TCP/IP, routing, IP addressing.",
      "Software Engineering": "SDLC, requirements analysis, UML diagrams, testing.",
      "Web Development": "HTML, CSS, JavaScript, front-end and back-end basics.",
      "Artificial Intelligence": "Search algorithms, knowledge representation, machine learning intro.",
      "Machine Learning": "Supervised and unsupervised learning, model training, overfitting.",
      "Compiler Design": "Lexical analysis, parsing, syntax tree, code generation.",
      "Cloud Computing": "Virtualization, SaaS/PaaS/IaaS, cloud providers.",
      "Data Science": "Data wrangling, visualization, Pandas, NumPy, analysis.",
      "Internet of Things": "Sensors, microcontrollers, connectivity protocols.",
      "Cybersecurity": "Encryption, network security, authentication.",
      "Mini Projects": "Hands-on application of learned concepts in small teams.",
      "Internship": "Real-world experience in tech industries.",
      "Research Paper Writing": "Structure, citations, formatting for academic publication.",
      "Electives based on Interest": "Specialized courses like Blockchain, AR/VR, DevOps.",
      "Major Project": "Capstone project involving real-world problem-solving.",
      "Seminar": "Presentation and communication of a technical topic.",
      "Placement Preparation": "Aptitude, coding interviews, mock tests, soft skills."
    };
const referenceNotes = {
      "Introduction to Programming": "Reference: C Programming by Dennis Ritchie, Python Crash Course by Eric Matthes.",
      "Mathematics I": "Topics: Matrix Algebra, Limits, Derivatives, Integrals. Book: Higher Engineering Mathematics by B.S. Grewal.",
      "Data Structures": "Use GeeksforGeeks, NPTEL lectures, and the book by Seymour Lipschutz.",
      "Operating Systems": "Silberschatz book, Neso Academy videos.",
      "Machine Learning": "Andrew Ng's Coursera course, and Hands-On ML with Scikit-Learn.",
      "Web Development": "MDN Docs, FreeCodeCamp, HTML/CSS/JS projects.",
    };

    const studyPlan = {
      "Semester 1": ["Introduction to Programming", "Mathematics I", "Basic Electronics", "Environmental Science"],
      "Semester 2": ["Data Structures", "Mathematics II", "Digital Logic", "Computer Organization"],
      "Semester 3": ["OOPs using C++/Java", "Operating Systems", "Discrete Mathematics", "Database Management Systems"],
      "Semester 4": ["Design and Analysis of Algorithms", "Computer Networks", "Software Engineering", "Web Development"],
      "Semester 5": ["Artificial Intelligence", "Machine Learning", "Compiler Design", "Cloud Computing"],
      "Semester 6": ["Data Science", "Internet of Things", "Cybersecurity", "Mini Projects"],
      "Semester 7": ["Internship", "Research Paper Writing", "Electives based on Interest"],
      "Semester 8": ["Major Project", "Seminar", "Placement Preparation"]
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
      const modal = document.getElementById("conceptModal");
      if (event.target === modal) {
        modal.style.display = "none";
      }
    };
  </script>
</body>
</html>



