Thu Jan  3 08:27:34 CST 2019
----------------------------
key points:
- you can think like a compiler.  All member functions end up in a table of
  pointers to those methods.  Calling a member function is an indirection 
  though an offset in that table.
- when you use virtual you are putting the method address in the vtable.
  The vtable is special in the sense that even when the compiler does not
  know the exact type of an object (is this dog* a lab or poodle?) it 
  can generate correct code.
- virtual in a base class allows derived classes to 'customize' methods 
- virtual works best through pointers.  When the compiler "knows" the
  type you end up in a situation where it can give base class behavior 
  even though it is really a derived type.  Pointers are key.

experiments:
- what happens when base class declares a virtual method but fails to define it?
