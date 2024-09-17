
This repulsory contains an implementation of the force directed graph in unreal engine 5.


![image](https://github.com/user-attachments/assets/4e648745-8ee3-4fc7-9008-fd1d53785711)







I regard this as an improved version of https://github.com/thomaswall/ue4-force-graph

It is improved in the following ways
1. It is you the latest version of the unreal engine 5 instead of the unreal engine 4.24
2. It is using a different implementation of the charge force In order to replicate the result of the popular library https://github.com/vasturiano/3d-force-graph. 
3. It corrects some of the Mistakes such as calculating the bias of the link.

It is worse in the following ways
1. The implementation of the charge force, which is the many body force, use a custom implementation of the OCtree, Which seems to be slower than the library version of the unreal engine.




   
