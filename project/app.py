from flask import Flask, render_template, url_for
import os

app = Flask(__name__)

# Demo project data
PROJECTS = [
    {
        "id": 1,
        "title": "Flask E-commerce Backend",
        "summary": "Developed a secure e-commerce backend focusing on user authentication, product inventory management, order processing, and admin dashboards.",
        "tags": ["Python", "Flask"],
        "image": "project1.png",
        "details": "This backend supports JWT auth, role-based access, and RESTful APIs for products, categories, carts, and orders."
    },
    {
        "id": 2,
        "title": "Responsive Portfolio Site",
        "summary": "This site itself is a project! It demonstrates responsive design skills using Bootstrap 5 and custom CSS/JS.",
        "tags": ["HTML", "CSS", "JS"],
        "image": "project2.png",
        "details": "Built with Flask for templating, featuring smooth scrolling, timeline UI, and project modals."
    },
    {
        "id": 3,
        "title": "Data Visualization Tool",
        "summary": "A small Flask application designed to securely log and visualize data from uploaded CSV files using charts.",
        "tags": ["Python", "Flask"],
        "image": "project3.png",
        "details": "Includes upload validation, SQLAlchemy persistence, and Chart.js visualizations."
    },
]

@app.route("/")
def index():
    return render_template("index.html", projects=PROJECTS)

@app.route("/projects/<int:project_id>")
def project_detail(project_id: int):
    project = next((p for p in PROJECTS if p["id"] == project_id), None)
    if not project:
        # Basic 404
        return render_template("project_detail.html", project=None), 404
    return render_template("project_detail.html", project=project)

if __name__ == "__main__":
    port = int(os.environ.get("PORT", 5000))
    app.run(host="0.0.0.0", port=port, debug=True)
