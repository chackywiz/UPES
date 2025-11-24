

# 🐧 Assignment 1 – Unit-1: Linux Basics

**🎯 Objective:** Practice essential Linux commands and run sample lab scripts (Lab3 & Lab5).

---

## 📂 Selected Lab Files

* ✅ Lab3.sh
* ✅ Lab5.sh

---

## ⚙️ Commands, Outputs & Explanations

---

### 🔹 1. `pwd` – Print Working Directory

```bash
pwd
```

**Output:**

```bash
/home/student/Unit-1
```

📌 Prints the **current working directory**.

---

### 🔹 2. `ls` – List Directory Contents

```bash
ls
```

**Output (sample):**

```bash
Lab3.sh  Lab5.sh  Documents  Downloads
```

📌 Lists files and folders. `ls -l` → details, `ls -a` → hidden files.

---

### 🔹 3. `mkdir` – Make Directory

```bash
mkdir testfolder
```

📌 Creates a new folder.

---

### 🔹 4. `cd` – Change Directory

```bash
cd testfolder
pwd
```

**Output:**

```bash
/home/student/Unit-1/testfolder
```

📌 Moves between directories.

---

### 🔹 5. `rmdir` – Remove Empty Directory

```bash
rmdir testfolder
```

---

### 🔹 6. `touch` – Create Empty File

```bash
touch file1.txt
```

📌 Creates empty file / updates timestamp.

---

### 🔹 7. `cp` – Copy Files

```bash
cp file1.txt file2.txt
```

---

### 🔹 8. `mv` – Move / Rename Files

```bash
mv file2.txt renamed.txt
```

---

### 🔹 9. `rm` – Delete Files

```bash
rm renamed.txt
```

---

### 🔹 10. `cat` – View File

```bash
cat file1.txt
```

---

### 🔹 11. `nano` – Text Editor

```bash
nano file1.txt
```

---

### 🔹 12. `clear` – Clear Screen

```bash
clear
```

---

### 🔹 13. `echo` – Print Text

```bash
echo "Hello World"
```

---

### 🔹 14. `man` – Manual Pages

```bash
man ls
```

---

### 🔹 15. `whoami` – Current User

```bash
whoami
```

---

### 🔹 16. `who` – Logged-in Users

```bash
who
```

---

### 🔹 17. `passwd` – Change Password

```bash
passwd
```

---

### 🔹 18. `sudo` – Run as Admin

```bash
sudo ls /root
```

📌 Runs command as root.

---

### 🔹 19. `find` – Search Files

```bash
find . -name "*.txt"
```

---

### 🔹 20. `grep` – Search Inside Files

```bash
grep "Hello" file1.txt
```

---

### 🔹 21. `chmod` – Change Permissions

```bash
chmod 755 script.sh
chmod 644 file.txt
```

---

### 🔹 22. `chown` – Change Ownership

```bash
sudo chown chaya:chaya file1.txt
```

---

### 🔹 23. `df` – Disk Usage

```bash
df -h
```

---

### 🔹 24. `du` – Directory Size

```bash
du -sh Documents/
```

---

### 🔹 25. `top` – Process Monitor

```bash
top
```

📌 Press `q` to quit.

---

### 🔹 26. `ping` – Network Check

```bash
ping google.com
```

---

### 🔹 27. `ip a` – Show Network Info

```bash
ip a
```

---

### 🔹 28. `netstat` / `ss` – Active Connections

```bash
netstat -tuln
ss -tuln
```

---

### 🔹 29. `apt` – Package Manager

```bash
sudo apt update
sudo apt install git
sudo apt remove git
```

---

### 🔹 30. `ps` – List Processes

```bash
ps aux
```

---

### 🔹 31. `kill` – Kill Process

```bash
kill 1234
kill -9 1234
```

---

### 🔹 32. `shutdown` & `reboot`

```bash
sudo shutdown now
sudo shutdown -r now
```

---

## 🧪 Lab File Execution

### 🔹 Lab3.sh

```bash
./Lab3.sh
```

**Output:**

```bash
Hello, Linux World!
```

---

### 🔹 Lab5.sh

```bash
./Lab5.sh
```

**Output:**

```bash
Today is:
Tue Sep 9 20:45:02 IST 2025
```

---

## ❓ Extra Questions

**Q1. Difference between `chmod` and `chown`?**

* `chmod` → change permissions (rwx).
* `chown` → change ownership (user/group).

**Q2. How to check current directory & user?**

```bash
pwd
whoami
```

**Q3. Why use `sudo`?**
Runs commands as root with admin privileges.

**Q4. How to stop an unresponsive process?**
Use `ps aux` to find PID, then `kill -9 PID`.

---

## ✅ Conclusion

This assignment covered:

* **Basic Linux commands** (navigation, files, search).
* **Admin commands** (sudo, user management, chmod, chown).
* **System monitoring** (df, du, top, ps, kill).
* **Networking & packages** (ping, ip a, apt).
* **Shutdown & reboot** operations.
* **Lab scripts** execution (Lab3 & Lab5).

terminal screenshots 
![alt text](<lab 1.png>)
![alt text](<lab 1.2.png>)

---



