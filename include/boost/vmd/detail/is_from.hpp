#if !defined(BOOST_VMD_DETAIL_IS_FROM_HPP)
#define BOOST_VMD_DETAIL_IS_FROM_HPP

#include <boost/vmd/detail/match_identifier.hpp>

#define BOOST_VMD_REGISTER_BOOST_VMD_GENERAL_TUPLE  (BOOST_VMD_GENERAL_TUPLE)
#define BOOST_VMD_REGISTER_BOOST_VMD_EXACT_TUPLE  (BOOST_VMD_EXACT_TUPLE)
#define BOOST_VMD_REGISTER_BOOST_VMD_SPECIFIC_ARRAY (BOOST_VMD_SPECIFIC_ARRAY)
#define BOOST_VMD_REGISTER_BOOST_VMD_SPECIFIC_LIST  (BOOST_VMD_SPECIFIC_LIST)
#define BOOST_VMD_REGISTER_BOOST_VMD_SPECIFIC_SEQ   (BOOST_VMD_SPECIFIC_SEQ)
#define BOOST_VMD_REGISTER_BOOST_VMD_SPECIFIC_TUPLE (BOOST_VMD_SPECIFIC_TUPLE)
#define BOOST_VMD_REGISTER_BOOST_VMD_SPECIFIC_IDENTIFIER (BOOST_VMD_SPECIFIC_IDENTIFIER)
#define BOOST_VMD_REGISTER_BOOST_VMD_SPECIFIC_NUMBER (BOOST_VMD_SPECIFIC_NUMBER)

#define BOOST_VMD_DETECT_BOOST_VMD_GENERAL_TUPLE_BOOST_VMD_GENERAL_TUPLE
#define BOOST_VMD_DETECT_BOOST_VMD_EXACT_TUPLE_BOOST_VMD_EXACT_TUPLE
#define BOOST_VMD_DETECT_BOOST_VMD_SPECIFIC_ARRAY_BOOST_VMD_SPECIFIC_ARRAY
#define BOOST_VMD_DETECT_BOOST_VMD_SPECIFIC_LIST_BOOST_VMD_SPECIFIC_LIST
#define BOOST_VMD_DETECT_BOOST_VMD_SPECIFIC_SEQ_BOOST_VMD_SPECIFIC_SEQ
#define BOOST_VMD_DETECT_BOOST_VMD_SPECIFIC_TUPLE_BOOST_VMD_SPECIFIC_TUPLE
#define BOOST_VMD_DETECT_BOOST_VMD_SPECIFIC_IDENTIFIER_BOOST_VMD_SPECIFIC_IDENTIFIER
#define BOOST_VMD_DETECT_BOOST_VMD_SPECIFIC_NUMBER_BOOST_VMD_SPECIFIC_NUMBER

#define BOOST_VMD_DETAIL_IS_GENERAL_TUPLE(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_GENERAL_TUPLE) \
/**/

#define BOOST_VMD_DETAIL_IS_EXACT_TUPLE(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_EXACT_TUPLE) \
/**/

#define BOOST_VMD_DETAIL_IS_SPECIFIC_ARRAY(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_SPECIFIC_ARRAY) \
/**/

#define BOOST_VMD_DETAIL_IS_SPECIFIC_LIST(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_SPECIFIC_LIST) \
/**/

#define BOOST_VMD_DETAIL_IS_SPECIFIC_SEQ(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_SPECIFIC_SEQ) \
/**/

#define BOOST_VMD_DETAIL_IS_SPECIFIC_TUPLE(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_SPECIFIC_TUPLE) \
/**/

#define BOOST_VMD_DETAIL_IS_SPECIFIC_IDENTIFIER(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_SPECIFIC_IDENTIFIER) \
/**/

#define BOOST_VMD_DETAIL_IS_SPECIFIC_NUMBER(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_SPECIFIC_NUMBER) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_FROM_HPP */
