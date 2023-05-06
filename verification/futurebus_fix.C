/******************************
  Program "futurebus_fix.m" compiled by "Murphi Release 3.1"

  Murphi Last Modefied Date: "Jan 29 1999"
  Murphi Last Compiled date: "May  6 2023"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Murphi Release 3.1"
#define MURPHI_DATE "Jan 29 1999"
#define PROTOCOL_NAME "futurebus_fix"
#define BITS_IN_WORLD 104
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.inc"

/********************
  Decl declaration
 ********************/

class mu_1_Proc: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_Proc& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static char *values[];
  friend ostream& operator<< (ostream& s, mu_1_Proc& val)
    {
      if (val.defined())
        return ( s << mu_1_Proc::values[ int(val) - 1 ] );
      else
        return ( s << "Undefined" );
    };

  mu_1_Proc (char *name, int os): mu__byte(1, 3, 2, name, os) {};
  mu_1_Proc (void): mu__byte(1, 3, 2) {};
  mu_1_Proc (int val): mu__byte(1, 3, 2, "Parameter or function result.", 0)
    { operator=(val); };
  char * Name() { return values[ value() -1]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 1] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_Proc& a, mu_1_Proc& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
char *mu_1_Proc::values[] =
  { "Proc_1","Proc_2","Proc_3",NULL };

/*** end scalarset declaration ***/
mu_1_Proc mu_1_Proc_undefined_var;

class mu_1_Value: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_Value& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static char *values[];
  friend ostream& operator<< (ostream& s, mu_1_Value& val)
    {
      if (val.defined())
        return ( s << mu_1_Value::values[ int(val) - 4 ] );
      else
        return ( s << "Undefined" );
    };

  mu_1_Value (char *name, int os): mu__byte(4, 4, 1, name, os) {};
  mu_1_Value (void): mu__byte(4, 4, 1) {};
  mu_1_Value (int val): mu__byte(4, 4, 1, "Parameter or function result.", 0)
    { operator=(val); };
  char * Name() { return values[ value() -4]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 4] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_Value& a, mu_1_Value& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
char *mu_1_Value::values[] =
  { "Value_1",NULL };

/*** end scalarset declaration ***/
mu_1_Value mu_1_Value_undefined_var;

