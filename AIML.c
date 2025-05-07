<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>AIML Semester Study Plan</title>
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
  </style>
</head>
<body>
  <div class="container">
    <h1>AIML Semester Study Plan</h1>
    <nav>
      <a onclick="showYouTubeSuggestionsModal()">YouTube Channels & Websites</a>
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
      <ul>
        <li><strong>YouTube Channels:</strong>
          <ul>
            <li>Krish Naik</li>
            <li>CodeBasics</li>
            <li>StatQuest</li>
            <li>Simplilearn</li>
            <li>Edureka</li>
          </ul>
        </li>
        <li><strong>Websites:</strong>
          <ul>
            <li><a href="https://www.kaggle.com" target="_blank">Kaggle</a></li>
            <li><a href="https://scikit-learn.org" target="_blank">Scikit-learn</a></li>
            <li><a href="https://pytorch.org" target="_blank">PyTorch</a></li>
            <li><a href="https://towardsdatascience.com" target="_blank">Towards Data Science</a></li>
          </ul>
        </li>
      </ul>
    </div>
  </div>

  <script>
    const topicDetails = {
      "Mathematics for AIML": "Linear algebra, statistics, probability and optimization.",
      "Python Programming": "Basics of Python, data structures, OOPs, modules.",
      "Data Structures": "Stacks, queues, trees, graphs, searching and sorting algorithms.",
      "Machine Learning": "Supervised and unsupervised learning, algorithms like SVM, Decision Trees.",
      "Artificial Intelligence": "Knowledge representation, reasoning, problem solving, expert systems.",
      "Deep Learning": "Neural networks, CNNs, RNNs, backpropagation, TensorFlow/PyTorch.",
      "NLP": "Tokenization, POS tagging, text classification, sentiment analysis.",
      "Computer Vision": "Image processing, object detection, OpenCV basics.",
      "Big Data Analytics": "Hadoop, Spark, MapReduce, NoSQL databases.",
      "Reinforcement Learning": "Q-learning, MDPs, policy gradients.",
      "AI Ethics": "Bias, fairness, explainability, accountability in AI.",
      "Model Deployment": "Flask, FastAPI, Streamlit, Docker, REST APIs.",
      "Cloud Computing": "AWS, Azure, cloud deployment, storage.",
      "IoT and AI": "Smart sensors, edge computing, real-time analytics.",
      "Capstone Project": "End-to-end AI/ML project involving real-world data and deployment.",
      "AI in Industry": "Industry trends, use cases, deployment challenges.",
      "Advanced Topics in AI": "GANs, transformers, large language models.",
      "AI Research Paper Review": "Research methodology, reviewing AI papers.",
      "Data Privacy & Security": "Privacy-preserving ML, secure federated learning.",
      "Product Development": "Product design, A/B testing, UX for AI.",
      "Startup & Innovation": "Entrepreneurship, pitching AI ideas, incubation."
    };

    const referenceNotes = {
      "Machine Learning": "Book: Hands-On ML by Aurélien Géron, YouTube: Krish Naik, StatQuest.",
      "Deep Learning": "Book: Deep Learning by Ian Goodfellow, YouTube: Deeplearning.ai.",
      "NLP": "Courses: CS224n (Stanford), YouTube: NLP with Friends.",
      "Big Data Analytics": "Books: Big Data by Seema Acharya, YouTube: Simplilearn, Edureka.",
      "Model Deployment": "Flask/Streamlit tutorials, YouTube: Krish Naik, Cloud deployment via AWS."
    };

    const studyPlan = {
      "Semester 1": ["Mathematics for AIML", "Python Programming", "Data Structures"],
      "Semester 2": ["Machine Learning", "Artificial Intelligence", "Cloud Computing"],
      "Semester 3": ["Deep Learning", "NLP", "Big Data Analytics"],
      "Semester 4": ["Computer Vision", "IoT and AI", "AI Ethics"],
      "Semester 5": ["Reinforcement Learning", "Model Deployment", "AI Ethics"],
      "Semester 6": ["Cloud Computing", "Capstone Project", "AI in Industry"],
      "Semester 7": ["Advanced Topics in AI", "AI Research Paper Review", "Data Privacy & Security"],
      "Semester 8": ["Capstone Project", "Product Development", "Startup & Innovation"]
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
      const conceptModal = document.getElementById("conceptModal");
      const youtubeModal = document.getElementById("youtubeModal");
      if (event.target === conceptModal) {
        conceptModal.style.display = "none";
      } else if (event.target === youtubeModal) {
        youtubeModal.style.display = "none";
      }
    };

    function showYouTubeSuggestionsModal() {
      document.getElementById("youtubeModal").style.display = "block";
    }
  </script>
</body>
</html>

