# CarND-Controls-PID PROJECT REFLECTIONS
Self-Driving Car Engineer Nanodegree Program

---


## Effect of the P, I, D components: 
1. The P (proportional) component of amplified the correction in response to the error value, for instance a larger value resulted in the car taking larger turns than a smaller value for the same error value.
2. The I (integral) component seem to have have gradual effect correcting on the steering.
3. The D (differential) component had a larger impact when there we rapid changes in subsequent error values and there by dampened possible larger error values.

## Choice of final hyperparameters:
- The hyperparameters were tuned one at time starting with the proportional term, this term was tuned, by iteratively adjusted upwards and downwards in decreasing and increasing increments,  until the car was able to consistently steer it self back to the center of the track and make it around at least one turn.
- Then differential parameter was tunned, by iteratively adjusted upwards and downwards in decreasing and increasing increments, until the cars oscillation from side to side on the tracks was minimized.
- Then integral parameter was tunned, by iteratively adjusted upwards and downwards in decreasing and increasing increments, until the amplitude of the cars residual oscillation was minimized.


## How to write a README
A well written README file can enhance your project and portfolio.  Develop your abilities to create professional README files by completing [this free course](https://www.udacity.com/course/writing-readmes--ud777).