class mu_1__type_0: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1__type_0& val) { return value(val.value()); };
  static char *values[];
  friend ostream& operator<< (ostream& s, mu_1__type_0& val)
  {
    if (val.defined())
      return ( s << mu_1__type_0::values[ int(val) - 5] );
    else return ( s << "Undefined" );
  };

  mu_1__type_0 (char *name, int os): mu__byte(5, 13, 4, name, os) {};
  mu_1__type_0 (void): mu__byte(5, 13, 4) {};
  mu_1__type_0 (int val): mu__byte(5, 13, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  char * Name() { return values[ value() -5]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -5] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

char *mu_1__type_0::values[] = {"FB_I","FB_EU","FB_EM","FB_SU","FB_PR","FB_PEMR","FB_PSU","FB_PW","FB_PEMW",NULL };

/*** end of enum declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1_ProcState
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( char *n, char *n2, int os);
  void set_self_ar( char *n, char *n2, int os);
  void set_self(char *n, int os);
  mu_1__type_0 mu_state;
  mu_1_Value mu_value;
  mu_1_ProcState ( char *n, int os ) { set_self(n,os); };
  mu_1_ProcState ( void ) {};

  virtual ~mu_1_ProcState(); 
friend int CompareWeight(mu_1_ProcState& a, mu_1_ProcState& b)
  {
    int w;
    w = CompareWeight(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = CompareWeight(a.mu_value, b.mu_value);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_ProcState& a, mu_1_ProcState& b)
  {
    int w;
    w = Compare(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = Compare(a.mu_value, b.mu_value);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_state.MultisetSort();
    mu_value.MultisetSort();
  }
  void print_statistic()
  {
    mu_state.print_statistic();
    mu_value.print_statistic();
  }
  void clear() {
    mu_state.clear();
    mu_value.clear();
 };
  void undefine() {
    mu_state.undefine();
    mu_value.undefine();
 };
  void reset() {
    mu_state.reset();
    mu_value.reset();
 };
  void print() {
    mu_state.print();
    mu_value.print();
  };
  void print_diff(state *prevstate) {
    mu_state.print_diff(prevstate);
    mu_value.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_state.to_state(thestate);
    mu_value.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_ProcState& operator= (const mu_1_ProcState& from) {
    mu_state.value(from.mu_state.value());
    mu_value.value(from.mu_value.value());
    return *this;
  };
};

  void mu_1_ProcState::set_self_ar( char *n1, char *n2, int os ) {
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_ProcState::set_self_2( char *n1, char *n2, int os ) {
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_ProcState::set_self(char *n, int os)
{
  name = n;
  mu_state.set_self_2(name, ".state", os + 0 );
  mu_value.set_self_2(name, ".value", os + 8 );
}

mu_1_ProcState::~mu_1_ProcState()
{
}

/*** end record declaration ***/
mu_1_ProcState mu_1_ProcState_undefined_var;

class mu_1_MessageType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MessageType& val) { return value(val.value()); };
  static char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MessageType& val)
  {
    if (val.defined())
      return ( s << mu_1_MessageType::values[ int(val) - 14] );
    else return ( s << "Undefined" );
  };

  mu_1_MessageType (char *name, int os): mu__byte(14, 16, 2, name, os) {};
  mu_1_MessageType (void): mu__byte(14, 16, 2) {};
  mu_1_MessageType (int val): mu__byte(14, 16, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  char * Name() { return values[ value() -14]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -14] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

char *mu_1_MessageType::values[] = {"ReadShared","ReadModified","Invalidate",NULL };

/*** end of enum declaration ***/
mu_1_MessageType mu_1_MessageType_undefined_var;

class mu_1_Message
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( char *n, char *n2, int os);
  void set_self_ar( char *n, char *n2, int os);
  void set_self(char *n, int os);
  mu_1_MessageType mu_mtype;
  mu_1_Value mu_value;
  mu_1_Message ( char *n, int os ) { set_self(n,os); };
  mu_1_Message ( void ) {};

  virtual ~mu_1_Message(); 
friend int CompareWeight(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = CompareWeight(a.mu_mtype, b.mu_mtype);
    if (w!=0) return w;
    w = CompareWeight(a.mu_value, b.mu_value);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = Compare(a.mu_mtype, b.mu_mtype);
    if (w!=0) return w;
    w = Compare(a.mu_value, b.mu_value);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_mtype.MultisetSort();
    mu_value.MultisetSort();
  }
  void print_statistic()
  {
    mu_mtype.print_statistic();
    mu_value.print_statistic();
  }
  void clear() {
    mu_mtype.clear();
    mu_value.clear();
 };
  void undefine() {
    mu_mtype.undefine();
    mu_value.undefine();
 };
  void reset() {
    mu_mtype.reset();
    mu_value.reset();
 };
  void print() {
    mu_mtype.print();
    mu_value.print();
  };
  void print_diff(state *prevstate) {
    mu_mtype.print_diff(prevstate);
    mu_value.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_mtype.to_state(thestate);
    mu_value.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Message& operator= (const mu_1_Message& from) {
    mu_mtype.value(from.mu_mtype.value());
    mu_value.value(from.mu_value.value());
    return *this;
  };
};

  void mu_1_Message::set_self_ar( char *n1, char *n2, int os ) {
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Message::set_self_2( char *n1, char *n2, int os ) {
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Message::set_self(char *n, int os)
{
  name = n;
  mu_mtype.set_self_2(name, ".mtype", os + 0 );
  mu_value.set_self_2(name, ".value", os + 8 );
}

mu_1_Message::~mu_1_Message()
{
}

/*** end record declaration ***/
mu_1_Message mu_1_Message_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_ProcState array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( char *n, int os);
  void set_self_2( char *n, char *n2, int os);
  void set_self_ar( char *n, char *n2, int os);
  mu_1__type_1 (char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_ProcState& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 3 ) )
      return array[ index - 1 ];
    else
      {
        if (index==UNDEFVAL) 
          Error.Error("Indexing to %s using an undefined value.", name);
        else
          Error.Error("Funny index value %d for %s: Proc is internally represented from 3 to 1.\nInternal Error in Type checking.",index, name);
        return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 3; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_1::set_self_ar( char *n1, char *n2, int os ) {
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( char *n1, char *n2, int os ) {
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( char *n, int os)
  {
    int i=0;
    name = n;
array[i].set_self_ar(n,"Proc_1", i * 16 + os);i++;
array[i].set_self_ar(n,"Proc_2", i * 16 + os);i++;
array[i].set_self_ar(n,"Proc_3", i * 16 + os);i++;
}
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

const int mu_processor_count = 3;
const int mu_value_count = 1;
const int mu_Proc_1 = 1;
const int mu_Proc_2 = 2;
const int mu_Proc_3 = 3;
const int mu_Value_1 = 4;
const int mu_FB_I = 5;
const int mu_FB_EU = 6;
const int mu_FB_EM = 7;
const int mu_FB_SU = 8;
const int mu_FB_PR = 9;
const int mu_FB_PEMR = 10;
const int mu_FB_PSU = 11;
const int mu_FB_PW = 12;
const int mu_FB_PEMW = 13;
const int mu_ReadShared = 14;
const int mu_ReadModified = 15;
const int mu_Invalidate = 16;
/*** Variable declaration ***/
mu_1__type_1 mu_proc_state("proc_state",0);

/*** Variable declaration ***/
mu_0_boolean mu_transaction_flag("transaction_flag",48);

/*** Variable declaration ***/
mu_1_Value mu_last_write("last_write",56);

/*** Variable declaration ***/
mu_0_boolean mu_one_flag("one_flag",64);

/*** Variable declaration ***/
mu_0_boolean mu_more_flag("more_flag",72);

/*** Variable declaration ***/
mu_0_boolean mu_pending_write("pending_write",80);

/*** Variable declaration ***/
mu_1_Message mu_send_msg("send_msg",88);

void mu_SendMessage(mu_1_Message& mu_msg, const mu_1_Proc& mu_i)
{
switch ((int) mu_msg.mu_mtype) {
case mu_ReadShared:
bool mu__boolexpr2;
  if ((mu_proc_state[mu_i].mu_state) == (mu_FB_EM)) mu__boolexpr2 = TRUE ;
  else {
  mu__boolexpr2 = ((mu_proc_state[mu_i].mu_state) == (mu_FB_EU)) ; 
}
if ( mu__boolexpr2 )
{
mu_proc_state[mu_i].mu_state = mu_FB_SU;
}
if ( (mu_proc_state[mu_i].mu_state) == (mu_FB_PW) )
{
mu_proc_state[mu_i].mu_state = mu_FB_PR;
}
break;
case mu_ReadModified:
bool mu__boolexpr3;
bool mu__boolexpr4;
bool mu__boolexpr5;
bool mu__boolexpr6;
bool mu__boolexpr7;
  if ((mu_proc_state[mu_i].mu_state) == (mu_FB_SU)) mu__boolexpr7 = TRUE ;
  else {
  mu__boolexpr7 = ((mu_proc_state[mu_i].mu_state) == (mu_FB_PR)) ; 
}
  if (mu__boolexpr7) mu__boolexpr6 = TRUE ;
  else {
  mu__boolexpr6 = ((mu_proc_state[mu_i].mu_state) == (mu_FB_PSU)) ; 
}
  if (mu__boolexpr6) mu__boolexpr5 = TRUE ;
  else {
  mu__boolexpr5 = ((mu_proc_state[mu_i].mu_state) == (mu_FB_PEMR)) ; 
}
  if (mu__boolexpr5) mu__boolexpr4 = TRUE ;
  else {
  mu__boolexpr4 = ((mu_proc_state[mu_i].mu_state) == (mu_FB_EU)) ; 
}
  if (mu__boolexpr4) mu__boolexpr3 = TRUE ;
  else {
  mu__boolexpr3 = ((mu_proc_state[mu_i].mu_state) == (mu_FB_EM)) ; 
}
if ( mu__boolexpr3 )
{
mu_proc_state[mu_i].mu_state = mu_FB_I;
}
if ( (mu_proc_state[mu_i].mu_state) == (mu_FB_PW) )
{
mu_proc_state[mu_i].mu_state = mu_FB_PR;
}
break;
case mu_Invalidate:
mu_proc_state[mu_i].mu_state = mu_FB_I;
break;
}
mu_proc_state[mu_i].mu_value = mu_msg.mu_value;
if ( (mu_proc_state[mu_i].mu_state) == (mu_FB_I) )
{
mu_proc_state[mu_i].mu_value.undefine();
}
};
/*** end procedure declaration ***/

void mu_UpdateSignals()
{
{
for(int mu_m = 1; mu_m <= 3; mu_m++) {
if ( (mu_proc_state[mu_m].mu_state) == (mu_FB_PW) )
{
mu_pending_write = mu_true;
}
};
};
{
for(int mu_m = 1; mu_m <= 3; mu_m++) {
bool mu__boolexpr8;
bool mu__boolexpr9;
bool mu__boolexpr10;
bool mu__boolexpr11;
  if ((mu_proc_state[mu_m].mu_state) == (mu_FB_PEMR)) mu__boolexpr11 = TRUE ;
  else {
  mu__boolexpr11 = ((mu_proc_state[mu_m].mu_state) == (mu_FB_PSU)) ; 
}
  if (mu__boolexpr11) mu__boolexpr10 = TRUE ;
  else {
  mu__boolexpr10 = ((mu_proc_state[mu_m].mu_state) == (mu_FB_EU)) ; 
}
  if (mu__boolexpr10) mu__boolexpr9 = TRUE ;
  else {
  mu__boolexpr9 = ((mu_proc_state[mu_m].mu_state) == (mu_FB_EM)) ; 
}
  if (mu__boolexpr9) mu__boolexpr8 = TRUE ;
  else {
  mu__boolexpr8 = ((mu_proc_state[mu_m].mu_state) == (mu_FB_SU)) ; 
}
if ( mu__boolexpr8 )
{
mu_transaction_flag = mu_true;
}
};
};
{
for(int mu_m = 1; mu_m <= 3; mu_m++) {
if ( (mu_proc_state[mu_m].mu_state) == (mu_FB_PR) )
{
if ( (mu_one_flag) == (mu_true) )
{
mu_more_flag = mu_true;
}
bool mu__boolexpr12;
  if (!((mu_one_flag) == (mu_false))) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = ((mu_transaction_flag) == (mu_false)) ; 
}
if ( mu__boolexpr12 )
{
mu_one_flag = mu_true;
}
}
};
};
};
/*** end procedure declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_proc_state.clear();
  mu_transaction_flag.clear();
  mu_last_write.clear();
  mu_one_flag.clear();
  mu_more_flag.clear();
  mu_pending_write.clear();
  mu_send_msg.clear();
}
void world_class::undefine()
{
  mu_proc_state.undefine();
  mu_transaction_flag.undefine();
  mu_last_write.undefine();
  mu_one_flag.undefine();
  mu_more_flag.undefine();
  mu_pending_write.undefine();
  mu_send_msg.undefine();
}
void world_class::reset()
{
  mu_proc_state.reset();
  mu_transaction_flag.reset();
  mu_last_write.reset();
  mu_one_flag.reset();
  mu_more_flag.reset();
  mu_pending_write.reset();
  mu_send_msg.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_proc_state.print();
  mu_transaction_flag.print();
  mu_last_write.print();
  mu_one_flag.print();
  mu_more_flag.print();
  mu_pending_write.print();
  mu_send_msg.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_proc_state.print_statistic();
  mu_transaction_flag.print_statistic();
  mu_last_write.print_statistic();
  mu_one_flag.print_statistic();
  mu_more_flag.print_statistic();
  mu_pending_write.print_statistic();
  mu_send_msg.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_proc_state.print_diff(prevstate);
    mu_transaction_flag.print_diff(prevstate);
    mu_last_write.print_diff(prevstate);
    mu_one_flag.print_diff(prevstate);
    mu_more_flag.print_diff(prevstate);
    mu_pending_write.print_diff(prevstate);
    mu_send_msg.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_proc_state.to_state( newstate );
  mu_transaction_flag.to_state( newstate );
  mu_last_write.to_state( newstate );
  mu_one_flag.to_state( newstate );
  mu_more_flag.to_state( newstate );
  mu_pending_write.to_state( newstate );
  mu_send_msg.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Read data from Exclusive states, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr13;
  if ((mu_p.mu_state) == (mu_FB_EM)) mu__boolexpr13 = TRUE ;
  else {
  mu__boolexpr13 = ((mu_p.mu_state) == (mu_FB_EU)) ; 
}
  return mu__boolexpr13;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 3 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr14;
  if ((mu_p.mu_state) == (mu_FB_EM)) mu__boolexpr14 = TRUE ;
  else {
  mu__boolexpr14 = ((mu_p.mu_state) == (mu_FB_EU)) ; 
}
              if (mu__boolexpr14) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 0;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
if (mu_last_write.isundefined())
  mu_p.mu_value.undefine();
else
  mu_p.mu_value = mu_last_write;
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Go to Exclusive state on DACK, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr15;
bool mu__boolexpr16;
  if (!((mu_p.mu_state) == (mu_FB_PR))) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_transaction_flag) == (mu_false)) ; 
}
  if (!(mu__boolexpr16)) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_one_flag) == (mu_true)) ; 
}
  return mu__boolexpr15;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 3;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 6 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr17;
bool mu__boolexpr18;
  if (!((mu_p.mu_state) == (mu_FB_PR))) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_transaction_flag) == (mu_false)) ; 
}
  if (!(mu__boolexpr18)) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_one_flag) == (mu_true)) ; 
}
              if (mu__boolexpr17) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 3;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_EU;
if (mu_last_write.isundefined())
  mu_p.mu_value.undefine();
else
  mu_p.mu_value = mu_last_write;
mu_UpdateSignals (  );
{
for(int mu_k = 1; mu_k <= 3; mu_k++) {
if ( (mu_i) != (mu_k) )
{
mu_send_msg.mu_mtype = mu_ReadShared;
if (mu_last_write.isundefined())
  mu_send_msg.mu_value.undefine();
else
  mu_send_msg.mu_value = mu_last_write;
mu_SendMessage ( mu_send_msg, mu_k );
}
};
};
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Go to Shared state on DACKem, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr19;
bool mu__boolexpr20;
  if (!((mu_p.mu_state) == (mu_FB_PR))) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_transaction_flag) == (mu_false)) ; 
}
  if (!(mu__boolexpr20)) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_more_flag) == (mu_true)) ; 
}
  return mu__boolexpr19;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 9 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr21;
bool mu__boolexpr22;
  if (!((mu_p.mu_state) == (mu_FB_PR))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_transaction_flag) == (mu_false)) ; 
}
  if (!(mu__boolexpr22)) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_more_flag) == (mu_true)) ; 
}
              if (mu__boolexpr21) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 6;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_SU;
if (mu_last_write.isundefined())
  mu_p.mu_value.undefine();
else
  mu_p.mu_value = mu_last_write;
mu_UpdateSignals (  );
{
for(int mu_k = 1; mu_k <= 3; mu_k++) {
if ( (mu_i) != (mu_k) )
{
mu_send_msg.mu_mtype = mu_ReadShared;
if (mu_last_write.isundefined())
  mu_send_msg.mu_value.undefine();
else
  mu_send_msg.mu_value = mu_last_write;
mu_SendMessage ( mu_send_msg, mu_k );
}
};
};
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Go to Shared state on DACK, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr23;
bool mu__boolexpr24;
  if (!((mu_p.mu_state) == (mu_FB_PR))) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_transaction_flag) == (mu_false)) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_more_flag) == (mu_true)) ; 
}
  return mu__boolexpr23;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 12 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr25;
bool mu__boolexpr26;
  if (!((mu_p.mu_state) == (mu_FB_PR))) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_transaction_flag) == (mu_false)) ; 
}
  if (!(mu__boolexpr26)) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_more_flag) == (mu_true)) ; 
}
              if (mu__boolexpr25) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 9;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_SU;
if (mu_last_write.isundefined())
  mu_p.mu_value.undefine();
else
  mu_p.mu_value = mu_last_write;
mu_UpdateSignals (  );
{
for(int mu_k = 1; mu_k <= 3; mu_k++) {
if ( (mu_i) != (mu_k) )
{
mu_send_msg.mu_mtype = mu_ReadShared;
if (mu_last_write.isundefined())
  mu_send_msg.mu_value.undefine();
else
  mu_send_msg.mu_value = mu_last_write;
mu_SendMessage ( mu_send_msg, mu_k );
}
};
};
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Go to Shared state on DACK, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr27;
  if (!((mu_p.mu_state) == (mu_FB_PR))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = (mu_transaction_flag) ; 
}
  return mu__boolexpr27;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 15 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr28;
  if (!((mu_p.mu_state) == (mu_FB_PR))) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = (mu_transaction_flag) ; 
}
              if (mu__boolexpr28) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 12;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_SU;
if (mu_last_write.isundefined())
  mu_p.mu_value.undefine();
else
  mu_p.mu_value = mu_last_write;
mu_UpdateSignals (  );
{
for(int mu_k = 1; mu_k <= 3; mu_k++) {
if ( (mu_i) != (mu_k) )
{
mu_send_msg.mu_mtype = mu_ReadShared;
if (mu_last_write.isundefined())
  mu_send_msg.mu_value.undefine();
else
  mu_send_msg.mu_value = mu_last_write;
mu_SendMessage ( mu_send_msg, mu_k );
}
};
};
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Go to Shared state on DACK, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
  return (mu_p.mu_state) == (mu_FB_PSU);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 15;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 18 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
              if ((mu_p.mu_state) == (mu_FB_PSU)) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 15;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_SU;
if (mu_last_write.isundefined())
  mu_p.mu_value.undefine();
else
  mu_p.mu_value = mu_last_write;
mu_UpdateSignals (  );
{
for(int mu_k = 1; mu_k <= 3; mu_k++) {
if ( (mu_i) != (mu_k) )
{
mu_send_msg.mu_mtype = mu_ReadShared;
if (mu_last_write.isundefined())
  mu_send_msg.mu_value.undefine();
else
  mu_send_msg.mu_value = mu_last_write;
mu_SendMessage ( mu_send_msg, mu_k );
}
};
};
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Go to Pending Shared state, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr29;
bool mu__boolexpr30;
  if ((mu_p.mu_state) == (mu_FB_EU)) mu__boolexpr30 = TRUE ;
  else {
  mu__boolexpr30 = ((mu_p.mu_state) == (mu_FB_SU)) ; 
}
  if (mu__boolexpr30) mu__boolexpr29 = TRUE ;
  else {
  mu__boolexpr29 = ((mu_p.mu_state) == (mu_FB_PSU)) ; 
}
  return mu__boolexpr29;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 18;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 21 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr31;
bool mu__boolexpr32;
  if ((mu_p.mu_state) == (mu_FB_EU)) mu__boolexpr32 = TRUE ;
  else {
  mu__boolexpr32 = ((mu_p.mu_state) == (mu_FB_SU)) ; 
}
  if (mu__boolexpr32) mu__boolexpr31 = TRUE ;
  else {
  mu__boolexpr31 = ((mu_p.mu_state) == (mu_FB_PSU)) ; 
}
              if (mu__boolexpr31) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 18;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_PSU;
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Read data from EM, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr33;
  if ((mu_p.mu_state) == (mu_FB_EM)) mu__boolexpr33 = TRUE ;
  else {
  mu__boolexpr33 = ((mu_p.mu_state) == (mu_FB_PEMR)) ; 
}
  return mu__boolexpr33;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 21;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 24 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr34;
  if ((mu_p.mu_state) == (mu_FB_EM)) mu__boolexpr34 = TRUE ;
  else {
  mu__boolexpr34 = ((mu_p.mu_state) == (mu_FB_PEMR)) ; 
}
              if (mu__boolexpr34) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 21;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_PEMR;
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Read shared data, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
  return (mu_p.mu_state) == (mu_FB_SU);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 24;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 27 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
              if ((mu_p.mu_state) == (mu_FB_SU)) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 24;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_SU;
if (mu_last_write.isundefined())
  mu_p.mu_value.undefine();
else
  mu_p.mu_value = mu_last_write;
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Moved to shared state from EMR on DACKem, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
  return (mu_p.mu_state) == (mu_FB_PEMR);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 27;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 30 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
              if ((mu_p.mu_state) == (mu_FB_PEMR)) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 27;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_SU;
if (mu_last_write.isundefined())
  mu_p.mu_value.undefine();
else
  mu_p.mu_value = mu_last_write;
mu_UpdateSignals (  );
{
for(int mu_k = 1; mu_k <= 3; mu_k++) {
if ( (mu_i) != (mu_k) )
{
mu_send_msg.mu_mtype = mu_ReadShared;
if (mu_last_write.isundefined())
  mu_send_msg.mu_value.undefine();
else
  mu_send_msg.mu_value = mu_last_write;
mu_SendMessage ( mu_send_msg, mu_k );
}
};
};
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase10 ********************/
class RuleBase10
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Trying to read data (pending), i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
  return (mu_p.mu_state) == (mu_FB_PR);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 30;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 33 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
              if ((mu_p.mu_state) == (mu_FB_PR)) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 30;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_PR;
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase11 ********************/
class RuleBase11
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Trying to read data, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
  return (mu_p.mu_state) == (mu_FB_I);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 33;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 36 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
              if ((mu_p.mu_state) == (mu_FB_I)) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 33;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_PR;
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase12 ********************/
class RuleBase12
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Trying to write data (pending), v:%s, i:%s", mu_v.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr35;
  if (!((mu_p.mu_state) == (mu_FB_PW))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_one_flag) == (mu_false)) ; 
}
  return mu__boolexpr35;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 36;
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 39 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr36;
  if (!((mu_p.mu_state) == (mu_FB_PW))) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = ((mu_one_flag) == (mu_false)) ; 
}
              if (mu__boolexpr36) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 36;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_PW;
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase13 ********************/
class RuleBase13
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Trying to write data, v:%s, i:%s", mu_v.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
  return (mu_p.mu_state) == (mu_FB_I);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 39;
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 42 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
              if ((mu_p.mu_state) == (mu_FB_I)) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 39;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_PW;
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase14 ********************/
class RuleBase14
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Write data, on DACKemw, v:%s, i:%s", mu_v.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
  return (mu_p.mu_state) == (mu_FB_PW);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 42;
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 45 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
              if ((mu_p.mu_state) == (mu_FB_PW)) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 42;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_EM;
mu_p.mu_value = mu_v;
mu_last_write = mu_v;
mu_UpdateSignals (  );
{
for(int mu_k = 1; mu_k <= 3; mu_k++) {
if ( (mu_i) != (mu_k) )
{
mu_send_msg.mu_mtype = mu_ReadModified;
mu_send_msg.mu_value = mu_v;
mu_SendMessage ( mu_send_msg, mu_k );
}
};
};
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase15 ********************/
class RuleBase15
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Write data, on DACK, v:%s, i:%s", mu_v.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
  return (mu_p.mu_state) == (mu_FB_PW);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 45;
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 48 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
              if ((mu_p.mu_state) == (mu_FB_PW)) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 45;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_EM;
mu_p.mu_value = mu_v;
mu_last_write = mu_v;
mu_UpdateSignals (  );
{
for(int mu_k = 1; mu_k <= 3; mu_k++) {
if ( (mu_i) != (mu_k) )
{
mu_send_msg.mu_mtype = mu_ReadModified;
mu_send_msg.mu_value = mu_v;
mu_SendMessage ( mu_send_msg, mu_k );
}
};
};
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase16 ********************/
class RuleBase16
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Invalidate, on DACKemw, v:%s, i:%s", mu_v.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
  return (mu_p.mu_state) == (mu_FB_PEMW);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 48;
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 51 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
              if ((mu_p.mu_state) == (mu_FB_PEMW)) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 48;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_I;
mu_p.mu_value.undefine();
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase17 ********************/
class RuleBase17
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Trying to write data, v:%s, i:%s", mu_v.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr37;
  if ((mu_p.mu_state) == (mu_FB_EM)) mu__boolexpr37 = TRUE ;
  else {
  mu__boolexpr37 = ((mu_p.mu_state) == (mu_FB_PEMW)) ; 
}
  return mu__boolexpr37;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 51;
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 54 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr38;
  if ((mu_p.mu_state) == (mu_FB_EM)) mu__boolexpr38 = TRUE ;
  else {
  mu__boolexpr38 = ((mu_p.mu_state) == (mu_FB_PEMW)) ; 
}
              if (mu__boolexpr38) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 51;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_PEMW;
mu_p.mu_value = mu_v;
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
/******************** RuleBase18 ********************/
class RuleBase18
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    return tsprintf("Write data, v:%s, i:%s", mu_v.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr39;
bool mu__boolexpr40;
  if ((mu_p.mu_state) == (mu_FB_SU)) mu__boolexpr40 = TRUE ;
  else {
  mu__boolexpr40 = ((mu_p.mu_state) == (mu_FB_EU)) ; 
}
  if (mu__boolexpr40) mu__boolexpr39 = TRUE ;
  else {
  mu__boolexpr39 = ((mu_p.mu_state) == (mu_FB_EM)) ; 
}
  return mu__boolexpr39;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 54;
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    while (what_rule < 57 )
      {
        if ( ( TRUE  ) ) {
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
bool mu__boolexpr41;
bool mu__boolexpr42;
  if ((mu_p.mu_state) == (mu_FB_SU)) mu__boolexpr42 = TRUE ;
  else {
  mu__boolexpr42 = ((mu_p.mu_state) == (mu_FB_EU)) ; 
}
  if (mu__boolexpr42) mu__boolexpr41 = TRUE ;
  else {
  mu__boolexpr41 = ((mu_p.mu_state) == (mu_FB_EM)) ; 
}
              if (mu__boolexpr41) {
                if ( ( TRUE  ) )
                  return;
                else
                  what_rule++;
              }
              else
                what_rule += 1;
        }
        else
          what_rule += 1;
    r = what_rule - 54;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    mu_i.value((r % 3) + 1);
    r = r / 3;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_Value mu_v;
    mu_v.value((r % 1) + 4);
    r = r / 1;
    static mu_1_Proc mu_i;
    mu_i.value((r % 3) + 1);
    r = r / 3;
  mu_1_ProcState& mu_p = mu_proc_state[mu_i];
mu_p.mu_state = mu_FB_EM;
mu_p.mu_value = mu_v;
mu_last_write = mu_v;
mu_UpdateSignals (  );
{
for(int mu_k = 1; mu_k <= 3; mu_k++) {
if ( (mu_i) != (mu_k) )
{
mu_send_msg.mu_mtype = mu_Invalidate;
mu_send_msg.mu_value.undefine();
mu_SendMessage ( mu_send_msg, mu_k );
}
};
};
mu_UpdateSignals (  );
  };

  bool UnFair()
  { return FALSE; }
};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
  RuleBase10 R10;
  RuleBase11 R11;
  RuleBase12 R12;
  RuleBase13 R13;
  RuleBase14 R14;
  RuleBase15 R15;
  RuleBase16 R16;
  RuleBase17 R17;
  RuleBase18 R18;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<3)
    { R0.NextRule(what_rule);
      if (what_rule<3) return; }
  if (what_rule>=3 && what_rule<6)
    { R1.NextRule(what_rule);
      if (what_rule<6) return; }
  if (what_rule>=6 && what_rule<9)
    { R2.NextRule(what_rule);
      if (what_rule<9) return; }
  if (what_rule>=9 && what_rule<12)
    { R3.NextRule(what_rule);
      if (what_rule<12) return; }
  if (what_rule>=12 && what_rule<15)
    { R4.NextRule(what_rule);
      if (what_rule<15) return; }
  if (what_rule>=15 && what_rule<18)
    { R5.NextRule(what_rule);
      if (what_rule<18) return; }
  if (what_rule>=18 && what_rule<21)
    { R6.NextRule(what_rule);
      if (what_rule<21) return; }
  if (what_rule>=21 && what_rule<24)
    { R7.NextRule(what_rule);
      if (what_rule<24) return; }
  if (what_rule>=24 && what_rule<27)
    { R8.NextRule(what_rule);
      if (what_rule<27) return; }
  if (what_rule>=27 && what_rule<30)
    { R9.NextRule(what_rule);
      if (what_rule<30) return; }
  if (what_rule>=30 && what_rule<33)
    { R10.NextRule(what_rule);
      if (what_rule<33) return; }
  if (what_rule>=33 && what_rule<36)
    { R11.NextRule(what_rule);
      if (what_rule<36) return; }
  if (what_rule>=36 && what_rule<39)
    { R12.NextRule(what_rule);
      if (what_rule<39) return; }
  if (what_rule>=39 && what_rule<42)
    { R13.NextRule(what_rule);
      if (what_rule<42) return; }
  if (what_rule>=42 && what_rule<45)
    { R14.NextRule(what_rule);
      if (what_rule<45) return; }
  if (what_rule>=45 && what_rule<48)
    { R15.NextRule(what_rule);
      if (what_rule<48) return; }
  if (what_rule>=48 && what_rule<51)
    { R16.NextRule(what_rule);
      if (what_rule<51) return; }
  if (what_rule>=51 && what_rule<54)
    { R17.NextRule(what_rule);
      if (what_rule<54) return; }
  if (what_rule>=54 && what_rule<57)
    { R18.NextRule(what_rule);
      if (what_rule<57) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=2) return R0.Condition(r-0);
  if (r>=3 && r<=5) return R1.Condition(r-3);
  if (r>=6 && r<=8) return R2.Condition(r-6);
  if (r>=9 && r<=11) return R3.Condition(r-9);
  if (r>=12 && r<=14) return R4.Condition(r-12);
  if (r>=15 && r<=17) return R5.Condition(r-15);
  if (r>=18 && r<=20) return R6.Condition(r-18);
  if (r>=21 && r<=23) return R7.Condition(r-21);
  if (r>=24 && r<=26) return R8.Condition(r-24);
  if (r>=27 && r<=29) return R9.Condition(r-27);
  if (r>=30 && r<=32) return R10.Condition(r-30);
  if (r>=33 && r<=35) return R11.Condition(r-33);
  if (r>=36 && r<=38) return R12.Condition(r-36);
  if (r>=39 && r<=41) return R13.Condition(r-39);
  if (r>=42 && r<=44) return R14.Condition(r-42);
  if (r>=45 && r<=47) return R15.Condition(r-45);
  if (r>=48 && r<=50) return R16.Condition(r-48);
  if (r>=51 && r<=53) return R17.Condition(r-51);
  if (r>=54 && r<=56) return R18.Condition(r-54);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
}
void Code(unsigned r)
{
  if (r<=2) { R0.Code(r-0); return; } 
  if (r>=3 && r<=5) { R1.Code(r-3); return; } 
  if (r>=6 && r<=8) { R2.Code(r-6); return; } 
  if (r>=9 && r<=11) { R3.Code(r-9); return; } 
  if (r>=12 && r<=14) { R4.Code(r-12); return; } 
  if (r>=15 && r<=17) { R5.Code(r-15); return; } 
  if (r>=18 && r<=20) { R6.Code(r-18); return; } 
  if (r>=21 && r<=23) { R7.Code(r-21); return; } 
  if (r>=24 && r<=26) { R8.Code(r-24); return; } 
  if (r>=27 && r<=29) { R9.Code(r-27); return; } 
  if (r>=30 && r<=32) { R10.Code(r-30); return; } 
  if (r>=33 && r<=35) { R11.Code(r-33); return; } 
  if (r>=36 && r<=38) { R12.Code(r-36); return; } 
  if (r>=39 && r<=41) { R13.Code(r-39); return; } 
  if (r>=42 && r<=44) { R14.Code(r-42); return; } 
  if (r>=45 && r<=47) { R15.Code(r-45); return; } 
  if (r>=48 && r<=50) { R16.Code(r-48); return; } 
  if (r>=51 && r<=53) { R17.Code(r-51); return; } 
  if (r>=54 && r<=56) { R18.Code(r-54); return; } 
}
int Priority(unsigned short r)
{
  if (r<=2) { return R0.Priority(); } 
  if (r>=3 && r<=5) { return R1.Priority(); } 
  if (r>=6 && r<=8) { return R2.Priority(); } 
  if (r>=9 && r<=11) { return R3.Priority(); } 
  if (r>=12 && r<=14) { return R4.Priority(); } 
  if (r>=15 && r<=17) { return R5.Priority(); } 
  if (r>=18 && r<=20) { return R6.Priority(); } 
  if (r>=21 && r<=23) { return R7.Priority(); } 
  if (r>=24 && r<=26) { return R8.Priority(); } 
  if (r>=27 && r<=29) { return R9.Priority(); } 
  if (r>=30 && r<=32) { return R10.Priority(); } 
  if (r>=33 && r<=35) { return R11.Priority(); } 
  if (r>=36 && r<=38) { return R12.Priority(); } 
  if (r>=39 && r<=41) { return R13.Priority(); } 
  if (r>=42 && r<=44) { return R14.Priority(); } 
  if (r>=45 && r<=47) { return R15.Priority(); } 
  if (r>=48 && r<=50) { return R16.Priority(); } 
  if (r>=51 && r<=53) { return R17.Priority(); } 
  if (r>=54 && r<=56) { return R18.Priority(); } 
}
char * Name(unsigned r)
{
  if (r<=2) return R0.Name(r-0);
  if (r>=3 && r<=5) return R1.Name(r-3);
  if (r>=6 && r<=8) return R2.Name(r-6);
  if (r>=9 && r<=11) return R3.Name(r-9);
  if (r>=12 && r<=14) return R4.Name(r-12);
  if (r>=15 && r<=17) return R5.Name(r-15);
  if (r>=18 && r<=20) return R6.Name(r-18);
  if (r>=21 && r<=23) return R7.Name(r-21);
  if (r>=24 && r<=26) return R8.Name(r-24);
  if (r>=27 && r<=29) return R9.Name(r-27);
  if (r>=30 && r<=32) return R10.Name(r-30);
  if (r>=33 && r<=35) return R11.Name(r-33);
  if (r>=36 && r<=38) return R12.Name(r-36);
  if (r>=39 && r<=41) return R13.Name(r-39);
  if (r>=42 && r<=44) return R14.Name(r-42);
  if (r>=45 && r<=47) return R15.Name(r-45);
  if (r>=48 && r<=50) return R16.Name(r-48);
  if (r>=51 && r<=53) return R17.Name(r-51);
  if (r>=54 && r<=56) return R18.Name(r-54);
  return NULL;
}
};
const unsigned numrules = 57;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 57


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Startstate 0");
  }
  void Code(unsigned short r)
  {
{
for(int mu_i = 1; mu_i <= 3; mu_i++) {
mu_proc_state[mu_i].mu_state = mu_FB_I;
};
};
mu_transaction_flag = mu_false;
mu_one_flag = mu_false;
mu_more_flag = mu_false;
mu_pending_write = mu_false;
mu_last_write.undefine();
mu_send_msg.undefine();
  };

  bool UnFair()
  { return FALSE; }
};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
int mu__invariant_43() // Invariant "value is undefined while invalid"
{
bool mu__quant44; 
mu__quant44 = TRUE;
{
for(int mu_n = 1; mu_n <= 3; mu_n++) {
bool mu__boolexpr45;
  if (!((mu_proc_state[mu_n].mu_state) == (mu_FB_I))) mu__boolexpr45 = TRUE ;
  else {
  mu__boolexpr45 = (mu_proc_state[mu_n].mu_value.isundefined()) ; 
}
if ( !(mu__boolexpr45) )
  { mu__quant44 = FALSE; break; }
};
};
return mu__quant44;
};

