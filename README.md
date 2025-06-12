# Personal Development Plan

---

### Learning Goal 01:

**LG 01** Plans and executes a project in their track at level 2 of the HBO-i framework regarding autonomy and complexity, in an agile way

**In my own words:** I want to become a competent programmer in C/C++ while working on my Smart Radiator Thermostat project. My focus is on software optimization and embedded systems development, improving my ability to write efficient and structured code for hardware interaction, ensuring stable motor control and sensor data processing.

To achieve this, I will follow an agile approach. This aligns with HBO-i Level 2, as I work in a structured environment with an unpredictable context, where the problem is given, but I independently determine the approach and solve interactive issues throughout the project.

### Learning Goal 02:

**LG 02** Demonstrates professional skills at level 2 in the focus areas: future-oriented organization, investigative ability, personal leadership, and targeted interaction.

**In my own words:** I will plan and carry out my Smart Radiator Thermostat project based on clear requirements, making sure the process is well-organized (future-oriented organization: process management). I will approach problems in a structured way, figuring out what I still need to learn and planning my research steps (investigative ability: methodical problem approach). To improve my skills, I will reflect on my progress and adjust my learning when needed (personal leadership: personal development). I will also work closely with my team and other important people involved to ensure good communication and a successful result (targeted interaction: partners).

---

### Week 1 – 24.02

**Learning Goal 01**

- Join a project group
    
- Contribute to the selection of a feasible and technically interesting project idea
    

**Learning Goal 02**

- Exchange and discuss potential ideas with the team member
    
- Define personal focus areas and expectations within the project
    

**Evidence:**

- [Brainstorm list](Evidence/Braimstorm.md)
    
- [Personal Focus Areas](Evidence/Personal%20Focus%20Areas)
    

**Reflection:**  
We came up with a project idea pretty quickly, which really helped us get started with a clear goal. I was interested in doing something related to smart home technology, and luckily my teammate liked the idea too. Since it’s just the two of us, we don’t have any set roles or a leader, but that actually works well. We talk directly and make decisions together, which makes everything easier and keeps communication clear. Overall, I think we work well as a team, and I’m excited to see where the project goes.

---

### Week 2 – 10.03

**Learning Goal 01**

- Begin working through the INES and OSCO course to improve understanding of C
    
- Complete INES/OSCO C assignments
    

**Learning Goal 02**

- Finalize and document the initial project idea
    

**Evidence:**

