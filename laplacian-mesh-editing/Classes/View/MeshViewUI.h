// generated by Fast Light User Interface Designer (fluid) version 1.0303

#ifndef MeshViewUI_h
#define MeshViewUI_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include "MeshView.h"
#include <FL/Fl_Value_Slider.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Round_Button.H>

class MeshViewUI {
public:
  MeshViewUI();
  Fl_Double_Window *mContainer;
  Fl_Group *mFl_Group;
  Fl_Group *MainView;
  MeshView *meshView;
  Fl_Value_Slider *zoomSlider;
private:
  inline void cb_zoomSlider_i(Fl_Value_Slider*, void*);
  static void cb_zoomSlider(Fl_Value_Slider*, void*);
  static Fl_Menu_Item menu_[];
  inline void cb_Edit_i(Fl_Round_Button*, void*);
  static void cb_Edit(Fl_Round_Button*, void*);
  inline void cb_View_i(Fl_Round_Button*, void*);
  static void cb_View(Fl_Round_Button*, void*);
public:
  void show();
};
#endif