bool mu__condition_46() // Condition for Rule "value is undefined while invalid"
{
  return mu__invariant_43( );
}

/**** end rule declaration ****/

int mu__invariant_47() // Invariant "values in valid state match last write"
{
bool mu__quant48; 
mu__quant48 = TRUE;
{
for(int mu_n = 1; mu_n <= 3; mu_n++) {
bool mu__boolexpr49;
bool mu__boolexpr50;
bool mu__boolexpr51;
  if ((mu_proc_state[mu_n].mu_state) == (mu_FB_SU)) mu__boolexpr51 = TRUE ;
  else {
  mu__boolexpr51 = ((mu_proc_state[mu_n].mu_state) == (mu_FB_EM)) ; 
}
  if (mu__boolexpr51) mu__boolexpr50 = TRUE ;
  else {
  mu__boolexpr50 = ((mu_proc_state[mu_n].mu_state) == (mu_FB_EU)) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = TRUE ;
  else {
  mu__boolexpr49 = ((mu_proc_state[mu_n].mu_value) == (mu_last_write)) ; 
}
if ( !(mu__boolexpr49) )
  { mu__quant48 = FALSE; break; }
};
};
return mu__quant48;
};

bool mu__condition_52() // Condition for Rule "values in valid state match last write"
{
  return mu__invariant_47( );
}

/**** end rule declaration ****/

int mu__invariant_53() // Invariant "only one processor in EU state"
{
bool mu__quant54; 
mu__quant54 = TRUE;
{
for(int mu_p1 = 1; mu_p1 <= 3; mu_p1++) {
bool mu__quant55; 
mu__quant55 = TRUE;
{
for(int mu_p2 = 1; mu_p2 <= 3; mu_p2++) {
bool mu__boolexpr56;
bool mu__boolexpr57;
  if (!((mu_proc_state[mu_p1].mu_state) == (mu_FB_EU))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_proc_state[mu_p2].mu_state) == (mu_FB_EU)) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = TRUE ;
  else {
  mu__boolexpr56 = ((mu_p1) == (mu_p2)) ; 
}
if ( !(mu__boolexpr56) )
  { mu__quant55 = FALSE; break; }
};
};
if ( !(mu__quant55) )
  { mu__quant54 = FALSE; break; }
};
};
return mu__quant54;
};

