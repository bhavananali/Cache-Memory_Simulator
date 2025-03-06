
# **Advanced Cache Simulator**

## **Overview**
The **Advanced Cache Simulator** is a C++ program that simulates different cache memory management techniques to analyze their performance. It supports:
- Various **replacement policies**: LRU, FIFO, LFU, MRU.  
- **Write policies**: Write-Through and Write-Back.  
- Detailed performance metrics such as **hit ratio**, **miss ratio**, and **total access time**.  

This project is modular, with separate files for cache management, metrics calculation, and configuration, making it easy to extend or modify.

---

## **Features**
- **Replacement Policies:**  
  - **LRU:** Least Recently Used  
  - **FIFO:** First In, First Out  
  - **LFU:** Least Frequently Used  
  - **MRU:** Most Recently Used  

- **Write Policies:**  
  - **Write-Through:** Updates main memory immediately on a write hit.  
  - **Write-Back:** Updates main memory only when a cache block is replaced.  

- **Performance Metrics:**  
  - Hit Ratio  
  - Miss Ratio  
  - Total Access Time  

---

## **Project Structure**
```
Advanced_Cache_Simulator/
├── main.cpp          # Main execution logic
├── cache.h           # Cache management header
├── cache.cpp         # Cache management implementation
├── metrics.h         # Metrics calculation header
├── metrics.cpp       # Metrics calculation implementation
├── config.h          # Configurations and enumerations
├── Makefile          # Build automation
├── README.md         # Documentation (this file)
```

---

## **Dependencies**
- **C++11 or higher**  
- **g++ (GNU Compiler Collection)** for Linux/Mac or **MinGW** for Windows.  

---

## **How to Build**
Open a terminal in the project directory and run:
```bash
make
```
This will compile the code and generate an executable named **`cache_simulator`**.

---

## **How to Run**
Run the compiled executable:
```bash
./cache_simulator
```

---

## **Usage Example**
```
Enter cache size (in blocks): 4
Enter block size: 16
Choose Replacement Policy:
1. LRU
2. FIFO
3. LFU
4. MRU
Choice: 1
Choose Write Policy:
1. Write-Through
2. Write-Back
Choice: 2
Enter memory address to access (-1 to exit): 10
Cache Miss
Enter memory address to access (-1 to exit): 22
Cache Miss
Enter memory address to access (-1 to exit): 10
Cache Hit
Enter memory address to access (-1 to exit): -1

Total Accesses: 3  
Cache Hits: 1  
Cache Misses: 2  
Hit Ratio: 33.33%  
Miss Ratio: 66.67%  
```

---

## **Key Functions Explained**
### `bool access(int address)`
- Checks if the requested address is in the cache.  
- Returns **`true`** for a cache hit and **`false`** for a miss.  

### `void replaceBlock(int address)`
- Replaces a block in the cache based on the chosen replacement policy.  

### `void printMetrics()`
- Displays hit/miss counts, ratios, and total access time.  

---

## **Makefile Commands**
- **`make`**: Compiles the code.  
- **`make clean`**: Removes compiled files.  
```bash
make clean
```

---

## **Possible Extensions**
- **Support for set-associative mapping.**  
- **More replacement policies:** Random, Optimal.  
- **GUI interface for simulation.**  

---

## **Contributing**
1. Fork the repository.  
2. Create a new branch: **`git checkout -b feature-branch`**  
3. Commit your changes: **`git commit -m 'Add feature'`**  
4. Push to the branch: **`git push origin feature-branch`**  
5. Create a pull request.  

---

## **License**
This project is licensed under the **MIT License** - see the **`LICENSE`** file for details.

---

## **Contact**
For any queries or suggestions, feel free to reach out!

---
