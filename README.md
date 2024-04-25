
	██████╗ ██╗  ██╗██╗██╗      ██████╗ ███████╗ ██████╗ ██████╗ ██╗  ██╗███████╗██████╗ ███████╗
	██╔══██╗██║  ██║██║██║     ██╔═══██╗██╔════╝██╔═══██╗██╔══██╗██║  ██║██╔════╝██╔══██╗██╔════╝
	██████╔╝███████║██║██║     ██║   ██║███████╗██║   ██║██████╔╝███████║█████╗  ██████╔╝███████╗
	██╔═══╝ ██╔══██║██║██║     ██║   ██║╚════██║██║   ██║██╔═══╝ ██╔══██║██╔══╝  ██╔══██╗╚════██║
	██║     ██║  ██║██║███████╗╚██████╔╝███████║╚██████╔╝██║     ██║  ██║███████╗██║  ██║███████║
	╚═╝     ╚═╝  ╚═╝╚═╝╚══════╝ ╚═════╝ ╚══════╝ ╚═════╝ ╚═╝     ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚══════

# Philosophers 🧐
This project involves implementing the solution to the classical Dining Philosophers problem using the C programming language. The problem revolves around a scenario where multiple philosophers are seated around a round table. Each philosopher alternates between two states: thinking and eating. However, to eat, a philosopher needs two forks, one to their left and one to their right.

The challenge lies in preventing both starvation 😵‍💫 and deadlock 💀 among the philosophers simultaneously. This requires employing techniques of concurrency and process synchronization to ensure that each philosopher can eat without interrupting their neighbors and without incurring race conditions.

## Project Description 📖

This project is designed to explore advanced concepts of programming in C, such as threads 🧵, semaphores 🚦, or mutexes 👮, as well as to comprehend the challenges associated with concurrency and process synchronization in operating systems.

## Usage 🤟
Clone this repository to your local machine.
```bash
git clone git@github.com:alexhiguera/Philosophers.git
```
**Easy mode**
Compilation and  execute automatically
```bash
make play
```
**Good mode**
Set all parameters
```bash
make <num_philos> <time_to_die> <time_to_eat> <time_to_sleep> <num_of_times_each_philos_must_eat>
```
example:
```bash
make 3 1000 10 10 100
```

## Rules 📕
### 🍽️ Philosophers' States
Each philosopher can be in one of the following three states:
🤔 Thinking: The philosopher is pondering without attempting to eat.
🍴 Hungry: The philosopher has decided to eat and is waiting to get the forks.
🍲 Eating: The philosopher is using the forks and eating.

### 🍴 Use of Forks
Each philosopher requires two forks to start eating.
Forks are arranged around the table, and each philosopher has one fork to their left and one to their right.
A philosopher must acquire both adjacent forks to begin eating.

### 🔒 Synchronization
Synchronization mechanisms, such as mutexes or semaphores, are used to prevent race conditions and ensure mutual exclusion.
Rules are implemented to allow philosophers to acquire forks and start eating without causing deadlocks or starvation of other philosophers.

### 🏁 Race Conditions
Race conditions are avoided by coordinating philosophers' access to forks and ensuring that only one philosopher can eat at a time.

### ⏳ Starvation
Measures are taken to prevent philosophers from starving, ensuring that they all have fair opportunities to eat and are not indefinitely stuck waiting for forks.
These rules provide a framework for understanding the logic and operation of the program. For more details on the specific implementation, please refer to the source code and comments in the project.