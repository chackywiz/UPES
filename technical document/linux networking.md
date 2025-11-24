

# **Linux Networking and Secure Shell (SSH) Configuration**

**Course:** Linux lab   
**Student Name:** Chayanika Thakran
**sap id:** [590026119]

## **1. Objective**

The objective of this project is to explore and implement Linux networking commands, establish secure communication between two computers using SSH, set up key-based authentication, monitor login activity via SSH logs, and transfer files securely using SSH-based methods.

---

## **2. Introduction**

Linux networking allows computers to communicate over local or global networks. Secure Shell (SSH) provides an encrypted channel for remote login, command execution, and file transfer, protecting data from unauthorized access.

This project demonstrates:

1. Network connectivity testing and interface management.
2. SSH configuration and key-based authentication.
3. Monitoring SSH activity through system logs.
4. Secure file sharing using SCP, Rsync, and SFTP.

---

## **3. Linux Networking Commands with Detailed Explanation**

### **3.1 `ifconfig` / `ip addr show`**

* **Purpose:** Displays all network interfaces and their IP addresses.
* **Command:**

```bash
ip addr show
```

* **Explanation:** Lists interfaces such as Ethernet (`eth0`), Wi-Fi (`wlan0`), and loopback (`lo`), along with IPv4/IPv6 addresses, MAC addresses, and interface status (UP/DOWN).
* **Use Case:** Identify your IP address and verify active network interfaces.
* **Example Output:**

```
2: eth0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500
    inet 192.168.1.10/24 brd 192.168.1.255 scope global eth0
```

---

### **3.2 `ping`**

* **Purpose:** Tests connectivity to a host.
* **Command:**

```bash
ping google.com
```

* **Explanation:** Sends ICMP Echo Requests to a target and waits for Echo Replies. Reports latency and packet loss.
* **Use Case:** Verify if the network connection is active and the host is reachable.
* **Example Output:**

```
64 bytes from 142.250.72.14: icmp_seq=1 ttl=116 time=23.4 ms
```

---

### **3.3 `hostname`**

* **Purpose:** Displays or sets the system hostname.
* **Command:**

```bash
hostname
```

* **Explanation:** Shows the computer’s network name used to identify it in a network. Can be temporarily changed using:

```bash
sudo hostname newname
```

---

### **3.4 `netstat` / `ss`**

* **Purpose:** Shows active network connections and listening ports.
* **Command:**

```bash
ss -tuln
```

* **Explanation:** Lists TCP/UDP connections and listening sockets. Useful to verify services such as SSH.
* **Example Output:**

```
Netid  State      Recv-Q Send-Q Local Address:Port  Peer Address:Port
tcp    LISTEN     0      128  0.0.0.0:22          0.0.0.0:*
```

---

### **3.5 `traceroute`**

* **Purpose:** Displays the route packets take to a host.
* **Command:**

```bash
traceroute google.com
```

* **Explanation:** Lists all intermediate routers (hops) between your system and the destination, along with latency.
* **Use Case:** Diagnose network delays or failures.

---

### **3.6 `curl` / `wget`**

* **Purpose:** Download files from the internet.
* **Commands:**

```bash
wget https://example.com/file.txt
curl -O https://example.com/file.txt
```

* **Explanation:** Fetches remote files over HTTP/HTTPS. `curl` can also be used for APIs.
* **Use Case:** Download resources or scripts securely.

---

### **3.7 `ssh`**

* **Purpose:** Connect securely to another system.
* **Command:**

```bash
ssh user@192.168.1.10
```

* **Explanation:** Opens an encrypted remote terminal session. Password-less login possible with keys.
* **Use Case:** Remote administration and command execution.

---

### **3.8 `scp`**

* **Purpose:** Copy files securely over SSH.
* **Commands:**

```bash
scp file.txt user@192.168.1.10:/home/user/
scp -r folder/ user@192.168.1.10:/home/user/
```

* **Explanation:** Encrypts file transfers. Recursive copy allows entire directories.
* **Use Case:** Securely transfer files between systems.

---

### **3.9 `ssh-keygen`**

* **Purpose:** Generate an SSH key pair for secure authentication.
* **Command:**

```bash
ssh-keygen -t ed25519 -C "chayanika@example.com"
```

* **Explanation:**

  * Creates a private key (stored locally) and a public key (shared with the server).
  * `ed25519` is modern, secure encryption.
* **Use Case:** Enables password-less SSH login.

---

### **3.10 `ssh-copy-id`**

* **Purpose:** Copy your public key to a server.
* **Command:**

```bash
ssh-copy-id user@192.168.1.10
```

* **Explanation:** Adds the public key to `/home/user/.ssh/authorized_keys` on the server, allowing secure login without a password.

---

### **3.11 `tail` / `journalctl`**

* **Purpose:** View SSH logs.
* **Commands:**

```bash
sudo tail -n 20 /var/log/auth.log
sudo journalctl -u sshd --since "1 hour ago"
```

* **Explanation:** Displays recent login attempts, successful logins (`Accepted publickey`) and failures.
* **Use Case:** Monitor SSH activity and detect unauthorized access.

---

## **4. SSH Key-Based Authentication**

1. **Generate Key Pair:**

```bash
ssh-keygen -t ed25519 -C "chayanika@example.com"
```

2. **Copy Public Key to Server:**

```bash
ssh-copy-id user@192.168.1.10
```

* After this setup, SSH login works without passwords.

---

## **5. SSH Configuration**

* File: `/etc/ssh/sshd_config`
* Recommended settings:

```
PermitRootLogin no
PasswordAuthentication no
PubkeyAuthentication yes
LogLevel VERBOSE
```

* Restart SSH service:

```bash
sudo systemctl restart sshd
```

---

## **6. File Sharing via SSH**

1. **SCP File Transfer:**

```bash
scp file.txt user@192.168.1.10:/home/user/
```

2. **SCP Folder Transfer:**

```bash
scp -r folder/ user@192.168.1.10:/home/user/
```

3. **Rsync Synchronization:**

```bash
rsync -avz folder/ user@192.168.1.10:/home/user/
```

4. **SFTP Interactive Transfer:**

```bash
sftp user@192.168.1.10
put file.txt
get file.txt
```

---

## **7. Security Best Practices**

* Use **key-based authentication** instead of passwords.
* Disable **root login** over SSH.
* Protect port 22 using **firewall rules**.
* Monitor **SSH logs** for suspicious activity.
* Use **strong passphrases** for private keys.

---

## **8. Results / Observations**

* SSH login with key authentication is successful without a password.
* Files transferred securely using SCP and Rsync.
* Logs show `Accepted publickey` for successful logins.
* `ping` and `traceroute` confirm connectivity and network path.

---

## **9. Conclusion**

This project demonstrates:

1. Linux networking commands for monitoring and troubleshooting.
2. Secure SSH setup with key-based authentication.
3. Monitoring SSH activity via logs.
4. Secure file transfer using SCP, Rsync, and SFTP.
5. Best practices for securing remote connections.

---

## **10. References**

1. [Linux Manual Pages](https://man7.org/linux/man-pages/)
2. [OpenSSH Documentation](https://www.openssh.com/manual.html)
3. [Ubuntu SSH Guide](https://help.ubuntu.com/community/SSH)

