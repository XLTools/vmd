#if !defined(BOOST_VMD_SEQUENCE_HPP)
#define BOOST_VMD_SEQUENCE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

// ELEM

/** \brief Expands to a tuple of the v-sequence type/element and the preprocessor tokens after the v-sequence element.

	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the element 
    found is tested among other types for a possible tuple, rather than the specific tuples 
    of an array or a list. With BOOST_VMD_RETURN_TYPE, in order to determine the element 
    type, the element found is tested among other types for a possible array and a possible list 
    before being tested for a possible tuple. For the dangers of testing a tuple as an array or 
    a list, see the main documentation.

    returns   = the result is a tuple of two elements.
    			If the v-sequence is empty or the element number is not in the range
    			both of the tuple elements are empty. Otherwise:
    			* The first tuple element is the v-type as a tuple with the type being
    			  the first value and the element being the second value.
   				* The second tuple element are the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_ELEM(elem,...) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM(BOOST_VMD_ALLOW_ALL,elem,__VA_ARGS__) \
/**/

/** \brief Reentrant - expands to a tuple of the v-sequence type/element and the preprocessor tokens after the v-sequence element.

	d         = The next available BOOST_PP_WHILE iteration.
	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the element 
    found is tested among other types for a possible tuple, rather than the specific tuples 
    of an array or a list. With BOOST_VMD_RETURN_TYPE, in order to determine the element 
    type, the element found is tested among other types for a possible array and a possible list 
    before being tested for a possible tuple. For the dangers of testing a tuple as an array or 
    a list, see the main documentation.

    returns   = the result is a tuple of two elements.
    			If the v-sequence is empty or the element number is not in the range
    			both of the tuple elements are empty. Otherwise:
    			* The first tuple element is the v-type as a tuple with the type being
    			  the first value and the element being the second value.
   				* The second tuple element are the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_ELEM_D(d,elem,...) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_D(d,BOOST_VMD_ALLOW_ALL,elem,__VA_ARGS__) \
/**/

// AFTER ELEM

/** \brief Expands to the preprocessor tokens after a v-sequence element.

	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty or the element number is not in the range
    			returns nothing, otherwise expands to the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_AFTER_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_AFTER(elem,vseq) \
/**/

/** \brief Reentrant - expands to the preprocessor tokens after a v-sequence element.

	d         = The next available BOOST_PP_WHILE iteration.
	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty or the element number is not in the range
    			returns nothing, otherwise expands to the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_AFTER_ELEM_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_AFTER_D(d,elem,vseq) \
/**/

// SIZE

/** \brief Expands to the size of a v-sequence.

    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty returns 0, else returns the number of v-types
    			in the v-sequence.
    
*/
#define BOOST_VMD_SIZE(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_SIZE(vseq) \
/**/

/** \brief Reentrant - expands to the size of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty returns 0, else returns the number of v-types
    			in the v-sequence.
    
*/
#define BOOST_VMD_SIZE_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_SIZE_D(d,vseq) \
/**/

// TO_ARRAY

/** \brief Expands to an array whose elements are the v-types of a v-sequence.

    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = A Boost PP array. If the v-sequence is empty the array is a 0-size array
    			with no elements, otherwise it is an array whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_ARRAY(...) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_ARRAY(__VA_ARGS__) \
/**/

/** \brief Reentrant - expands to an array whose elements are the v-types of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = A Boost PP array. If the v-sequence is empty the array is a 0-size array
    			with no elements, othwerwise it is an array whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_ARRAY_D(d,...) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_ARRAY_D(d,__VA_ARGS__) \
/**/

// TO_LIST

/** \brief Expands to a list whose elements are the v-types of a v-sequence.

    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = A Boost PP list. If the v-sequence is empty the list is a 0-size list
    			with no elements, othwerwise it is a list whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_LIST(...) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_LIST(__VA_ARGS__) \
/**/

/** \brief Reentrant - expands to a list whose elements are the v-types of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = A Boost PP list. If the v-sequence is empty the list is a 0-size list
    			with no elements, othwerwise it is a list whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_LIST_D(d,...) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_LIST_D(d,__VA_ARGS__) \
/**/

// TO_SEQ

/** \brief Expands to a seq whose elements are the v-types of a v-sequence.

    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = A Boost PP seq. If the v-sequence is empty expands to nothing,
    			otherwise it is a seq whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_SEQ(...) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_SEQ(__VA_ARGS__) \
/**/

/** \brief Reentrant - expands to a seq whose elements are the v-types of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = A Boost PP seq. If the v-sequence is empty expands to nothing,
    			othwerwise it is a seq whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_SEQ_D(d,...) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_SEQ_D(d,__VA_ARGS__) \
/**/

// TO_TUPLE

/** \brief Expands to a tuple whose elements are the v-types of a v-sequence.

    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = A Boost PP tuple. If the v-sequence is empty expands to nothing,
    			otherwise it is a tuple whose each element is a v-type,
    			which is a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_TUPLE(...) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_TUPLE(__VA_ARGS__) \
/**/

/** \brief Reentrant - expands to a tuple whose elements are the v-types of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = A Boost PP tuple. If the v-sequence is empty expands to nothing,
    			otherwise it is a tuple whose each element is a v-type,
    			which is a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_TUPLE_D(d,...) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_TUPLE_D(d,__VA_ARGS__) \
/**/

// ENUM

/** \brief Expands to comma-separated elements which are the v-types of a v-sequence.

    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = Comma-separated data. If the v-sequence is empty expands to nothing,
    			otherwise it is comma-separated data whose each element is a v-type,
    			which is a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_ENUM(...) \
	BOOST_VMD_DETAIL_SEQUENCE_ENUM(__VA_ARGS__) \
/**/

/** \brief Reentrant - expands to comma-separated elements which are the v-types of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = Comma-separated data. If the v-sequence is empty expands to nothing,
    			othwerwise it is comma-separated data whose each element is a v-type,
    			which is a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_ENUM_D(d,...) \
	BOOST_VMD_DETAIL_SEQUENCE_ENUM_D(d,__VA_ARGS__) \
/**/

#define BOOST_VMD_IS_UNARY(vseq) \
	BOOST_VMD_DETAIL_IS_UNARY(vseq) \
/**/

#define BOOST_VMD_IS_MULTI(vseq) \
	BOOST_VMD_DETAIL_IS_MULTI(vseq) \
/**/

#define BOOST_VMD_TYPE(...) \
	BOOST_VMD_DETAIL_TYPE(__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_SEQUENCE_HPP */
