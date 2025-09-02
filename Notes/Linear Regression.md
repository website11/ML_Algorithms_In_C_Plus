In a nutshell, **linear regression** is a statistical method used to model the relationship between a dependent variable and one or more independent variables by fitting a straight line to the data.

**Review**
- Independent Variables: The thing you control or measure (time studied)
- Dependent Variables: The outcome your observing (test scores)

> The higher the time one studies, the higher the test score should be. This is linear regression

**The Equation:**
$y=mx+b$

$m$=slope
$b$=y-intercept
$x$=independent variable
$y$=dependent variable

## **How it works**

The goal is to find a **line of best fit** that has the smallest error.

>How is error calculated?

One method is the **Ordinary Least Squares (OLS)** method
1. For every single data point, calculate that "error" (the vertical distance to the line).
2. **Square** each of those errors. (We square them so that negative errors don't cancel out positive ones, and it also penalizes larger errors more heavily).
3. **Sum** all of those squared errors together.

#### The Math
**What values do we need to determine to find the line of best fit?**
- the slope (m)
- the y-intercept (b)


------------

**What is the formula for determining the most ideal slope?**
$$m = \frac{\sum_{i=1}^{n}(x_i - \bar{x})(y_i - \bar{y})}{\sum_{i=1}^{n}(x_i - \bar{x})^2}$$
$x_i$ = current value
$\bar{x}$ = mean of all x-values

>$\sum_{i=1}^{n}(x_i - \bar{x})(y_i - \bar{y})$

- This portion measures the **covariance** or the direction of the relationship.

**Positive Line/Relationship**
- If $x_i - \bar{x}$ is positive and $y_i - \bar{y}$ is positive, (+) * (+) = positive (Quadrant 1)
-  If $x_i - \bar{x}$ is negative and $y_i - \bar{y}$ is negative, (-) * (-) = positive (Quadrant 3)
**Negative Line/Relationship**
-  If $x_i - \bar{x}$ is positive and $y_i - \bar{y}$ is negative, (+) * (-) = negative (Quadrant 4)
-  If $x_i - \bar{x}$ is negative and $y_i - \bar{y}$ is positive, (-) * (+) = negative (Quadrant 2)

>$\sum_{i=1}^{n}(x_i - \bar{x})^2$

- This portion measures the **variance** of x
- It only measures how spread out the x values are from their own average
- By dividing, we are saying **For a typical one-unit change in X, how much do we expect Y to change?**

------------
**What is the formula for determining the most ideal y-intercept?**
$b=\bar{y}-m\bar{x}$

**What is the end result?**
Ex.
$y = 0.93x + 1.50$

Let's stick with the hours studied example. 
- Here, someone who studies 0 hours gets base score of **1.50**
- Every hour studied increases the score by **0.93**