- [C Assignments](https://github.com/FontysVenlo/ines-course-exercises-FilimonovD/blob/main/src/main.c)
    
- [Initial project idea](https://github.com/FontysVenlo/prj4e-repository-group_e03/blob/main/analysis/Smart_Radiator_Thermostat_Project.pdf)
    

**Reflection:**  
This week, I continued learning C and worked through the INES course to refresh and deepen my understanding. Some parts were still a bit tricky, but I noticed that things are starting to make more sense again. We also finalized and documented our project idea, which gave us a clearer roadmap for the next steps. Overall, it was a productive week where I made progress both in planning and technical skills.

---

### Week 3 – 17.03

**Learning Goal 01**

- Continue with INES assignments
    

**Learning Goal 02**

- Think about necessary components and ways to realize the project
    

**Evidence:**

- [C Assignments](https://github.com/FontysVenlo/ines-course-exercises-FilimonovD/tree/main/PlatformIO/Projects)
    
- [Components](Evidence/Components)
    

**Reflection:**  
This week, I continued with the embedded-specific INES assignments and focused on learning more about PWM and I2C. PWM gave me a better understanding of how motor speed and control can be managed through signal modulation. I also worked with an I2C display for the first time, which helped me understand how communication between the microcontroller and external devices works using only two wires. It was a good first step in learning how to interface components for our project. On top of that, I started thinking more about the components we’ll need and how everything could be connected. Overall, I feel like I’m starting to understand the practical side of embedded development better.

---

### Week 4 – 24.03

**Learning Goal 01**

- Finalize the list of key hardware components to enable early prototyping
    
- Create a sketch
    

**Learning Goal 02**

- Research and summarize basics of 3D printing (materials, tolerances, limitations)
    
- Gather information on motor types and select a suitable one
    
- Create and document a component list
    

**Evidence:**

- [Final component list](https://github.com/FontysVenlo/prj4e-repository-group_e03/blob/main/analysis/Component%20List.md)
    
- [Sketch](https://github.com/FontysVenlo/prj4e-repository-group_e03/blob/main/analysis/Design/Idea_Sketch.pdf)
    
- [3D Printing Information](https://github.com/FontysVenlo/prj4e-repository-group_e03/blob/main/analysis/Design/3D%20Printing%20for%20Smart%20Radiator%20Thermostat.md)
    
    

**Reflection:**  
We finalized our list of components and started thinking more seriously about how everything will come together and created a sketch. While we originally focused on selecting parts, we realized we hadn’t properly considered power management. Looking deeper into the motor-driver combination helped us identify and fix that issue.

Researching different motor types was helpful — it gave us a better understanding of the trade-offs between options. In the end, we chose a stepper motor because of its precision, which fits well with our project goals. I also looked into the basics of 3D printing to understand what’s possible in terms of housing and tolerances.

Our communication was effective throughout the week. We made decisions together and kept a clear shared vision of how the system should function. It feels like the project is really starting to take shape now.

---

### Week 5 – 31.03

**Learning Goal 01**

- Explore basic LoRa communication and message structure
    
- Research code to power and control stepper motors
    

**Learning Goal 02**

- Explore available libraries and documentation for components (LoRa, stepper driver, display, etc.)
    

**Evidence:**

- [LoRa Documentation](https://lora.readthedocs.io/en/latest/)
    
- [Documentation Motor](https://docs.rs-online.com/d369/A700000008919642.pdf)

- [Documentation Motor Driver](https://www.analog.com/media/en/technical-documentation/data-sheets/tmc2209_datasheet_rev1.09.pdf)


    

**Reflection:**  
This week, I focused on understanding the theory behind LoRa communication. I learned how the technology works, especially the way it enables long-range, low-power data transfer. Even though we didn’t have the components yet, going through the documentation helped me build a basic understanding of how we’ll later implement communication between the remote and the device.

I also looked into how motor control works, particularly with stepper motors. I learned about how drivers handle the actual movement. Reading through available libraries and documentation for components like the display, motor driver, and LoRa module gave me a better idea of what’s possible and what the software side will involve later on.

Even though this week was more theoretical, it was valuable preparation. I feel more confident about what we’ll need to do once the hardware arrives.

---

### Weeks 6 & 7 – 08.04 and 15.04 | Project Weeks 1 & 2

**Learning Goal 01**

- Soldering motor, motor driver and power supply
    
- Connect and test stepper motor, driver, and power supply
    
- Begin setting up and testing LoRa communication between remote and device
    
- 3D print the first version of mechanical parts for actuator housing
    

**Learning Goal 02**

- Define concrete sprint goals for the upcoming development phase
    
- Set up a lightweight Scrum workflow with sprint planning and daily check-ins
    
- Document progress and issues using a shared GitHub board
    

**Evidence:**

- [Motor test code](Evidence/Motor%20code.c)

- [LoRa Send Code](Evidence/LoRa%20send.c)

- [LoRa Recieve Code](Evidence/LoRa%20recieve.c)
    
- [3D print photo #add](#) 
    
- [Photo of soldering #add](#)

- [Project board](https://github.com/orgs/FontysVenlo/projects/620)
    

**Reflection:**  
During Project Week 1, we successfully powered the motor and driver for the first time and began writing the initial code to control the actuator. It was exciting to finally move from theory to hands-on work and see the hardware respond. We also set up the LoRa modules and prepared them for later testing, which helped us understand the communication flow between the remote and the main unit.

In parallel, we 3D printed some basic mechanical parts. It was our first time working with a 3D printer for this project, and it gave us a good introduction to how mechanical and embedded elements come together. We also got a better idea of the tolerances and limitations of printed parts.

To support our workflow, we created a simple sprint board and held our first planning session. That really helped us stay organized and improved our focus and communication as a small team. Overall, these two weeks were a strong start to the practical phase of the project.

---

### Week 8 – 21.04

**Learning Goal 01**

- Begin exploring object-oriented programming in C++
    

**Learning Goal 02**

- Review and reflect on the first sprint: what went well, what needs improvement
    
- Coordinate with the team to align on shared understanding and upcoming steps
    

**Evidence:**

- [Starting C++](Evidence/GetToKnowCPP.cpp)

- [Sprint Review](Evidence/Sprint%20review.md)
    

**Reflection:**  
This week, I started working with C++ and began learning how to structure embedded code using classes and other object-oriented features. The syntax took a bit of getting used to, but I’m beginning to see how it can make the codebase more organized and scalable as the project grows.

We also spent some time fixing a few hardware connection problems that were affecting stability. Cleaning things up made the system run more reliably and set a better foundation for adding new features. Our communication continued to work well, which made it easier to solve issues and stay focused. Reviewing our sprint also helped us reflect on where we can plan better before starting the next development phase.

---

### Week 9 – 05.05

**Learning Goal 01**

- Continue gaining knowledge about C++ code
    

**Learning Goal 02**

- Get information about what is necessary to achieve real-time performance
    

**Evidence:**

- [Continue C++](Evidence/CPP.cpp)
    
- [Real Time](Evidence/Real%20Time%20Docu.md)
    

**Reflection:**  
This week, I continued learning more about C++ and worked on improving my understanding of how to apply object-oriented principles effectively in our embedded system. I started organizing parts of the code to make it cleaner and easier to maintain as we add more features.

I also looked into what’s required to make the system respond in real time. It was interesting to read about timing, interrupts, and how certain design choices can affect responsiveness. This helped me understand what we’ll need to keep in mind when we implement more time-critical functionality.

Overall, the week was productive — I made technical progress and got a clearer picture of the requirements for real-time behavior in embedded systems.

---

### Week 10 – 12.05

**Learning Goal 01**

- Design and iterate on 3D printable parts to house the stepper motor securely
    

**Learning Goal 02**

- Review and improve the mechanical design with teammate
    
- Discuss the assembly process to ensure mutual understanding of functional layout
    

**Evidence:**

- [3D Code](Evidence/3D_modelingV1.ipynb)

- [Photo 1](Evidence/MotorcasingV1.jpg)

- [Photo 2](Evidence/MotorcasingV2.jpg)
    

**Reflection:**  
This week, we worked on designing and improving the 3D printable parts for securely mounting the stepper motor. It was a good learning experience to see how small adjustments can make a big difference in fit and stability. Iterating on the design helped us move closer to a version that meets both functional and mechanical requirements.

Together with my teammate, we reviewed the overall mechanical setup and talked through the assembly process to make sure we both had a clear picture of how everything should come together. That helped avoid misunderstandings and made sure the design supports our technical goals.

---

### Week 11 – 19.05

**Learning Goal 01**

- Revisit previously written code in preparation for final integration
    

**Learning Goal 02**

- Conduct a hardware review to ensure all components support the current system design
    
- Collaborate with teammate to reflect on past decisions and their technical impact
    

**Evidence:**

- [New Sensor](Evidence/Sensor_Comparison.md)
    

**Reflection:**  
This week was mainly focused on preparation for the upcoming integration phase. While reviewing our current hardware setup, we found that the Honeywell HIH-4030 temperature sensor wouldn’t work well for our needs. Looking into alternatives gave me a clearer picture of what to pay attention to when selecting components.

We ended up choosing the waterproof DS18B20 sensor, which fits better into our setup and should be more reliable overall. Going through this process helped us avoid future issues and feel more confident about the current hardware.

We also made sure that both of us were on the same page regarding next steps. Overall, this week helped us get organized and ready for the final project weeks.

---

### Weeks 12, 13, 14 – 26.05, 02.06, 09.06a | Project Weeks 3–5

**Learning Goal 01**

- 3D print the final motor casing for stable mounting
    
- Develop and finalize the wireless remote firmware and screen interface
    
- Optimize and complete LoRa communication code, including confirmation and retries
    
- Integrate the temperature sensor and implement logic for calculating and adjusting target temperature
    
- Write motor control logic with real-time response
    
- Implement a calibration routine for initialization (if time permits)
    
- (Optional) Design and print housing for the remote control
    
- Assemble and test the entire system under realistic usage conditions
    

**Learning Goal 02**

- Maintain and update GitHub project board to track progress and outstanding tasks
    
- Run structured sprint meetings with teammate to set priorities, assign tasks, and track results
    

**Evidence:**

- [Photo Final 3D Printing](#)
    
- [Code](#)
    
- [Project board](https://github.com/orgs/FontysVenlo/projects/620)

**Reflection :** 


In the final weeks of the project, we were able to complete all key parts of the system. The new temperature sensor worked very well and was integrated into the setup without any problems. We finalized the code for motor control, the wireless remote, and LoRa communication. Everything came together smoothly, and we made steady progress toward a fully functional prototype.

When we noticed that a task wasn’t moving forward, we didn’t hesitate to switch and support each other — which helped us stay productive and motivated. One of the more difficult parts was 3D printing. Due to limited printer availability and long wait times caused by other student projects, it sometimes slowed us down. Still, we managed to get all necessary parts printed.

Overall, I had a lot of fun working on this project. It showed me that even small teams can create interesting and technically challenging projects when communication and collaboration are strong.
