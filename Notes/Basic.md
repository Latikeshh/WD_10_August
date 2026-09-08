# Software Development Life Cycle (SDLC) & Architecture Overview

## 1. The Software Development Life Cycle (SDLC)
The **Software Development Life Cycle (SDLC)** is a structured process used by development teams to design, develop, and test high-quality software. 

### Core Phases of SDLC:
* **Requirement Gathering:** Defining the scope, goals, and user needs for the software project.
* **Development (In Process):** Writing the actual code based on the project requirements.
* **Testing:** Evaluating the software to identify errors, bugs, or defects, ensuring a stable and bug-free product.
* **Deployment:** Releasing the finalized software application to a production environment for users.
* **Maintenance:** Monitoring, updating, and fixing issues in the software post-release to ensure continuous performance.

---

## 2. Software Architecture: The 3-Tier Model
Modern web applications typically follow a **3-Tier Architecture**, which cleanly separates user interface, business logic, and data storage functions.

| Tier | Layer | Core Technologies & Frameworks |
| :--- | :--- | :--- |
| **Presentation Tier** | Frontend (Client-side user interface) | HTML, CSS, JavaScript (JS), Bootstrap (BS), React.js |
| **Logic Tier** | Middle Layer (Server-side business logic) | Java, Python, .NET, Node.js, PHP, Express.js |
| **Data Tier** | Database (Storage and data management) | SQL (Structured), MongoDB (NoSQL) |

---

## 3. Communication: Human vs. Computer Languages
A language is a **medium of communication**. Just as two individuals need a shared language (e.g., English, Hindi, or Marathi) to interact, humans require a specialized bridge to interact with machines.

Computers operate natively on **Binary Language** (0s and 1s), which is highly impractical for humans to write directly. To solve this, humans use **Programming Languages** (like C, Python, Java) to write instructions that are ultimately translated for the computer.

### Language Comparison
* **Normal Languages (Human-to-Human):** Hindi, English, Marathi, Spanish, etc.
* **Programming Languages (Human-to-Machine):** C, Python, Java, JavaScript, .NET, etc.

### The Code Execution Workflow
1. **Human Intent:** The developer writes a readable program (e.g., `a = 10`, `b = 20`).
2. **Set of Instructions:** The program defines logic to achieve an outcome (e.g., finding a sum).
3. **Compiler/Interpreter:** Translates human-readable high-level code down into a machine-readable format.
4. **Binary Code:** The system executes the instructions at the hardware level using `0`s and `1`s.
5. **Output Generation:** The computer sends back the finalized results to the human user (e.g., Output: `30`).

---

## 4. Levels of Programming Languages
Programming languages are categorized into distinct levels based on how close they are to human speech versus machine hardware.

* **Low-Level Language:** Pure **Binary Language** (Machine Code). It interacts directly with hardware but is difficult for humans to read or write.
* **Middle-Level Language:** Language that shares characteristics of both high and low levels (e.g., **C Language**). It supports system-level manipulation while remaining human-readable.
* **High-Level Language:** Highly abstract languages designed to mirror human logic and vocabulary (e.g., **Java, Python, .NET**). They rely heavily on compilers or interpreters to run.

---

## 5. Application Types: Standalone vs. Web Applications
Developers leverage different stacks of programming tools depending on the architecture and environment of the target application.

| Attribute | Standalone Applications | Web Applications |
| :--- | :--- | :--- |
| **Definition** | Applications designed to run locally on a single machine or device. | Applications that run over the internet via a web browser. |
| **Core Technologies** | C, C++, Java, Python | HTML, CSS, JavaScript, Bootstrap, React.js |
| **Installation** | **Requires manual installation** on the user's specific local operating system. | **Does not require installation**; accessible instantly via a URL. |
| **Examples** | VSCode,Eclipse, IdlePython. | FortuneCloudIndia.com, CrevitaIndia.com, social network sites. |
