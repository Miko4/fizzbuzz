#include <boost/preprocessor/repetition/repeat.hpp>
#include <boost/preprocessor/control/if.hpp>
#include <boost/preprocessor/arithmetic/mod.hpp>
#include <boost/preprocessor/logical/or.hpp>

#define fizzbuzz(z,n,data) \
                       BOOST_PP_IF(BOOST_PP_OR(BOOST_PP_MOD(n,3),BOOST_PP_MOD(n,5)),\
                           BOOST_PP_IF(BOOST_PP_MOD(n,3),\
                               BOOST_PP_IF(BOOST_PP_MOD(n,5),\
                                   n,\
                                   Buzz),\
                               Fizz ),\
                           FizzBuzz)\

BOOST_PP_REPEAT(101,fizzbuzz,1)
