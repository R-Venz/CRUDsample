# CRUDSample Project

## Project Overview
The CRUDSample project is a basic CRUD (Create, Read, Update, Delete) application built with C++ and MySQL. It provides a simple GUI for managing data in a MySQL database using Visual Studio 2022 and demonstrates fundamental database interactions.

## Prerequisites
To set up and run this project, ensure you have the following installed:

- **Visual Studio 2022 (Community or higher)** with:
  - Desktop Development with C++
  - CLI (Command Line Interface) Support
  - Class Designer (for project structure visualization)

- **MySQL Server** and **MySQL Workbench**: Both can be downloaded via the [MySQL Installer](https://dev.mysql.com/downloads/installer/).

- **MySQL Connector Libraries**:
  - [MySQL Connector/C++](https://dev.mysql.com/downloads/connector/cpp/)
  - [MySQL Connector/NET](https://dev.mysql.com/downloads/connector/net/)

## Setup Instructions

### 1. Install Required Software
1. **Visual Studio 2022**: [Download here](https://visualstudio.microsoft.com/vs/community/)
   - During installation, select **Desktop development with C++** and enable CLI and Class Designer options.

2. **MySQL Installer**: [Download here](https://dev.mysql.com/downloads/installer/)
   - Install MySQL Server, MySQL Workbench, and required connectors (MySQL Connector/C++ and MySQL Connector/NET).

### 2. Set Up the MySQL Database in MySQL Workbench
1. **Open MySQL Workbench** and connect to your MySQL Server instance.
2. Go to **Server** > **Data Import**.
3. Select **Import from Self-Contained File** and browse to the `database_backup.sql` file located in the `database` folder of the project directory.
4. Under **Default Schema to be Imported To**, select the database schema or create a new one by typing a schema name (Workbench will create it automatically).
5. Click **Start Import** to run the import process.
6. Once the import is complete, go to **Schemas** and click the **Refresh** icon to verify that the new schema and tables are set up.

### 3. Clone the Repository
1. Open **Visual Studio 2022**.
2. On the Start Page, click **"Clone a repository"**.
3. Enter the repository URL and choose a local path.
4. Click **"Clone"** to download the project files.

### 4. Open and Build the Project
1. Locate and open the `CRUDSample.sln` solution file in Visual Studio.
2. Build the solution by selecting **Build -> Build Solution** or pressing `Ctrl + Shift + B`.

### 5. Run the Application
Choose one of the following options:
1. **Run Executable Directly**:
   - Navigate to the `Release` folder and open the executable file.

2. **Run from Source in Visual Studio**:
   - Click **Start** (or press `F5`) to run the application directly from Visual Studio.

## Project Structure
CRUDSample/
├── database_backup.sql       # SQL script for database schema and sample data
├──CRUDsample/
│   ├── *.cpp                     # C++ source files
│   └── *.h                       # C++ header files
├── Release/
│   └── CRUDSample.exe            # Compiled executable
├── CRUDSample.sln                # Visual Studio solution file
└── README.md                     # Project documentation
