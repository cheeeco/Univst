# Univst
Universities and their dormitories

# Short description
  * Create universities with their own names and address
  * Build dormitories for students with their capacity
  * Calculate university's capacity
  * Watch how University and Dormitory objects are constructed and destructed
  * THE FUNNIEST THING - YOU CAN GET ADDRESS OF THE UNIVERSITY BY CALLING & OPERATOR!!!
 
# Technical difficulties
1. When n > 1 Dormitory objects are emplace_back() in vector<Dormitory> campus, copy-type constructor is called for moving previously emplaced objects. That's not nice!
2. Actually, move-type constructor isn't necessary, because copy-type is always used. 