bool mu__condition_58() // Condition for Rule "only one processor in EU state"
{
  return mu__invariant_53( );
}

/**** end rule declaration ****/

int mu__invariant_59() // Invariant "only one processor in EM state"
{
bool mu__quant60; 
mu__quant60 = TRUE;
{
for(int mu_p1 = 1; mu_p1 <= 3; mu_p1++) {
bool mu__quant61; 
mu__quant61 = TRUE;
{
for(int mu_p2 = 1; mu_p2 <= 3; mu_p2++) {
bool mu__boolexpr62;
bool mu__boolexpr63;
  if (!((mu_proc_state[mu_p1].mu_state) == (mu_FB_EM))) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_proc_state[mu_p2].mu_state) == (mu_FB_EM)) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = TRUE ;
  else {
  mu__boolexpr62 = ((mu_p1) == (mu_p2)) ; 
}
if ( !(mu__boolexpr62) )
  { mu__quant61 = FALSE; break; }
};
};
if ( !(mu__quant61) )
  { mu__quant60 = FALSE; break; }
};
};
return mu__quant60;
};

bool mu__condition_64() // Condition for Rule "only one processor in EM state"
{
  return mu__invariant_59( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"only one processor in EM state", &mu__condition_64, NULL, FALSE},
{"only one processor in EU state", &mu__condition_58, NULL, FALSE},
{"values in valid state match last write", &mu__condition_52, NULL, FALSE},
{"value is undefined while invalid", &mu__condition_46, NULL, FALSE},
};
const unsigned short numinvariants = 4;

