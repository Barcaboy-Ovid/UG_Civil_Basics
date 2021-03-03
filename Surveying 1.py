#!/usr/bin/env python
# coding: utf-8

# # Python Code for Surveying Problems

# ## Fundamental concepts of Surveying

# ### Representative Fraction (RF)

# In[ ]:


d = float (input(" Enter Map Distance in (cm): "))
D = float (input(" Enter Ground Distance in (cm):")) # hint convert all value to cm 
Rf = float (d/D)
print("Representation Factor :",Rf)


# ## Shrinkage Factor (SF)

# In[ ]:


SL = float(input("Shrunk Length in (m) :"))
OL = float(input("Original Length in (m) :"))
SF = float(SL/OL)
print("Shrinkage Factor, SF: ", SF)


# ### Shrunk Scale (SS)

# In[ ]:


OS = float(input("Original scale :"))
SS = float(OS * SF)
print("Shrunk scale : ",SS)


# ## Error due to use of Wrong Scale

# In[ ]:


RF_W = float(input("RF of Wrong scale : "))
RF_C = float(input("RF of Correct scale : "))
ML = float(input("Measured Length is : "))
MA = float(input("Measured Area is : "))

CL = (RF_W/RF_C)*ML
CA = ((RF_W/RF_C)**2)*MA

print("Correct Length is :",CL, "m")
print("Correct Length is :",CA, "m2")


# ## Error due to use of Incorrect length of Chain or Tape
# 

# In[ ]:


Lw = float(input("Wrong length of chain : "))
Lc = float(input("Actual or correct Length of the chain : "))

ML = float(input("Wrongly measured Length of line  using incorrect chain : "))
MA = float(input("Wrongly measured Area using incorrect chain : "))
MV = float(input("Wrongly measured Volume using incorrect chain is : "))

CL = (Lw/Lc)*ML
CA = ((Lw/Lc)**2)*MA
CV = ((Lw/Lc)**3)*MV

print("Correct Length of line is :",CL, "m")
print("Correct Area is :",CA," m2")
print("Correct Volume is :",CV," m3")


# ## Most probable Error

# In[ ]:


∑V^2 = float(input("Enter sum of the square of difference betwee6n any single observation and mean :" )
n = float(input("Number of Observation in  the series:" )
                
#Probabale error of single obs
Es_1 = 0.6745 (sqrt((∑V^2)/(n-1)))
Es_2 = - 0.6745 (sqrt((∑V^2)/(n-1)))
print("Probabale error of single obs: ", Es_1,Es_2)
          


# In[ ]:


# probabale error of the mean
Em_1 = (Es_1/sqrt(n))
Em_2 = (Es_2/sqrt(n))
print("Probabale error of the mean: ", Em_1,Em_2)


# In[ ]:




