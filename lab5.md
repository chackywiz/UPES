
# 🐧 Lab 5 – Starter Kit & Automation

## 🎯 Objective

The goal of this lab is to build a **starter project environment automatically** using a shell script.

---

## ⚙️ Tasks

### 🔹 1. Shell Script – `starter_kit.sh`

```bash
#!/bin/bash
# Lab 5 – Starter Kit Script
# This script sets up a basic project environment with folders and README files.

# Create project structure
mkdir -p project/scripts project/docs project/data

# Add placeholder README.md in each folder
echo "# Scripts Folder" > project/scripts/README.md
echo "# Documentation Folder" > project/docs/README.md
echo "# Data Folder" > project/data/README.md

# Print success message
echo "Starter Kit Ready!"
```

✅ **Make script executable:**

```bash
chmod +x starter_kit.sh
```

✅ **Run script:**

```bash
./starter_kit.sh
```

---

### 🔹 2. Output (Sample Screenshot)

When you run the script, your terminal should show:

```bash
kali@kali:~$ ./starter_kit.sh
Starter Kit Ready!
```

---

### 🔹 3. Documentation – `LAB_extra.md`

````markdown
# 📄 LAB_extra.md – Lab 5 

## 📝 Purpose of Script
The `starter_kit.sh` script automates the setup of a standard project structure by creating the following folders:
- `scripts/` → for code or automation scripts  
- `docs/` → for documentation  
- `data/` → for datasets or input files  

It also places a placeholder `README.md` in each folder for better organization.  

---

## 🖥️ Example Run
```bash
kali@kali:~$ ./starter_kit.sh
Starter Kit Ready!
````

![Example Run Screenshot](./screenshots/Screenshot%202025-09-10%20003335.png)

---

## ❓ Extra Questions

### 1. What does `mkdir -p` do?

* The `-p` flag tells `mkdir` to **create parent directories as needed**.
* Example:

  ```bash
  mkdir -p project/scripts
  ```

  If `project/` doesn’t exist, it will be created automatically before making `scripts/`.

### 2. Why is automation useful in DevOps?

* Ensures **consistency** → environments are always set up the same way.
* Saves **time and effort** → no need for manual repetitive tasks.
* Reduces **human error** → fewer mistakes during setup.
* Enables **scalability** → large projects and teams can onboard quickly.

---

## 📦 Deliverables

1. `starter_kit.sh` → Shell script for environment setup.
2. `LAB_extra.md` → Documentation with purpose, example run, and Q\&A.
3. `LAB_extra.pdf` → Export of the `.md` file into PDF for submission.

````

---



---