/******************/
bool mu__true_live() { return TRUE; }
/******************/

/********************
  Liveness records
 ********************/
const liverec livenesses[] = {
{ NULL, NULL, NULL, NULL, E }};
const unsigned short numlivenesses = 0;

/********************
  Fairstates records
 ********************/
const rulerec fairnesses[] = {
{ NULL, NULL, NULL, FALSE }};
const unsigned short numfairnesses = 0;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
pending_write:NoScalarset
one_flag:NoScalarset
transaction_flag:NoScalarset
last_write:NoScalarset
more_flag:NoScalarset
send_msg:NoScalarset
proc_state:ScalarsetArrayOfFree
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  int class_mu_1_Proc[3];
  int undefined_class_mu_1_Proc;// has the highest class number

  void Print_class_mu_1_Proc();
  bool OnlyOneRemain_mu_1_Proc;
  bool MTO_class_mu_1_Proc()
  {
    int i,j;
    if (OnlyOneRemain_mu_1_Proc)
      return FALSE;
    for (i=0; i<3; i++)
      for (j=0; j<3; j++)
        if (i!=j && class_mu_1_Proc[i]== class_mu_1_Proc[j])
	    return TRUE;
    OnlyOneRemain_mu_1_Proc = TRUE;
    return FALSE;
  }
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  int * in_mu_1_Proc;
  typedef int arr_mu_1_Proc[3];
  arr_mu_1_Proc * perm_mu_1_Proc;
  arr_mu_1_Proc * revperm_mu_1_Proc;

  int size_mu_1_Proc[3];
  bool reversed_sorted_mu_1_Proc(int start, int end);
  void reverse_reversed_mu_1_Proc(int start, int end);

  // procedure for explicit representation
  bool ok0(mu_1_Proc* perm, int size, mu_1_Proc k);
  void GenPerm0(mu_1_Proc* perm, int size, unsigned long& index);

  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
