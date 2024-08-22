import java.awt.*;  
class MenuExample  
{  
     MenuExample(){  
         Frame f= new Frame("Menu and MenuItem Example");  
         MenuBar mb=new MenuBar();  
         Menu menu=new Menu("File");  
         Menu submenu=new Menu("Open");  
         MenuItem i1=new MenuItem("New");  
         MenuItem i2=new MenuItem("Exit");  
         MenuItem i3=new MenuItem("Save");  
         MenuItem i4=new MenuItem("Existing");  
         MenuItem i5=new MenuItem("Page");  
         menu.add(i1);  
         menu.add(i2);  
         menu.add(i3);  
         submenu.add(i4);  
         submenu.add(i5);  
         menu.add(submenu);  
         mb.add(menu);  
         f.setMenuBar(mb);  
         f.setSize(400,400);  
         f.setLayout(null);  
         f.setVisible(true);  
}  
public static void main(String args[])  
{  
new MenuExample();  
}  
}  