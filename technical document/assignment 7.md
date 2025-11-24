
### 🔹 1. Viewing All Processes

**Command:**
`ps aux`
📸 **![alt text](../1.png):** 


### 🌲 2. Process Tree
**Command:**
`pstree -p`
📸 **![alt text](../2.png):** 

### 📊 3. Real-Time Process Monitoring
**Command:**
`top`
📸 **![alt text](../3.png):** *



### ⚡ 4. Adjusting Process Priority
**Command 1:**
`nice -n 10 sleep 300 &`
**Command 2:**
`renice -n -5 -p 3050`
📸 **![alt text](../4.png)** 

---

### 🔧 5. CPU Affinity
**Command 1:**
`taskset -cp 3050`
**Command 2:**
`taskset -cp 1 3050`
📸 **![alt text](../5.png)** 

### 📂 6. I/O Scheduling Priority
**Command:**
`ionice -c 3 -p 3050`
📸 **![alt text](../6.png)** 

---

### 📑 7. File Descriptors Used by a Process
**Command:**
`lsof -p 3050 | head -5`
📸 **![alt text](../7.png)** 

---

### 🐛 8. Trace System Calls of a Process
**Command:**
`strace -p 3050`
📸 **![alt text](../8.png):** 

---

### 📡 9. Find Process Using a Port
**Command:**
`sudo fuser -n tcp 8080`
📸 **![alt text](../9.png)** 

### 📊 10. Per-Process Statistics
**Command:**
`pidstat -p 3050 2 3`
📸 **![alt text](../10.png)** 

---

### 🔐 11. Control Groups (cgroups)
**Command Sequence:**

```bash
sudo cgcreate -g cpu,memory:/testgroup
echo 50000 | sudo tee /sys/fs/cgroup/cpu/testgroup/cpu.cfs_quota_us
echo 100M | sudo tee /sys/fs/cgroup/memory/testgroup/memory.limit_in_bytes
echo 3050 | sudo tee /sys/fs/cgroup/cpu/testgroup/cgroup.procs
```

📸 **![alt text](../11.png)** 

---

### 🎯 12. Alternatives to nice / renice

You can show **one example** among these for demonstration, like:
`sudo chrt -f 50 sleep 1000`
📸 **![alt text](../12.png)** 

---