void PermSet::Print_class_mu_1_Proc()
{
  cout << "class_mu_1_Proc:\t";
  for (int i=0; i<3; i++)
    cout << class_mu_1_Proc[i];
  cout << " " << undefined_class_mu_1_Proc << "\n";
}
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
    for (i=0; i<3; i++)
      for (j=0; j<3; j++)
        if (i!=j && class_mu_1_Proc[i]== class_mu_1_Proc[j])
	    return TRUE;
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
    mu_1_Proc Perm0[3];

  /********************
   declaration of class variables
  ********************/
  in = new bool[6];
 in_mu_1_Proc = new int[6];
 perm_mu_1_Proc = new arr_mu_1_Proc[6];
 revperm_mu_1_Proc = new arr_mu_1_Proc[6];

    // Set perm and revperm
    count = 0;
    for (i=1; i<=3; i++)
      {
        Perm0[0].value(i);
        GenPerm0(Perm0, 1, count);
      }
    if (count!=6)
      Error.Error( "unable to initialize PermSet");
    for (i=0; i<6; i++)
      for (j=1; j<=3; j++)
        for (k=1; k<=3; k++)
          if (revperm_mu_1_Proc[i][k-1]==j)   // k - base 
            perm_mu_1_Proc[i][j-1]=k; // j - base 

    // setting up combination of permutations
    // for different scalarset
    int carry;
    int i_mu_1_Proc = 0;
    size = 6;
    count = 6;
    for (i=0; i<6; i++)
      {
        carry = 1;
        in[i]= TRUE;
      in_mu_1_Proc[i] = i_mu_1_Proc;
      i_mu_1_Proc += carry;
      if (i_mu_1_Proc >= 6) { i_mu_1_Proc = 0; carry = 1; } 
      else { carry = 0; } 
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
 in_mu_1_Proc = new int[1];
 perm_mu_1_Proc = new arr_mu_1_Proc[1];
 revperm_mu_1_Proc = new arr_mu_1_Proc[1];
  in[0] = TRUE;
    in_mu_1_Proc[0] = 0;
  }
}
void PermSet::ResetToSimple()
{
  int i;
  for (i=0; i<3; i++)
    class_mu_1_Proc[i]=0;
  undefined_class_mu_1_Proc=0;
  OnlyOneRemain_mu_1_Proc = FALSE;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<6; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;
  int start_mu_1_Proc[3];
  int size_mu_1_Proc[3];
  bool should_be_in_mu_1_Proc[6];

  // Setup range for mapping
  start = 0;
  for (j=0; j<=undefined_class_mu_1_Proc; j++) // class number
    {
      class_size = 0;
      for (k=0; k<3; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_Proc[k]==j)
	  class_size++;
      for (k=0; k<3; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_Proc[k]==j)
	  {
	    size_mu_1_Proc[k] = class_size;
	    start_mu_1_Proc[k] = start;
	  }
      start+=class_size;
    }

  // To be In or not to be
  for (i=0; i<6; i++) // set up
    should_be_in_mu_1_Proc[i] = TRUE;
  for (i=0; i<6; i++) // to be in or not to be
    for (k=0; k<3; k++) // step through class_mu_1_pid[k]
      if (! (perm_mu_1_Proc[i][k]-1 >=start_mu_1_Proc[k] 
	     && perm_mu_1_Proc[i][k]-1 < start_mu_1_Proc[k] + size_mu_1_Proc[k]) )
  	    {
	      should_be_in_mu_1_Proc[i] = FALSE;
	      break;
	    }

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<6; i++)
    {
      in[i] = TRUE;
      if (in[i] && !should_be_in_mu_1_Proc[in_mu_1_Proc[i]]) in[i] = FALSE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  start = 0;
  for (j=0; j<=undefined_class_mu_1_Proc; j++) // class number
    {
      class_size = 0;
      for (k=0; k<3; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_Proc[k]==j)
	  class_size++;
      for (k=0; k<3; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_Proc[k]==j)
	  {
	    size_mu_1_Proc[k] = class_size;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_Proc; j++) // class number
    {
      for (k=0; k<3; k++) // step through class_mu_1_pid[k]
	    if (class_mu_1_Proc[k]==j)
	      revperm_mu_1_Proc[0][start++] = k+1;
    }
  for (j=0; j<3; j++)
    for (k=0; k<3; k++)
      if (revperm_mu_1_Proc[0][k]==j+1)
        perm_mu_1_Proc[0][j]=k+1;
  Presentation = Explicit;
}
bool PermSet::ok0(mu_1_Proc* Perm, int size, mu_1_Proc k)
{
  for (int i=0; i<size; i++)
    if(Perm[i].value()==k)
      return FALSE;
  return TRUE;
}
void PermSet::GenPerm0(mu_1_Proc* Perm,int size, unsigned long& count)
{
  int i;
  if (size!=3)
    {
      for (i=1; i<=3; i++)
        if(ok0(Perm,size,i))
          {
            Perm[size].value(i);
            GenPerm0(Perm, size+1, count);
          }
    }
  else
    {
      for (i=1; i<=3; i++)
        revperm_mu_1_Proc[count][i-1]=Perm[i-1].value();// i - base
      count++;
    }
}
bool PermSet::reversed_sorted_mu_1_Proc(int start, int end)
{
  int i,j;

  for (i=start; i<end; i++)
    if (revperm_mu_1_Proc[0][i]<revperm_mu_1_Proc[0][i+1])
      return FALSE;
  return TRUE;
}
void PermSet::reverse_reversed_mu_1_Proc(int start, int end)
{
  int i,j;
  int temp;

  for (i=start, j=end; i<j; i++,j--) 
    {
      temp = revperm_mu_1_Proc[0][j];
      revperm_mu_1_Proc[0][j] = revperm_mu_1_Proc[0][i];
      revperm_mu_1_Proc[0][i] = temp;
    }
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
  for (start = 0; start < 3; )
    {
      end = start-1+size_mu_1_Proc[revperm_mu_1_Proc[0][start]-1];
      if (reversed_sorted_mu_1_Proc(start,end))
	       {
	  reverse_reversed_mu_1_Proc(start,end);
	  start = end+1;
	}
      else
	{
	  nexted = TRUE;
	  for (j = start; j<end; j++)
	    {
	      if (reversed_sorted_mu_1_Proc(j+1,end))
		{
		  for (k = end; k>j; k--)
		    {
		      if (revperm_mu_1_Proc[0][j]<revperm_mu_1_Proc[0][k])
			{
			  // swap j, k
			  temp = revperm_mu_1_Proc[0][j];
			  revperm_mu_1_Proc[0][j] = revperm_mu_1_Proc[0][k];
			  revperm_mu_1_Proc[0][k] = temp;
			  break;
			}
		    }
		  reverse_reversed_mu_1_Proc(j+1,end);
		  break;
		}
	    }
	  break;
	}
    }
if (!nexted) return FALSE;
  for (j=0; j<3; j++)
    for (k=0; k<3; k++)
      if (revperm_mu_1_Proc[0][k]==j+1)   // k - base 
	perm_mu_1_Proc[0][j]=k+1; // j - base 
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_pending_write.MultisetSort();
        mu_one_flag.MultisetSort();
        mu_transaction_flag.MultisetSort();
        mu_last_write.MultisetSort();
        mu_more_flag.MultisetSort();
        mu_send_msg.MultisetSort();
        mu_proc_state.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_Proc::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined())
    value(Perm.perm_mu_1_Proc[Perm.in_mu_1_Proc[i]][value()-1]); // value - base
};
void mu_1_Proc::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_Proc[value()-1]==Perm.undefined_class_mu_1_Proc) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<3; i++)
          if (Perm.class_mu_1_Proc[i] == Perm.undefined_class_mu_1_Proc && i!=value()-1)
            Perm.class_mu_1_Proc[i]++;
        value(1 + Perm.undefined_class_mu_1_Proc++);
      }
    else 
      {
        value(Perm.class_mu_1_Proc[value()-1]+1);
      }
}
void mu_1_Proc::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_Proc::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_Proc[value()-1]==Perm.undefined_class_mu_1_Proc) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<3; i++)
          if (Perm.class_mu_1_Proc[i] == Perm.undefined_class_mu_1_Proc && i!=value()-1)
            Perm.class_mu_1_Proc[i]++;
        Perm.undefined_class_mu_1_Proc++;
      }
}
void mu_1_Proc::ArrayLimit(PermSet& Perm) {}
void mu_1_Proc::Limit(PermSet& Perm) {}
void mu_1_Proc::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_Value::Permute(PermSet& Perm, int i) {}
void mu_1_Value::SimpleCanonicalize(PermSet& Perm) {}
void mu_1_Value::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_Value::SimpleLimit(PermSet& Perm) {}
void mu_1_Value::ArrayLimit(PermSet& Perm) {}
void mu_1_Value::Limit(PermSet& Perm) {}
void mu_1_Value::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1__type_0::Permute(PermSet& Perm, int i) {};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm) {};
void mu_1__type_0::Canonicalize(PermSet& Perm) {};
void mu_1__type_0::SimpleLimit(PermSet& Perm) {};
void mu_1__type_0::ArrayLimit(PermSet& Perm) {};
void mu_1__type_0::Limit(PermSet& Perm) {};
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_ProcState::Permute(PermSet& Perm, int i)
{
};
void mu_1_ProcState::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_ProcState::Canonicalize(PermSet& Perm)
{
};
void mu_1_ProcState::SimpleLimit(PermSet& Perm){}
void mu_1_ProcState::ArrayLimit(PermSet& Perm){}
void mu_1_ProcState::Limit(PermSet& Perm)
{
};
void mu_1_ProcState::MultisetLimit(PermSet& Perm)
{
};
void mu_1_MessageType::Permute(PermSet& Perm, int i) {};
void mu_1_MessageType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_MessageType::Canonicalize(PermSet& Perm) {};
void mu_1_MessageType::SimpleLimit(PermSet& Perm) {};
void mu_1_MessageType::ArrayLimit(PermSet& Perm) {};
void mu_1_MessageType::Limit(PermSet& Perm) {};
void mu_1_MessageType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_Message::Permute(PermSet& Perm, int i)
{
};
void mu_1_Message::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Message::Canonicalize(PermSet& Perm)
{
};
void mu_1_Message::SimpleLimit(PermSet& Perm){}
void mu_1_Message::ArrayLimit(PermSet& Perm){}
void mu_1_Message::Limit(PermSet& Perm)
{
};
void mu_1_Message::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=3; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_Proc[Perm.in_mu_1_Proc[i]][j-1]];};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_Proc;
  int compare;
  static mu_1_ProcState value[3];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_Proc[3];
  bool pos_mu_1_Proc[3][3];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_Proc[3];
  int start_mu_1_Proc[3];
  // canonicalization
  static mu_1__type_1 temp;
  // sorting mu_1_Proc
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_Proc())
    {
      for (i=0; i<3; i++)
        for (j=0; j<3; j++)
          pos_mu_1_Proc[i][j]=FALSE;
      count_mu_1_Proc = 0;
      for (i=0; i<3; i++)
        {
          for (j=0; j<count_mu_1_Proc; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_Proc[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_Proc; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<3; z++)
                        pos_mu_1_Proc[k][z] = pos_mu_1_Proc[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<3; z++)
                    pos_mu_1_Proc[j][z] = FALSE;
                  pos_mu_1_Proc[j][i] = TRUE;
                  count_mu_1_Proc++;
                  break;
                }
            }
          if (j==count_mu_1_Proc)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<3; z++)
                pos_mu_1_Proc[j][z] = FALSE;
              pos_mu_1_Proc[j][i] = TRUE;
              count_mu_1_Proc++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_Proc() && count_mu_1_Proc>1)
    {
      // limit
      for (j=0; j<3; j++) // class priority
        {
          for (i=0; i<count_mu_1_Proc; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<3; k++) // step through class
                goodset_mu_1_Proc[k] = FALSE;
              for (k=0; k<3; k++) // step through class
                if (pos_mu_1_Proc[i][k] && Perm.class_mu_1_Proc[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_Proc[k] = TRUE;
                    pos_mu_1_Proc[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<3; k++)
                    if ( Perm.class_mu_1_Proc[k] == j && !goodset_mu_1_Proc[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<3; k++)
                        if (Perm.class_mu_1_Proc[k]>j
                            || ( Perm.class_mu_1_Proc[k] == j && !goodset_mu_1_Proc[k] ) )
                          Perm.class_mu_1_Proc[k]++;
                      Perm.undefined_class_mu_1_Proc++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_Proc())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_Proc; j++) // class number
        {
          class_size = 0;
          for (k=0; k<3; k++) // step through class[k]
            if (Perm.class_mu_1_Proc[k]==j)
              class_size++;
          for (k=0; k<3; k++) // step through class[k]
            if (Perm.class_mu_1_Proc[k]==j)
              {
                size_mu_1_Proc[k] = class_size;
                start_mu_1_Proc[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<3; i++)
        for (j=0; j<3; j++)
         if (i >=start_mu_1_Proc[j] 
             && i < start_mu_1_Proc[j] + size_mu_1_Proc[j])
           {
             array[i+0] = temp[j+1];
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<3; j++)
        array[Perm.class_mu_1_Proc[j]+0] = temp[j+1];
    }
}
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_Proc;
  int compare;
  static mu_1_ProcState value[3];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_Proc[3];
  bool pos_mu_1_Proc[3][3];
  // sorting mu_1_Proc
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_Proc())
    {
      for (i=0; i<3; i++)
        for (j=0; j<3; j++)
          pos_mu_1_Proc[i][j]=FALSE;
      count_mu_1_Proc = 0;
      for (i=0; i<3; i++)
        {
          for (j=0; j<count_mu_1_Proc; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_Proc[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_Proc; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<3; z++)
                        pos_mu_1_Proc[k][z] = pos_mu_1_Proc[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<3; z++)
                    pos_mu_1_Proc[j][z] = FALSE;
                  pos_mu_1_Proc[j][i] = TRUE;
                  count_mu_1_Proc++;
                  break;
                }
            }
          if (j==count_mu_1_Proc)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<3; z++)
                pos_mu_1_Proc[j][z] = FALSE;
              pos_mu_1_Proc[j][i] = TRUE;
              count_mu_1_Proc++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_Proc() && count_mu_1_Proc>1)
    {
      // limit
      for (j=0; j<3; j++) // class priority
        {
          for (i=0; i<count_mu_1_Proc; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<3; k++) // step through class
                goodset_mu_1_Proc[k] = FALSE;
              for (k=0; k<3; k++) // step through class
                if (pos_mu_1_Proc[i][k] && Perm.class_mu_1_Proc[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_Proc[k] = TRUE;
                    pos_mu_1_Proc[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<3; k++)
                    if ( Perm.class_mu_1_Proc[k] == j && !goodset_mu_1_Proc[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<3; k++)
                        if (Perm.class_mu_1_Proc[k]>j
                            || ( Perm.class_mu_1_Proc[k] == j && !goodset_mu_1_Proc[k] ) )
                          Perm.class_mu_1_Proc[k]++;
                      Perm.undefined_class_mu_1_Proc++;
                    }
                }
            }
        }
    }
}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_pending_write.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pending_write.MultisetSort();
              mu_one_flag.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_one_flag.MultisetSort();
              mu_transaction_flag.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_transaction_flag.MultisetSort();
              mu_last_write.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_last_write.MultisetSort();
              mu_more_flag.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_more_flag.MultisetSort();
              mu_send_msg.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_send_msg.MultisetSort();
              mu_proc_state.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_proc_state.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_pending_write.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pending_write.MultisetSort();
          mu_one_flag.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_one_flag.MultisetSort();
          mu_transaction_flag.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_transaction_flag.MultisetSort();
          mu_last_write.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_last_write.MultisetSort();
          mu_more_flag.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_more_flag.MultisetSort();
          mu_send_msg.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_send_msg.MultisetSort();
          mu_proc_state.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_proc_state.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_pending_write.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pending_write.MultisetSort();
              mu_one_flag.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_one_flag.MultisetSort();
              mu_transaction_flag.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_transaction_flag.MultisetSort();
              mu_last_write.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_last_write.MultisetSort();
              mu_more_flag.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_more_flag.MultisetSort();
              mu_send_msg.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_send_msg.MultisetSort();
              mu_proc_state.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_proc_state.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_pending_write.MultisetSort();
      mu_one_flag.MultisetSort();
      mu_transaction_flag.MultisetSort();
      mu_last_write.MultisetSort();
      mu_more_flag.MultisetSort();
      mu_send_msg.MultisetSort();
      mu_proc_state.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pending_write.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pending_write.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_one_flag.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_one_flag.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_transaction_flag.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_transaction_flag.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_last_write.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_last_write.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_more_flag.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_more_flag.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_send_msg.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_send_msg.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_proc_state.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_proc_state.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

  mu_proc_state.Canonicalize(Perm);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

  mu_proc_state.Canonicalize(Perm);

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

  mu_proc_state.Canonicalize(Perm);

};

/********************
  Include
 ********************/
#include "mu_epilog.inc"
