#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/array.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/array/elem.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define AN_ARRAY_PLUS (4,(mmf,34,^^,!)) 456
  #define PLUS_ANARRAY yyt (2,(j,ii%))
  #define JDATA ggh
  #define KDATA (2,(a,b)) name
  #define A_SEQ ((1,(25)))((1,(26)))((1,(27)))
#if !BOOST_VMD_MSVC_V8
  #define AN_EMPTY_ARRAY_PLUS (0,()) 46
#endif
  
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_ARRAY(anything))));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_ARRAY(anything))));
  
  BOOST_TEST_EQ(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_ARRAY(AN_ARRAY_PLUS)),456);
  BOOST_TEST_EQ(BOOST_PP_ARRAY_ELEM(1,BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_ARRAY(AN_ARRAY_PLUS))),34);
  
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_ARRAY(PLUS_ANARRAY))));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_ARRAY(PLUS_ANARRAY))));
  
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_ARRAY(JDATA))));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_ARRAY(JDATA))));
  
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_ARRAY(KDATA))));
  
  BOOST_TEST_EQ(BOOST_PP_ARRAY_ELEM(0,BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_ARRAY(BOOST_PP_SEQ_ELEM(2,A_SEQ)))),27);
  
#if !BOOST_VMD_MSVC_V8
  BOOST_TEST_EQ(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_ARRAY(AN_EMPTY_ARRAY_PLUS)),46);
#endif
  
#endif

  return boost::report_errors();
  
  }
