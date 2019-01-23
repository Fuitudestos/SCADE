/*
 * HOWTO write an External for Pure data
 * (c) 2001-2006 IOhannes m zmölnig zmoelnig[AT]iem.at
 *
 * this is the source-code for the second example in the HOWTO
 * it creates an object that increments and outputs a counter
 * whenever it gets banged.
 *
 * for legal issues please see the file LICENSE.txt
 */



/**
 * include the interface to Pd
 */
#include "m_pd.h"
#include "tme13.h"

/**
 * define a new "class"
 */
static t_class *watch_clock_class;



/**
 * this is the dataspace of our new object
 * the first (mandatory) "t_object"
 * and a variable that holds the current counter value
 */
typedef struct _watch_clock {
  t_object  x_obj;
  outC_tme13 outC;
  inC_tme13 inC;
  t_outlet *h_out, *m_out, *s_out; /* outlets */
} t_watch_clock;


/**
 * this method is called whenever a "bang" is sent to the object
 * a reference to the class-dataspace is given as argument
 * this enables us to do something with the data (e.g. increment the counter)
 */
void watch_clock_bang(t_watch_clock *x)
{
  /*
   * convert the current counter value to floating-point to output it later
   */
  t_float heures;
  t_float minutes;
  t_float seconds;

  tme13(&x->inC, &x->outC);
  x->inC.startstop = kcg_false;
  x->inC.mode = kcg_false;
  x->inC.reset = kcg_false;
  
  /* send the old counter-value to the 1st outlet of the object */
  heures = x->outC.display[0];
  minutes = x->outC.display[1];
  seconds = x->outC.display[2];

  outlet_float(x->h_out, heures);
  outlet_float(x->m_out, minutes);
  outlet_float(x->s_out, seconds);
}

void watch_clock_reset(t_watch_clock *x)
{
  x->inC.reset = kcg_true;
}

void watch_clock_startstop(t_watch_clock *x)
{
  x->inC.startstop = kcg_true;
}

void watch_clock_mode(t_watch_clock *x)
{
  x->inC.mode = kcg_true;
  t_float heures = 18;
  outlet_float(x->h_out, heures);
}


/**
 * this is the "constructor" of the class
 * we have one argument of type floating-point (as specified below in the counter_setup() routine)
 */
void *watch_clock_new()
{
  t_watch_clock *x = (t_watch_clock *)pd_new(watch_clock_class);

  /* set the counter value to the given argument */
  tme13_reset (&x->outC);
  /* create a new outlet for floating-point values */
  x->h_out = outlet_new(&x->x_obj, &s_float);
  x->m_out = outlet_new(&x->x_obj, &s_float);
  x->s_out = outlet_new(&x->x_obj, &s_float);

  return (void *)x;
}


/**
 * define the function-space of the class
 */
void watch_clock_setup(void) {
  watch_clock_class = class_new(gensym("watch_clock"),
			    (t_newmethod)watch_clock_new,
			    0,
			    sizeof(t_watch_clock),
			    CLASS_DEFAULT, 0); /* the object takes one argument which is a floating-point and defaults to 0 */

  /* call a function when object gets banged */
  class_addbang(watch_clock_class, watch_clock_bang);
/* call a function when a "reset" message (without arguments) appears on the first inlet */
  class_addmethod(watch_clock_class,
        (t_method)watch_clock_startstop, gensym("startstop"), 0);

  class_addmethod(watch_clock_class,
        (t_method)watch_clock_reset, gensym("reset"), 0);

  class_addmethod(watch_clock_class,
        (t_method)watch_clock_mode, gensym("mode"), 0);


}
