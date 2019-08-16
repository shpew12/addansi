# Adding ANSI Color to Print Statements

You can use this header file to easily print in color.

You can set the color of the foreground or background, as well as certain attributes.

## Mappings

### Functions
  Name  | Function          
--------|------------------
  fg(x) | foreground        
  bg(x) | background          
  at(x) | attribute         
  rm(x) | remove attribute  

### Color

 Key |  Color  
-----|---------
  r  |  red    
  y  |  brown   
  g  |  green   
  b  |  blue    
  c  |  cyan    
  m  |  magenta 
  k  |  black   
  w  |  white  

### Attributes

 Key | Attribute 
-----|-----------
 dm  | dim       
 ul  | underline 
 hl  | highlight 
 bo  | bold      
 bk  | blink     

### Other 
 Key | _           
-----|------------
 cl  | clear(all) 

## Examples

You can run the examples in `example.cpp` or see below.

### Forground Colors

    cout << fg(r)"Red text" << clendl;

NOTE: `clendl` is a macro that clears formatting. If you use the regular endl, the formatting will persist.

### Background Colors

    cout << bg(k)fg(r)"Red text and black background" << clendl;

For those of you who already have a black background:

    cout << bg(g)fg(k)"Black text and green background" << clendl;

### Switching Colors 

Nothing fancy.

    cout << fg(m)"Magenta text... " << fg(c)"Cyan text" << clendl;

### Underlines

    cout << fg(c)"Cyan text... " << at(ul)"Cyan text that's underlined... " << rm(ul)"No longer underlined but still cyan" << clendl;

### Bold

    cout << at(bo)"Bold bold bold... " << rm(bo) "no more bold" << clendl;

### Blink

    cout << at(bk)"Blink " << fg(c)"blink " << bg(g)fg(k)"blink... " << rm(bk)rm(hl)"No blink." << clendl;

### Highlight

    cout << fg(m)bg(k)at(bo)"Some text..." << at(hl)"Highlighted text..." << rm(hl) << clendl;

### Dim

    cout << at(dm)"Half-bright as usual... " << rm(dm)"can you tell the difference?" << clendl;
