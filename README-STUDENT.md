<div align="center">(optional) Project photo</div>
<h1 align="center">Project Name</h1>
<p align="center"><strong>One-line description</strong>
<br/>

<h2>About</h2>
<strong>FILL THIS IN</strong><br/>
Answer these questions: What is your project? Why'd you build it?

My project involves utilizing the open source software, OpenCFU, and adding to it the ability to calculate density (cfu/mL), buttons to calculate the dilution factor, and overall reducing its variance (increasing accuracy) using the annotated dataset for deep learning by editing its current masks and formulas. Another goal was for it to classify coagulase negative staphylococcus or bacillus cereus, the top two most common blood culture contaminants, responsible for 70-80% of samples. I wanted to improve this technology as it is currently a manual process does by CLS (clinical laboratory scientists) who work long hours in the lab, and to increase their efficiency and ease their workload. Automated machines can also be very expensive, limiting access to certain hospital budgets. Thus I wanted to make this more accessible to others.

<h2>Goal and requirements</h2>
<strong>FILL THIS IN</strong><br/>
 Summarize your goals, non-goals, and project requirements from your design doc. Make sure to link your design doc here as well.

This project has two objectives: 
   
   1st - accurately count the amount of colonies present on the blood culture plate and use the following formula to get cfu/mL
(Amount of colonies*dilution factor)/plate volume
  
   2nd - identify if the bacteria is coagulase-negative staphylococci or bacillus cereus

Design doc link: https://docs.google.com/document/d/10YNkCs68rQQmlnKruuMl40-eTFvVoR2egbQLWPs-eTA/edit?usp=sharing
 
 <h3>Sprint Goal</h3>
<strong>FILL THIS IN</strong><br/>
Potentially download OpenCFU into a Raspberry pi and prepare research slides for competition. 

<h2>Key learnings</h2>
<strong>FILL THIS IN</strong><br/>
So... what did you learn? (start this, but **come back to it at the end of the sprint**)

I learned a lot of the different approaches of AI, such as few shot modeling and how different algorithms to process images. In addition, I also learned a lot of what happens in the biology side, and current colony counting process in hospital laboratories. 

<h2>Running your project</h2>
<strong>FILL THIS IN</strong><br/>
How would I, or anyone who comes across this project, run this project? Make sure to include all the steps.

To run this project, you would have to download all of the files listed here onto VS Code. You can also download separate culture images online and test OpenCFU's accuracy by uploading the images to the software when it is booted. When the software is running, you can change the radius of colony that you are looking for, and verify OpenCFU's accuracy from an annotated dataset (one that provides the correct CFU values). You can calculate percent variance as well. 

<h2>Misc.</h2>
Feel free to add anything else you want here :)

<h2>Copyright</h2>
This project is licensed under the terms of the MIT license and protected by Udacity Honor Code and Community Code of Conduct. See <a href="LICENSE.md">license</a> and <a href="LICENSE.DISCLAIMER.md">disclaimer</a>.
